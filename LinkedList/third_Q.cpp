// 3.Insert a Node at the End
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

Node* insertend(Node* head, int data)
{   
    Node* new_node = new Node(data);
    if (head == nullptr) {
        return new_node;
    }
    //once you get temp pointing at the last node
    //create a new node data and assign it the temp address to the new node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;

    return new_node;
}



int main()
{
    cout<<"Welcome to third question of LL"<<endl;
    
    Node* head_1 = new Node(100);
    Node* final_address;
    final_address = insertend(head_1,200);

    cout<< "Final Address: "<< final_address << std::hex<< ""<<endl;

}


