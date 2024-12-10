#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int a=0,b=0,x;
		while(n--)cin>>x,x==1?a++:b++;
		cout<<(a%2==0&&b%2==0||b%2&&a>=2&&a%2==0?"yes\n":"no\n");
	}
}

#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main()
{
cin>>t;
while(t--)cin>>s,cout<<(s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size())?"YES\n":"NO\n");
}