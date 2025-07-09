#include<bits/stdc++.h>
using namespace std;
void extraction(int x)
{
    int y,p,z=0;
    cin>>x;
    p=x;
    while (p>0)
    {
        y=p%10;
        p=p/10;
        z= z+ (y*y*y);
        //cout<<y<<endl;
    }
    cout<<z<<endl;
    if (z==x)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
void divisors(int n)
{
    int div;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        div = n%i;
        if (div == 0)
        {
            cout<<i<<",";
        }

    }
    
}
int main()
{
    int num;
    divisors(num);

}