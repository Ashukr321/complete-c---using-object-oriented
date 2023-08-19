// print the ith element in the linked list 
#include<iostream>
using namespace std;

//creat the node class 
class Node {
    public:
    int data ;
    Node *next;

    //constructor 
    Node(int data){
        this->data = data;
        this->next= NULL;
    }
};

Node * insertNodeAtEnd(){
    cout<<"enter your node data "<<endl;
    cout<<"stop the taking data enter -1 "<<endl;
    int data ;
    cin>>data ;
    //create  two pointer head and tail 
    Node * head  =NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        //create a node 
        Node * n = new Node(data);// dynamic creation of the node 
        if (head ==NULL)
        {
            head = n;
            tail =n;//assigning the address to the tail
        }else{
            tail -> next = n;
            tail = n;// update the tail of the new linked list 

        }
        cin>>data;

        
    }
    return head;
   
}

// print the node of the linked list 
void printNode (Node * head){
    Node * temp = head;
    while (temp !=NULL)
    {
       cout<<temp->data<<" -> ";
       temp = temp->next;
    }
    
}

//length methods 
int length(Node *head ){
    Node * temp = head;
    int cnt = 0;
    while (temp!=NULL)
    {
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

void printIthNode (Node *head ,int i ){
    Node *temp = head;
    int cnt = 1;
    if (i<0)
    {
        cout<<"-1"<<endl;
        return;
    }
    while (cnt<=i && temp!=NULL)
    {
        if (cnt==i)
        {
            break;
        }
        cnt++;
        temp= temp->next;
    }
    if (temp)
    {
        cout<<temp->data<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
}

int main(){
    //create the  dynamic linkedlist 
    Node* head = insertNodeAtEnd();
    //print the nodes in the linkedList
    cout<<"printing all the node of the likedlist "<<endl;
    printNode(head);
    cout<<endl;
    cout<<"length of the linkedlist : "<<length(head)<<endl;
    cout<<endl;
    printIthNode(head,3);
    return 0; 
}