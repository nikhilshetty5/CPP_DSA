#include <iostream>
#include <iomanip>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertnode(Node* head, int data) {
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    Node* new_node = new Node(data); 
    temp->next = new_node;
}

void printnode(Node* head) {
    Node* temp = head;  //Remember to use this temp because it helps to iterate with the arguments passed
    while (temp != nullptr) {
        cout << temp->data << " ";
        cout << temp->next << std::hex << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    cout << "Create and Print a Linked List" << endl;

    Node* head = new Node(10);
    insertnode(head, 20);
    insertnode(head, 30);

    printnode(head);
}