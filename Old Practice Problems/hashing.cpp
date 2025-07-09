#include<bits/stdc++.h>
using namespace std;
int numberhashing()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //precompute 
    
    int hash[13]= {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] +=1;
    }

    //fetching 
    cout<<endl;
    int q;
    cin>>q;
    cout<<endl;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl<<endl;
    }
}
int alphabethasing()
{
    string s;
    cin>>s;
    

    //precompute

    int hash[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;
    }
    cout<<endl;
    int q;
    cin>>q;
    cout<<endl;
    while(q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    

    //precompute

    int hash[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;
    }
    cout<<endl;
    int q;
    cin>>q;
    cout<<endl;
    while(q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}