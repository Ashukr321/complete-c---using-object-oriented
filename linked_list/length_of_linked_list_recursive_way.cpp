// find the length of the linked list by the recursive ways 
#include<iostream>
using namespace std;

//create the class of the linked list
class Node {
    public:
    int data ;
    Node * next;
    //create the constructor parameterized constructor 

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// insert the node at end of the  linked list 
Node * insertAtEnd(){
    int data ;

    cout<<"enter your linked list data "<<endl;
    cout<<"for stop the linked input enter -1 "<<endl;
    cin>>data;

    //create two pointer head and tail
    Node * head = NULL;
    Node *tail = NULL;
    
    
    while (data!=-1)
    {
        //create the new node 
        Node * newNode = new Node(data);
        if (head ==NULL)
        {
            head =newNode;
            tail = newNode;
        }else{
            // insert the  node at the tail of the node 
            tail -> next= newNode;

            // update the node of the linked list 
            tail = newNode;
        }
        cin>>data;
        
    }

    return head;// return the  head of  the newly created linked list 

    
};

// create the print node iterative approch 
void printNode (Node * head ){
   
   //create the temp pointer 
   Node * temp  = head;
   while (temp!=NULL)
   {
    cout<<temp->data<<" -> ";
    // move to the next node 
    temp= temp->next;

   }
   
    
}

// recursive ways to print the  node of the linked list 
int  length(Node * head){
    if(head == NULL){
        return 0;
    }
    return 1+length(head->next);
}
int main(){

    //create the object of the node 
    Node * head = insertAtEnd();
    //print the node 
    cout<<"print the node of the linked list "<<endl;
    printNode(head);// call the function
    cout<<endl;

    cout<<"length : " <<length(head);
    return 0; 
}