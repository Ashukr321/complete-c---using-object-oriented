// insert the node at the ith position 

#include<iostream>
using namespace std;

//create the class of the node 
class Node {
    public:
     int data ;
     Node * next;
     //create the constructor 
     Node(int data ){
        this->data = data;
        this->next = NULL;
     }
};
// take input and add node at the end of the node 
Node * insertNodeAtEnd(){
    cout<<"enter your data "<<endl;
    cout<<"stop the input pass the -1"<<endl;
    int data ;
    cin >>data;
    //create two pointer of the head and tail 
    Node*head=NULL;
    Node  *tail=NULL,*temp;
    // static data members and function calling without 
    //creating the object of the class 

    while (data!=-1)
    {
        //create a node of data that enter by the users 
        Node *n = new Node(data);
        if (head==NULL)
        {
            head = n;
            tail= n;
        }
        else{
            tail->next =n;// inserting the node at  the tail of the node 
           tail = n;// updating the tail pointer 

        }
        cin>>data;// take the data input from the user    
    }
    return head;// return the new head pointer of the linked list 
}

// print the node 
void printNode(Node * head){
    //create the temp pointer 
    Node *  temp = head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" -> ";
        temp= temp->next;
    }
    
}

// print the length of the node 
int length (Node *head ){
    /* create the counter variable */
    int cnt = 0; 
    Node * temp = head;
    while (temp!=NULL)
    {
        cnt++;
        temp= temp->next;
    }
    return cnt;

}

//print the ith elements 
void printIthNode(Node * head, int i ){
    if(i<0){
        cout<<"-1"<<endl;
        return;
    }
    int cnt = 1;
    while (cnt<=i&&head!=NULL)
    {
        if (cnt ==i)
        {
            break;
        }
        cnt++;
        head = head->next;
        
    }
    if(head){
        cout << " "<<head->data <<endl;
    }else{
        cout<<" -1 "<<endl;
    }
    
};

// insert at ith position 
Node* insertAtithPos(Node *head, int i, int data){
    // check for the exception input 
      if(i<0){
        return head;
      }
      // if i =0 at begin 
      if(i==0){
        //create the new node 
        Node* n = new Node(data);
        n->next = head;
        head = n;
        //return the head pointer of the node 
        return head;
      }

      //
      Node * copyHead = head;
      int count = 1;

      while(count<=i-1 && head!=NULL){
        head = head->next;
        count++;
      }

      if(head){

        //create  the new node of the data

        Node *n = new Node(data);

        Node *temp = head->next;
        head->next = n;
        n->next = temp;
        return copyHead;
      }
      return copyHead;
}

Node * delateIthNode(Node *head , int i ){
    if(i<0){
        return head;
    }
    if (i==0 &&head)
    {
        return head->next;
    }
    Node *temp = head; 
    int cnt= 1;
    while (cnt<=i-1&& temp !=NULL)
    {
        temp =temp->next;
        cnt++;
    }
    if (temp)
    {
       temp->next = temp->next->next;
       return head;
    }
    
}
// main method start here 
int main(){
    //create the node 
    Node *head = insertNodeAtEnd();
    //print the node
    cout<<"print the node "<<endl;
    printNode(head);
    cout<<endl;
    cout<<"length of the node : "<<length(head)<<endl;
     printIthNode(head,1);
   head =  insertAtithPos(head,3,2);
   cout<<"printnod "<<endl;
   printNode(head);
    return 0; 
}