#include<bits/stdc++.h>
using namespace std;
class twoStacks {
    int* arr;
    int size;
    int top1, top2;
public:
twoStacks(int n) // constructor
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }
void push1(int x){
    if(top1<top2-1)
    {
        top1++;
        arr[top1]=x;
    }
    else{
        cout<<"Overflow BY element"<<x<<endl;
        exit(1);
    }
}
void push2(int x){
    if(top1<top2-1)
    {
        top2--;
        arr[top2]=x;
    }
    else{
        cout<<"Overflow BY element"<<x<<endl;
        exit(1);
    }
}
int pop1(){
    if(top1>=0)
    {
        int x=arr[top1];
        top1--;
        return x;
    }
    else {
            cout << "Stack UnderFlow";
            exit(1);
        }
}
int pop2(){
    if(top2<size)
    {
        int x=arr[top2];
        top2++;
        return x;
    }
    else {
            cout << "Stack UnderFlow";
            exit(1);
        }
}
void display()
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
};
int main(){
    twoStacks s(5);
    s.push1(5);
    s.push2(10);
    s.push2(15);
    s.push1(11);
    s.push2(7);
    s.display();
    cout<<"poped element from stack1: "<<s.pop1()<<" "<<endl;
    cout<<"poped element from stack2: "<<s.pop2()<<" "<<endl;
    

}