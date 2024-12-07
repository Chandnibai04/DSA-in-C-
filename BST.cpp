#include <iostream>
#include<malloc.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
};






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


/// -------- checking is BT is BST---/////
 
int isBST(struct  Node* root){
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

//------------SEARCHING IN BST---------????

Node*Search(struct Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return Search(root->left,  key);
    }
    else{
        return Search(root->right,key);
    }
}

///-------------INSERTION IN BST-------///
void insert(struct Node *root, int key){
   struct Node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct Node* newNode = createNode(key);
   if(key<prev->data){
       prev->left = newNode;
   }
   else{
       prev->right = newNode;
   }
}

//--------DELETION IN BST------//
struct Node* inOrderPredecessor(struct Node* root) {
    root = root->left;
    while (root->right != NULL) {  // Go down the right subtree
        root = root->right;
    }
    return root;
}

struct Node*deleteNode(struct Node*root,int value){
    struct  Node* iPre;
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;     
    }

    // search for the node to be dlt
    if(value<root->data){
        root->left = deleteNode(root->left,value);
    }
    else if(value>root->data){
       root->right = deleteNode(root->right , value);
    }
    
    // deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left,iPre->data);
    }
    return root; 
};


 int main(){
    
    struct Node*p=createNode(7);
    struct Node*p1=createNode(1);
    struct Node*p2=createNode(8);
    struct Node*p3=createNode(0);
    struct Node*p4=createNode(4);
    struct Node*p5=createNode(15);
    struct Node*p6=createNode(3);
    struct Node*p7=createNode(5);
    struct Node*p8=createNode(13);



   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   p4->left=p6;
   p4->right=p7;
   p2->right=p5;
   p5->left=p8;


    
    preoder(p); 
   
   cout<< "   " <<endl;
   postoder(p);
   cout<< "   " <<endl;

    inoder(p);
     cout<< "   " <<endl;

// //-----for checking is bt is bst--//
   cout<< (isBST(p))<<endl;
   cout<<" "<<endl;

// //------ for searching in bst
   struct Node* n = Search(p, 8);
if (n != NULL) {
    cout << "Element found: " << n->data << endl;
} else {
    cout << "Element not found" << endl;
}

   

//  //-------------INSERTION IN BST-------///
 inoder(p);
   cout<<"  "<<endl;

 insert(p,6); 
   
 
 inoder(p);

 cout<<"  "<<endl;

 // deletion in bst
    inoder(p);  // Initial in-order traversal
    cout << " " << endl;
    deleteNode(p, 5);
    cout << "After deletion of 5:" << endl;
    inoder(p);

    return 0;
  
}
