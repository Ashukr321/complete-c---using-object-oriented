// taking input   and insert node at head 

#include<iostream>
using namespace std;
//create the class of the node
class Node {
    public:
    int data ;
    Node * next;

    //constructor 
    Node (int data){
        this->data = data;
        this ->next=NULL;// this refers to current class 
    }
};

//taking input 
Node *takingInput (){
    cout << "Enter Data : "<<endl;
    cout << "stop input pass : -1 "<<endl;
    int data ;
    cin>>data;

    //creat two pointer head and tail 
    Node * head = NULL;
    Node * tail = NULL;

    //check for  data and  insert it 
    while (data != -1)
    {
        // create a node  of data 
        Node *n = new Node(data);
        if(head ==NULL){
            head = n;
            tail =n;
        }else{
            n->next = head; // inserting  node at head 
            head = n; // update the head of the node by n 
        }
        // again take input 
        cin>>data;

    }
    return head;// return the new head pointer 
    
}


// print  the node 
void printNode(Node *head){
    Node * temp = head;
    while (temp!=NULL)
    {
       cout<<temp->data<<" -> ";
       temp = temp->next;
    }
    
}

// main methods start 
int  main(){
    //create the  dynamic linked list 
    Node* head= takingInput();
    cout<<"print the All node "<<endl;
    printNode(head);
    return 0; 
}