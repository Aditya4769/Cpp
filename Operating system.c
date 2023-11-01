#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NUM_PHILOSOPHERS 5
#define EATING_TIME 2

pthread_t philosophers[NUM_PHILOSOPHERS];
sem_t forks[NUM_PHILOSOPHERS];
sem_t mutex;

void *philosopher(void *arg) {
    int id = *(int *)arg;
    int left = id;
    int right = (id + 1) % NUM_PHILOSOPHERS;

    while (1) {
        // Think
        printf("Philosopher %d is thinking\n", id);
        sleep(rand() % 3);

        // Pick up forks
        sem_wait(&mutex);
        sem_wait(&forks[left]);
        sem_wait(&forks[right]);
        sem_post(&mutex);

        // Eat
        printf("Philosopher %d is eating\n", id);
        sleep(EATING_TIME);

        // Put down forks
        sem_post(&forks[left]);
        sem_post(&forks[right]);
    }
}

int main() {
    srand(time(NULL));

    sem_init(&mutex, 0, 1);

    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        sem_init(&forks[i], 0, 1);
    }

    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        int *id = malloc(sizeof(int));
        *id = i;
        pthread_create(&philosophers[i], NULL, philosopher, id);
    }

    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        pthread_join(philosophers[i], NULL);
    }

    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        sem_destroy(&forks[i]);
    }

    sem_destroy(&mutex);

    return 0;
}
