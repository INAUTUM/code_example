#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  string s;
  for(cin>>t;t--;){
    cin>>s;
    for(char &c:s) c&=~32;
    cout<<(s=="YES"?s:"NO")<<endl;
  }
}