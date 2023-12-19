#include <iostream>
using namespace std;

#define MAX_SIZE 100 // maximum size of stack

int arr[MAX_SIZE]; // array to hold the elements of the stack
int top = -1;      // index of the top element in the stack

void push(int value) {
  if (top >= MAX_SIZE - 1) { // check if the stack is full
    cout << "Error: Stack overflow\n";
    return;
  }
  top++;        // increment the top index
  arr[top] = value; // add the value to the stack
}

void pop() {
  if (top < 0) { // check if the stack is empty
    cout << "Error: Stack underflow\n";
    return;
  }
  top--; // decrement the top index to remove the top element
}

int topElement() {
  if (top < 0) { // check if the stack is empty
    cout << "Error: Stack is empty\n";
    return -1;
  }
  return arr[top]; // return the top element of the stack
}

bool isEmpty() {
  return top == -1; // check if the stack is empty
}

bool isFull() {
  return top == MAX_SIZE - 1; // check if the stack is full
}

void printStack() {
  if (top < 0) { // check if the stack is empty
    cout << "Error: Stack is empty\n";
    return;
  }
  cout << "Stack elements: ";
  for (int i = 0; i <= top; i++) { // print the elements of the stack
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  // push some elements onto the stack
  push(10);
  push(20);
  push(30);

  printStack(); // print the elements of the stack

  // pop an element from the stack
  pop();
  cout<<"After pop operation \n";
  printStack(); // print the elements of the stack

  // push some more elements onto the stack
  push(40);
  push(50);
  cout<<"After push operation \n";
  printStack(); // print the elements of the stack

  return 0;
}
