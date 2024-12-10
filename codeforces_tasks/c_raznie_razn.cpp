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
    LL op; cin >> op;
    forn(h, op){
        LL k, n; cin >> k >> n;
        LL b = 1;
        LL i = 0;
        LL u = 0;
        while (k > u){
            cout << b << " ";
            if ((n >= b + i) && (k - u - 1 <= n - b - i)) b += i + 1;
            else b++;
            i++;
            u++;
        }
        cout << "\n";
    }
}
