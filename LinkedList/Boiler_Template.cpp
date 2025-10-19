#include <iostream>
#include <iomanip> //Usually used for std::hex
using namespace std;
class Node
{
    public:
    int data; //data of the node
    Node* next; // address that will have the access to the next node if added

    Node(int data) //creating a constructor having same name as the class. By default constructors are private until explicit 
    {
        // keyyword "this" is pointer used to access the member of the class
        this->data = data;
        this->next = nullptr;
    }
};

int main()
{
    cout<< "This is Linked List Bolier Template" << endl;
    Node Node1(10); //Creating the first node out of class Node
    cout<< Node1.data << endl;
    cout<< Node1.next <<endl;

    Node Node2(20); //creating a second node 
    Node1.next = &Node2;//Assing the address of Node1 to the address of Node2
    cout<< Node2.data << endl;
    cout<< Node1.next <<endl; 
    cout<< Node2.next <<endl; 
}