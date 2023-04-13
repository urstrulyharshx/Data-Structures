#include<bits/stdc++.h>
using namespace std;
class  Node{
    public:
    int data;
    Node* link;

    Node(int n)
    {
        this->data=n;
        this->link=NULL;
    }
};

class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int data){
        Node* temp=new Node(data);

        if(!temp){
            cout<<"Stack Overflow"<<" ";
            exit(1);
        }
        temp->data=data;
        temp->link=top;
        top=temp;
    }
    bool isEmpty(){
        return top==NULL;
    }
    int peek(){
        if(!isEmpty())
        return top->data;
        else
        exit(1);
    }
    void pop()
    {
        Node* temp;
        if(top==NULL)
        {
            cout<<"Underflow"<<endl;
            exit(1);
        }
        else{
            temp=top;
            top=top->link;//assigning the second node to the top
            free(temp);
        }

    }
    void display(){
        Node* temp;
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            exit(1);
        }
        else{
            temp=top;
            while(temp!=NULL)
            {
                cout<<temp->data;
                temp=temp->link;
            }
        }
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();

    cout<<"Top Element is"<<s.peek()<<endl;

    s.pop();
    s.pop();

    s.display();

    cout<<"Top element is: "<<s.peek()<<endl;

    return 0;


}