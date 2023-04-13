#include<bits/stdc++.h>
using namespace std;
bool IsBalanced(string str){
   int count=-1;
   for(int i=0;i<str.length();i++)
   {
    if(str[i]=='(' || str[i]=='{' || str[i]=='[' )
        count++;
    if(str[i]==')' || str[i]=='}' || str[i]==']')
    count--;
   }

if(count == -1)
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