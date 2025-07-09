#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        long long totalSurplus = 0;
         long long totalDeficit = 0;
        bool possible =true;
        for(int i=0;i<n;i++) cin>> a[i];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){ 
                possible =false;
                break;
            }
            else {
                totalSurplus += a[i] - b[i]; 
            }
        }
        if(totalSurplus >= totalDeficit){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}