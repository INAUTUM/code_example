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
    LL t; cin >> t;
    forn(h, t){
        string k;
        cin >> k;
        LL ans = 0;
        for(char i = '0'; i <= '9'; i++){
            if (k[0] == i) ans += i - '0';
        }
        for(char i = '0'; i <= '9'; i++){
            if (k[2] == i) ans += i - '0';
        }
        cout << ans << "\n";
    }
}
