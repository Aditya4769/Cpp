\//// C++ program to use priority_queue to implement min heap 
//#include <bits/stdc++.h> 
//using namespace std; 
//  
//// Driver code 
//int main () 
//{ 
//    // Creates a min heap 
//    priority_queue <int, vector<int>, greater<int> > pq; 
//    pq.push(5); 
//    pq.push(1); 
//    pq.push(10); 
//    pq.push(30); 
//    pq.push(20); 
//  
//    // One by one extract items from min heap 
//    while (pq.empty() == false) 
//    { 
//        cout << pq.top() << " "; 
//        pq.pop(); 
//    } 
//  
//    return 0;
//}




//MAX HEAP
// C++ program to show that priority_queue is by 
// default a Max Heap 
#include <bits/stdc++.h>
#include<iostream>
using namespace std; 
  
// Driver code 
int main () 
{ 
    // Creates a max heap 
    priority_queue <int> pq; 
int x;
int size;
cin>>size;
for(int i=0;i<size;i++){
	cin>>x;
	pq.push(x);
}
  
    // One by one extract items from max heap 
    while (pq.empty() == false) 
    { 
        cout << pq.top() << " "; 
        pq.pop(); 
    } 
  
    return 0; 
}



#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node (int data)
    {
        this ->data = data;
        left = right = NULL;
    }
};

void preorderTraversal(struct Node* node)
{
    if(node == NULL)
        return;
    cout<<node->data<<"->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void inorderTraversal(struct Node* node)
{
    if(node == NULL)
        return;
    
    inorderTraversal(node->left);
    cout<<node->data<<"->";
    inorderTraversal(node->right);
}

void postorderTraversal(struct Node* node)
{
    if(node == NULL)
        return;
    
    postorderTraversal(node->left);
    
    postorderTraversal(node->right);
    cout<<node->data<<"->";
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left=new Node(5);
    root->left->right = new Node(6);

    cout<<"Inorder traversal : ";
    inorderTraversal(root);

    cout<<"\nPreorder traversal : ";
    preorderTraversal(root);

    cout<<"\nPostorder traversal : ";
    postorderTraversal(root);
}


// C++ program to demonstrate descending order sort using
// greater<>().
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, arr + n, greater<int>());
 
    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    return 0;
}
