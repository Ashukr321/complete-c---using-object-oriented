// create the linked list and print the  length of the node 
// data is taking from the  user  

#include<iostream>
using namespace std;
//create the class node 
class Node {
    public:
    int data ;
    Node *next;

    //constructor 
    Node(int data){
        this->data = data;
        next=NULL;
    }
};

// create the function to take the input 
Node * takeInput(){
    cout<<"enter your data :"<<endl;
    cout<<"stop input pass -1 "<<endl;

    int data ;
    cin>>data;

    //create two pointer head and tail
    Node * head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        //create the node of the data 
        Node *n = new Node(data);
        if (head ==NULL)
        {
            head = n;
            tail = n;
        }else{
            n->next= head;
            head = n;
        }
        cin>>data;
    }
    
    return head;
}

// print the node 
void printNode(Node * head){
    // create the temp node 
    Node * temp = head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" -> ";
        temp= temp->next;
    }
    
}

int length(Node *head){
    Node * temp = head ;
    int cnt = 0; 
    while (temp !=NULL)
    {
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

// main method start here 
int main(){
    //create the dynamically linkedlist 
    Node *head = takeInput();
    //print the list before reversing it.
    cout<<"print  all the node of the linked list "<<endl;
    printNode(head);
    //length of the node 
    cout<<endl;
    cout<<"length of the linked list is "<<endl;
    cout<<length(head)<<endl;

    return 0 ;
}