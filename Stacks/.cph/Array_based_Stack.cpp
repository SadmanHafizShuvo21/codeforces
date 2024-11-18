// #include <bits/stdc++.h>
// #define MAX 100  
// int arr[MAX];  
// int top = -1;  

// void push(int value) {
//     if (top >= (MAX - 1)) {
//         std::cout << "Stack Overflow!" << "\n";
//     } 
//     else {
//         arr[++top] = value; 
//         std::cout << value << " pushed to stack." << "\n";
//     }
// }

// int pop() {
//     if (top < 0) {
//         std::cout << "Stack Underflow!" << "\n";
//         return -1;  
//     } 
//     else {
//         return arr[top--];  
//     }
// }

// int peek() {
//     if (top < 0) {
//         std::cout << "Stack is Empty!" << "\n";
//         return -1;
//     } 
//     else {
//         return arr[top];
//     }
// }

// bool isEmpty() {
//     return (top < 0);
// }

// int main() {
//     int n;
//     std::cin>>n;
//     int arr[n];
//     push(10);
//     push(20);
//     push(30);

//     std::cout << "Top element is: " << peek() << "\n";

//     std::cout << pop() << " popped from stack." << "\n";

//     std::cout << "Top element is: " << peek() << "\n";
// }

#include <iostream>
#define MAX 3  // Maximum size of the stack

// Function to push an element onto the stack
void push(int arr[], int &top, int value) {
    if (top >= (MAX-1)) {
        std::cout << "Stack Overflow!" << std::endl;
        return;
    } 
    
    top++;
    arr[top] = value;  // Increment top and insert the value
    std::cout << value << " pushed to stack." << std::endl;
    
}

// Function to pop an element from the stack
int pop(int arr[], int &top) {
    if (top < 0) {
        std::cout << "Stack Underflow!" << std::endl;
        return -1;  // Return -1 to indicate underflow
    } else {
        return arr[top--];  // Return the top element and decrement top
    }
}

int main() {
    int stack[MAX];  // Array to store stack elements
    int top = -1;    // Initialize the top to -1 (empty stack)

    push(stack, top, 10);
    push(stack, top, 20);
    push(stack, top, 30);
    push(stack, top, 40);
    push(stack, top, 50);
    std::cout << pop(stack, top) << " popped from stack." << std::endl;
    std::cout << pop(stack, top) << " popped from stack." << std::endl;

    return 0;
}

