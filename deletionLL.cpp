#include<iostream>
using namespace std;
#include <cstdlib>

struct Node{
    int data;
    struct Node*next;
};




// ************** DELECTE AT LAST*************





struct Node* dltAtlast(struct Node* head) {
    struct Node* p = head;
    struct Node* q = head->next;
    
    while (q->next!=nullptr)
    {
       p=p->next;
       q=q->next;
    }
   
    p->next=nullptr;
    free(q);
    return head;
            
}





// ************** DELECTE AT INDEX*************


struct Node* dltAtInBt(struct Node* head,int index) {
    struct Node* p = head;
    struct Node* q = head->next;
    int i=0;
    while (i!=index-1)
    {
       p=p->next;
       q=q->next;
       i++;
    }
   
    p->next=q->next;
    free(q);
    return head;
           
}





// ************** DELECTE AT 1ST*************

struct Node* dltAtFirst(struct Node* head) {
    struct Node* ptr = head;
    head = head->next;  // Move head to the next node
    free(ptr);          // Free the old head using free() as malloc was used
    return head;        // Return the new head
}
void LinkedListTraversal(struct Node*ptr){
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


    head->data=44;
    head->next = second;
    
    second->data = 4;
    second->next = third;

    third->data=65;
    third->next = fourth;

    fourth->data=34;
    fourth->next = nullptr;
    cout<<"before deletion"<<endl;
    LinkedListTraversal(head);




 //*************DELETE IAT 1ST */
    head=dltAtFirst(head);
    cout<<"after deletion"<<endl;
    LinkedListTraversal(head);



//*************DELETE IN BBETWEEN */
    cout<<"dlt in betweern" <<endl;
    head=dltAtInBt(head,2);
    LinkedListTraversal(head);



//*************DELETE AT LAST */
    cout<<"delete at last"<<endl;
    head=dltAtlast(head);
    LinkedListTraversal(head);
}