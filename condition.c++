#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    if (a > 0) {
        cout << "a is positive" << endl;
    } else {
        cout << "a is not positive" << endl;
    }

    return 0;
}
