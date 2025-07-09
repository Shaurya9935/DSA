#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol() {
string s; 
cin >> s; 
int a = 0;
for(int i = 1 ; i < s.size() ; i++){
if(s[i] == s[i-1]) a = 1;
}
cout << (a ? 1 : s.size());
}

int main() {
int tc;
 cin >> tc; 
 while (tc--){
 sol(), cout << '\n';
return 0;
}
}