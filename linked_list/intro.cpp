// linked list intro
#include <iostream>
using namespace std;

//create the class node 
class Node {
    public:
    int data ;
    Node * next;
    // constructor 
    Node(int data){
        this->data = data;
        this->next=NULL;

    }
};

//  create the methods for the printing the node 
void print(Node * head){
    // create the temp node 
    Node * temp = head;

    while (temp != NULL){
        cout << " "<< temp -> data <<"->";
        temp = temp -> next;// move to the next node 
    }
}
int main(){
    // create the node 
    // static node object 
    Node n1(3);
    Node n2(34);
    Node *head = &n1;
    head -> next=&n2;
    // link the nodes
    // cout <<head->next->data<<endl;
    // calling the print methods and pass the head node
    print(head);
    return 0; 
}