//2.Insert a Node at the Beginning
#include <iostream>
#include <iomanip>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

Node* insertatbegin(Node* head, int data)
{
    Node* node_1 = new Node(data);
    node_1->next = head;

    // Debug output before return
    cout << "New node points to: " << node_1->next << endl;
    cout << "Old head's next: " << head->next << endl;

    return node_1;
}

int main()
{
    cout << "------Second Q Data-----" << endl;
    Node* head = new Node(10);
    head = insertatbegin(head, 20);

    // Print list contents
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}