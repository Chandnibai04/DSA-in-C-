#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // If n is less than or equal to 0, it's not a power of 2
    if (n <= 0) {
        return false;
    }
    // Check if n is a power of 2 using the bitwise trick
    return (n & (n - 1)) == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the function and check if the number is a power of 2
    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}
