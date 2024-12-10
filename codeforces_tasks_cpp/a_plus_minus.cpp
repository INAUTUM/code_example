#define vi vector <long long>
#define forn(i, n) for(int i = 0; i < n; i++)
#define foran(i, a, n) for(int i = a; i < n; i++)
#define LL long long 
#include <bits/stdc++.h>

using namespace std;

// #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
// 	cerr << *it << " = " << a << endl;
// 	err(++it, args...);
// }

LL pow_LL(LL a, LL n){
    LL ans = 1;
    forn(i, n) ans*=a;
    return ans;
}

int main() {
    // freopen("input.txt", "r", stdin);
    LL t; cin >> t;
    forn(ttt, t){
        LL n; cin >> n;
        string j; cin >> j;
        string ans = "";
        LL cnt = 0;
        forn(i, n){
            if (i == 0){
                if (j[i] == '1') cnt += 1;
            }
            else{
                if (j[i] == '1'){
                    if (cnt >= 1){ans.push_back('-'); cnt -= 1;}
                    else {ans.push_back('+'); cnt += 1;}
                }
                else ans.push_back('+');
            }
        }
        forn(i, ans.size()) cout << ans[i];
        cout << "\n";
    }
}
