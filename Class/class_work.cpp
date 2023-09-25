#include <iostream>
using namespace std;

class StackOfInteger
{
private:
    int *elements;
    int size;
    int top;

public:
    StackOfInteger(int size)
    {
        this->size = size;        // update the size
        elements = new int{size}; //
        top - 1;                  // initialy the value of the top is the -1 ;
    }

    void push(int data)
    {
        // check for the overflow 
        if (isOverFlow())
        {
            cout<<"stack is the overflow not allow to push data "<<endl;
            return ;
        }
        // insert at the next position and increment it by one.
        elements[++top] = data;
        

        
    }

    int pop()
    {
        if(isUnderFlow()){
            return -1;
        }else{
            // one of line 🔥🔥🔥
            return elements[top--];

        }
    }

    int peep()
    {
        if(isUnderFlow()){

            cout<<"stack is in underflow "<<endl;
            return -1;
        }else{
            return elements[top];
        }
    }

    void display()
    {
        if (isUnderFlow())
        {
            cout<<"stack is underflow"<<endl;
        }
        else{
            for (int i = 0; i < top; i++)
            {
                cout<<elements[i]<<" "<<endl;
            }
            
        }
        
    }

    bool isUnderFlow()
    {
        if (top == -1)
        {
            cout<<"stack is the underflow"<<endl;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isOverFlow()
    {
        if (top == size - 1)
        {
            cout<<"stack is the ovflow"<<endl;
            return true;
        }
        else
        {
            return false;
        }
    }

};


int main()
{
    StackOfInteger stack1(5);

    stack1.push(24);
    stack1.display();

    return 0;
}