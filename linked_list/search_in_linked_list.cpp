//search in linked list 

#include<iostream>
using namespace std;

//create the class of the node 
class Node {
    public:

    int data ;
    Node * next;

    //CREATE the constrcutor 
    Node (int data){
        this->data = data;
        this->next=NULL;
    }
};

//create the linked list 
Node * insertNodeAtEnd(){
    cout<<"enter your data of the linked list "<<endl;
    cout<<"enter the -1 for stop the taking the input "<<endl;
    int data;
    cin>>data;

    //create two pointr head and tail 
    Node * head = NULL;
    Node * tail = NULL;

    while (data !=-1)
    {
        //create the newNode 
        Node * newNode = new Node(data);
        if (head ==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}

//print the node 
void printNode(Node * head ){
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"  -> ";
        temp = temp->next;
    }
    
}

// here we search the  data in the linked list if present then return the true else false 
bool isPresentInLinkedList(Node* head, int key ){
    
    while (head!=NULL )
    {
        if (head->data == key)
        {
                return true;
        }
        //move the head at next pointer 
        head = head->next;
        
    }
    return false ;
}

// main method start here 
int main(){
    Node * head = insertNodeAtEnd();
    cout<<"print the  data of the linked list "<<endl;
    printNode(head);
    cout<<"check the data is present or not"<<endl;
    cout<<isPresentInLinkedList(head,4);// 1 yes // 0 for the no 

    return 0;
}