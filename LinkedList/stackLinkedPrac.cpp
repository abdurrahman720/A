#include<iostream>
#include<string>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class Stack{
    private:
        Node* top;
    
    public:
    Stack(){
        top = nullptr;
    };

    bool isEmpty(){
        return top==nullptr;
    };

    void push(int value){
        //intialize new Node to a node called newNode (ptr type)
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = top;

        top = newNode;
        cout << "Pushed " << value << " onto the stack." << endl;
    };

    void pop(){
        if(isEmpty()){
            return;
        };

        Node* temp = top;

        delete temp;
        top  = top->next;
    };
};