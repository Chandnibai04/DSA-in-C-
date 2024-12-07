#include<iostream>
#include <cstdlib>  // for malloc
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

// Function to traverse and print the linked list
void linkedListTraversal(struct Node* ptr) {
    while (ptr != nullptr) {  // Use nullptr instead of Null
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}



                                //********** INSERT NODE AT 1ST **************/

struct Node*insertAtFirst(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;

    head=ptr;
    return ptr;
};


int main() {
    // Dynamically allocate memory for nodes in the linked list
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data and link the nodes
    head->data = 7;
    head->next = second;

    second->data = 77;
    second->next = third;

    third->data = 22;
    third->next = nullptr;  // Use nullptr for the last node

    // Traverse and print the linked list
    linkedListTraversal(head);


        //********* insert at 1st*/
    head = insertAtFirst(head,56);  //head equal to ptr ot return ptr
    linkedListTraversal(head);


    return 0;
}
