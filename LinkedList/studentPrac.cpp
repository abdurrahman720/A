#include<iostream>
#include <string>

using namespace std;

struct Node{
    string name;
    int id;
    Node* next;
};

void displayLL(Node* head){
    Node* temp = head;
    cout<< "Linked List :"<<" "<<endl;
    while(temp!=NULL){
        cout << "Name: "<<temp->name << " "<< "ID: "<<temp->id<<endl;
        temp= temp->next;
    }
}

int main(){
    Node* head = nullptr;
    Node* temp = head;

    for (int i = 0; i < 5;i++){
        Node *newNode = new Node();
            newNode->name = "Name" + to_string(i);
            newNode->id = i+1;
            newNode->next = nullptr;

            if(head == nullptr){
                head = newNode;
                temp = newNode;
            }

            else{
                temp->next = newNode;
                temp = newNode;
            }
    }

     displayLL(head);

    // Clean up and release memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}