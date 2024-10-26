#include<bits/stdc++.h>
using namespace std;
void name(int i,int n) // Print Your name N times
{
    if(i>n)
    return;
    cout << "Shaurya"<<endl;
    name(i+1,n);

}
void forwardN(int i,int n) // Print 1-N
{
    if(i>n)
    return;
    cout << i<<endl;
    forwardN(i+1,n);
}
void reverseN(int n,int i) // Print N-1
{
    if(n<i)
    return;
    cout<<n<<endl;
    reverseN(n-1,i);
}
void forwardback(int i, int n) // Print 1-N using Backtracking
{
    if(i<1)
    return;
    forwardback(i-1,n);
    cout<<i<<endl;
}
void reverseback(int i, int n)
{
    if(i>n)
    return;
    reverseback(i+1,n);
    cout<<i<<endl;
}
void parametersum(int i,int sum) // Parameter way of doing sum of N numbers
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    parametersum(i-1,sum+i);
}
int sum2(int n) // Functional way of doing sum of N numbers
{
    if(n==0) return 0;
    return n + sum2(n-1);
}
int factorial(int n)
{
    if(n==0) return 1;
    return n * factorial(n-1);
}
int arrayrev()
{
    
}
int main()
{
    int n;
    cin >> n;
    cout<<endl;
    cout << factorial(n);
}