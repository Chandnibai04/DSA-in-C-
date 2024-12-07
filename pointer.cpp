#include<iostream>
using namespace std;
int main(){
    int a= 70;
    int* b = &a;
    // & ---> address of operator a
    cout<<a <<endl;
    cout<<b <<endl;
    cout<<"the address of a " <<&a <<endl;

    // & -----> dereference operator
    
    cout<<"the value at address b(*b) " <<*b<<endl;
    // *b=value at address b
    //&a= address of a


    //************POINTER TO POINTER********/
    

   int** c = &b;
   cout<<"the address of pointer(b) "<<c<<endl;

   cout<<"the value at  address of **c "<<**c<<endl;
   int*** d= &c;
   cout<<"the address of pointer(c) "<<d<<endl;
   cout<<&c<<endl;

   



    //**************POINTER IN ARRAY*********/

    int marks[5]={23,45,12,34,79};
    int* p =marks;
    cout<<"pointers in array"<<*p <<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;

}