#include <iostream>
#include<malloc.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
};
struct Node* createNode(int data){
    struct Node* n;
    n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;

}


///-----------------preorder---------///
void preoder(struct Node* root){
    if(root!=NULL){
        cout<<  root->data <<endl;
        preoder(root->left);
        preoder(root->right);

    }
}
void postoder(struct Node* root){
    if(root!=NULL){
        postoder(root->left);
        postoder(root->right);
        cout<<  root->data <<endl;

    }
}
void inoder(struct Node* root){
    if(root!=NULL){
        inoder(root->left);
        cout<<  root->data <<endl;
        inoder(root->right);
        

    }
}
 int main(){
    // struct Node*p;
    // p=(struct Node*)malloc(sizeof(struct Node));
    // p->data=2;
    // p->left=NULL;
    // p->right =NULL;


    // struct Node*p1;
    // p1=(struct Node*)malloc(sizeof(struct Node));
    // p1->data=1;
    // p1->left=NULL;
    // p1->right=NULL;

    // struct Node*p2;
    // p2=(struct Node*)malloc(sizeof(struct Node));
    // p2->data=4;
    // p2->left=NULL;
    // p2->right=NULL;

    

    // free(p);
    // free(p1);
    // free(p2);


///// preorder---/////
    struct Node*p=createNode(7);
    struct Node*p1=createNode(2);
    struct Node*p2=createNode(3);
    struct Node*p3=createNode(1);
    struct Node*p4=createNode(4);


    p->left=p1;
    p->right =p2;
    p1->left= p3;
    p2->right= p4; 

    
   preoder(p); 
   cout<< "   " <<endl;
   postoder(p);
   cout<< "   " <<endl;

   inoder(p);
   //////------- preorder end---------////
   return 0;

  
 }
