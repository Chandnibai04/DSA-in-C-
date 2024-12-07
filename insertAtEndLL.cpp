#include<iostream>
using namespace std;
#include <cstdlib> 



struct Node{
    int data;
    struct Node* next;
};

struct Node*insertAtEnd(struct Node*head, int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head;
    while (p->next!=nullptr)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=nullptr;
    return head;
    
}
void LinkedListTraversal(struct Node* ptr){
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*second=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));
    struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=77;
    head->next=second;

    second->data=22;
    second->next =third;

    third->data=1;
    third->next=fourth;

    fourth->data=6;
    fourth->next=nullptr;


    LinkedListTraversal(head);
    head=insertAtEnd(head,56);
    LinkedListTraversal(head);

}