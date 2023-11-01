#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define N 5 // Number of philosophers
#define RUN_TIME 5 // Running time in seconds

sem_t forks[N]; // Semaphores representing the forks
sem_t mutex; // Mutex to protect critical sections
pthread_t philosophers[N]; // Philosopher threads
int running = 1;

void *philosopher(void *arg) {
    int philosopher_id = *(int *)arg;
    int left_fork = philosopher_id;
    int right_fork = (philosopher_id + 1) % N;

    while (running) {
        // Think
        printf("Philosopher %d is thinking\n", philosopher_id);
        sleep(1);

        if (!running) {
            break; // Exit the loop if the program is terminating
        }

        // Pick up forks
        sem_wait(&mutex);
        sem_wait(&forks[left_fork]);
        sem_wait(&forks[right_fork]);
        sem_post(&mutex);

        // Eat
        printf("Philosopher %d is eating\n", philosopher_id);
        sleep(1);

        // Release forks
        sem_post(&forks[left_fork]);
        sem_post(&forks[right_fork]);

        // Finish eating
        printf("Philosopher %d finished eating\n", philosopher_id);
    }
    return NULL;
}

void *control_thread(void *arg) {
    sleep(RUN_TIME);
    running = 0;
    return NULL;
}

int main() {
    int philosopher_ids[N];
    pthread_t control;

    // Initialize the semaphores for the forks
    for (int i = 0; i < N; i++) {
        sem_init(&forks[i], 0, 1);
    }

    // Initialize the mutex
    sem_init(&mutex, 0, 1);

    // Create philosopher threads
    for (int i = 0; i < N; i++) {
        philosopher_ids[i] = i;
        pthread_create(&philosophers[i], NULL, philosopher, &philosopher_ids[i]);
    }

    // Create a control thread to manage running time
    pthread_create(&control, NULL, control_thread, NULL);

    // Wait for the control thread to finish
    pthread_join(control, NULL);

    // Terminate the philosopher threads and wait for them to finish
    for (int i = 0; i < N; i++) {
        pthread_join(philosophers[i], NULL);
    }

    // Destroy the semaphores
    for (int i = 0; i < N; i++) {
        sem_destroy(&forks[i]);
    }

    // Destroy the mutex
    sem_destroy(&mutex);

    return 0;
}

