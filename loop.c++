#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 2) {
        cout << "There are no even numbers up to " << n << endl;
        return 0;
    }

    int num = 2;
    int sum = 0;

    cout << "Even numbers from 1 to " << n << " are: ";
    
    while (num <= n) {
        cout << num << " ";
        sum += num;
        num += 2;  // Increment by 2 to get the next even number
    }

    cout << "\nSum of even numbers from 1 to " << n << " is: " << sum << endl;

    return 0;




                        // prime number check

    int n;
    cin>> n;
    int i=2;
    while (i<n)
    {
        if(n %i ==0){
            cout<<"not prime" <<endl;
        
        }
        else{
            cout<<"prime"<<endl;
        }
        i=i+1;
    }
    

}
