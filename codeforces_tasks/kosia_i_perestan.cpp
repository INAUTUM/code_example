#define vi vector <long long>
#define forn(i, n) for(LL i = 0; i < n; i++)
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

int main(){
    LL v, d; cin >> v >> d;
    LL n; cin >> n;
    LL x;
    string t;
    float time = 0;
    vi mas(n);
    vi mas2(n);
    LL l = 0;
    LL r = 0;
    LL z = 0;
    forn(i, n){
        cin >> x >> t;
        mas[i] = (t[0] - '0' + t[1] - '0') * 60 + (t[3] - '0' + t[4] - '0');
        mas2[i] = x - z;
        z = x;
    }
    r = mas[n - 1];
    LL mid;
    LL p;
    while (l < r - 1){
        mid = (l + r) / 2;
        forn(j, n - 1){
            
        }
    }
}