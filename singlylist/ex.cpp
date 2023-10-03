#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    void setData(int data)
    {

        this->data = -data;
    }
    int getData()
    {
        return this->data;
    }
};

class SinglyList
{
public:
    Node *head;

public:
    SinglyList() 
    {
        head = NULL;
    }
   void insertAtBegin(int data){
        if(head!=NULL){
            Node* temp=new Node(data);
            head -> next = head ; 
            head = temp;
        }
    }
}; 
main()
{
    // Node p1(12);
    // Node p2(12);
    // Node p3(12);
    // p1.next = &p2;
    // p2.next = &p3;
    
    
    cout << p1.data << endl;
}