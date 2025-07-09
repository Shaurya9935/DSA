#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,temp,arr[20],i=0,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
        temp =n;
        while(temp!=0)
        {
            arr[i] = temp%10;
            temp = temp/10;
            if(n%arr[i] == 0)cnt++;
        }
        cout<<cnt;
}