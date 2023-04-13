#include<bits/stdc++.h>
using namespace std;
void IncreStack(int arr[],int n)
{
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        while(stk.size()>0 && stk.top()>arr[i])
        stk.pop();
stk.push(arr[i]);
    }
    int N2 = stk.size();
    int ans[N2] = { 0 };
    int j = N2 - 1;
     while (!stk.empty()) {
        ans[j] = stk.top();
        stk.pop();
        j--;
    }
    cout<<"Original Array: "<<" ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" "<<endl;
    cout<<"Monotonic Stack:  "<<" ";
    for(int i=0;i<N2;i++)
    cout<<ans[i]<<" "<<endl;




}
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    IncreStack(arr,n);
    return 0;


}