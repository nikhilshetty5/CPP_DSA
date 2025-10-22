//4.Insert a Node at a Given Position
#include <iostream>
#include <iomanip>
using namespace std;
// int find_the_length(Node* head);
// Node* insertatgiven(Node* head, int data,int position);
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
int find_the_length(Node* head);
Node* insertatgiven(Node* head, int data, int position)
{
    int length = find_the_length(head);

    // Invalid position
    if (position < 0 || position > length) {
        cout << "Invalid position" << endl;
        return head;
    }

    Node* new_node = new Node(data);

    // Insert at head
    if (position == 0) {
        new_node->next = head;
        return new_node;
    }

    // Insert at given position
    Node* temp = head;
    for (int i = 0; i < position - 1; ++i) {
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return head;
}



int find_the_length(Node* head)
{
    int counter = 0;
    Node* temp = head;
    while (temp != nullptr)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}


int main()
{
    int position;
    cout << "Welcome to fourth question of LL" << endl;
    cin >> position;

    Node* head_1 = new Node(100);
    Node* head_2 = new Node(200);
    head_1->next = head_2;

    head_1 = insertatgiven(head_1, 300, position); 

    int leng = find_the_length(head_1);
    Node* temp = head_1;
    while (temp != nullptr)
    {
        cout << std::dec << temp->data << " ";       
        cout << temp->next << std::hex << " ";
        temp = temp->next;
    }
    cout << endl;
}

