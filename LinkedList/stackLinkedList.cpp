#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;      // Data of the node
    Node* next;    // Pointer to the next node
};

// Stack class implemented using a linked list
class Stack {
private:
    Node* top;   // Pointer to the top of the stack

public:
    // Constructor to initialize the stack
    Stack() {
        top = nullptr;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Function to push a new element onto the stack
    void push(int value) {
        // Create a new node
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;

        // Update the top pointer
        top = newNode;
        cout << "Pushed " << value << " onto the stack." << endl;
    }

    // Function to pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        // Save the top node and move the top pointer
        Node* temp = top;
        top = top->next;

        // Delete the saved node
        delete temp;
        cout << "Popped the top element from the stack." << endl;
    }

    // Function to display the elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructor to delete the entire stack
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    // Create a stack object
    Stack myStack;

    // Perform stack operations
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);
    myStack.display();

    myStack.pop();
    myStack.display();

    myStack.pop();
    myStack.pop(); // Trying to pop from an empty stack
    myStack.display();

    return 0;
}
