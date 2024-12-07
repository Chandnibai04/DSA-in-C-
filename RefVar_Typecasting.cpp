#include<iostream>
using namespace std;

int main() {
    float x = 460;    // x is a float variable initialized to 460
    float &y = x;     // y is a reference to x (an alias to x)
    
    // Print x
    cout << x << endl;
    
    // Print x again (or you could print y since y is an alias for x)
    cout << x << endl; 
    
  

        //*************TYPECASTING********/
    int a=30;
    double d=30.5;
    cout<<int(d)<<endl;
    cout<<float(a)<<endl;
    cout<<d + int(d)<<endl;
    int c=a+d;
    cout<<sizeof(d);

}
