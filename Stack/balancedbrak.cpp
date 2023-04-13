#include<bits/stdc++.h>
using namespace std;
bool IsBalanced(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(s.empty())
        {
            s.push(str[i]);
        }
        else if((s.top()=='(' && str[i]==')') || (s.top()=='{' && str[i]=='}') || (s.top()=='[' && str[i]==']'))
        s.pop();
        else{
            s.push(str[i]);
        }
    }
    if(s.empty())
        return true;
    return false;




}
int main(){
string str;
cout<<"Enter any string: "<<endl;

cin>>str;
if(IsBalanced(str))
cout<<"Balanced"<<endl;
else
cout<<"Not Balanced"<<endl;
return 0;


}

//Time Complexity Will Be O(n)