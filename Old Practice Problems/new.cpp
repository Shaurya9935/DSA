#include <bits/stdc++.h>
using namespace std;
void solve(){
        string s;
        cin >> s;
        int n=s.size();
        for(int j=0;j<n -1 ; j++){
            if(s[j] == s[j+1]){
                cout<<"1"<<endl;
                return;
            }
        }
        cout<<n<<endl;
}        

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}