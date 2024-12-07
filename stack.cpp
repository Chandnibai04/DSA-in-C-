#include <iostream>
using namespace std;

struct stack {
    int size;
    int top;
    int *arr;
};

// Function to check if the stack is empty
int isEmpty(struct stack *ptr) {
    if (ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// Function to check if the stack is full
int isFull(struct stack *ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Allocate memory for the stack structure
    struct stack *s = new stack;
    
    // Initialize the stack
    s->size = 80;
    s->top = -1;
    s->arr = new int[s->size];  // Allocate memory for the stack array

    // Check if the stack is empty
    if (isEmpty(s)) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
