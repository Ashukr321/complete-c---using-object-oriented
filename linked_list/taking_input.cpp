#include<iostream>
using namespace std;

//create the class 
class Node {
    public:
    int data ;
    Node *next;
    public:
    //create the constructor
    Node (int data){
        this->data = data;
        next=NULL;
    }
};

//create the methods that print the linked list 
void printNode (Node *head){
    //create the temp node 
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp= temp->next;
    }
    
}
//create the function that take the data from the user 
Node * takeInput (){
    cout<<"enter data of your linedlist "<<endl;
    cout<<"to exit  the linked list input passing -1"<<endl;
    int data;
    cin>>data;
    //create the head and tail pointer 
    Node * head = NULL;
    Node*tail = NULL;

    // JAB TAK DATA -1 NAHI HO JATA 
    while (data!=-1)
    {
        //create the node 
        Node * n = new Node(data);

        //check head is null or not 
        if (head ==NULL)
        {
            head = n;
            tail= n;
        }else{
            tail->next = n; // insert at the tail 
            //update the tail 
            tail = n;
        }
        cin>>data;
    }

    // in last we return the head 
    return head;
    
}
//main methods start 
int main(){
    //create the statically node 
    Node n1(1);
// 
    //create the head pointer that point the head of  the node
    // Node *head = &n1;
    // Node n2(2);
    // Node n3(3);

    // //connecting the all the node 
    // n1.next= &n2;
    // n2.next= &n3;


    //create the dunammic linked list 
    Node *head = takeInput();
    //calling the printNode 
    cout<<"printing the node "<<endl;
    printNode(head);

    return 0; 
}