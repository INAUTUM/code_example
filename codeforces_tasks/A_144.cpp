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

int main() {
    LL n; cin >> n;
    LL ans = 0;
    LL ansm = 0;
    LL ansm2 = 0;
    LL g = 0;
    LL max = 0;
    LL min = 0;
    vi mas(n);
    forn(i, n) {
        cin >> g;
        if (i == 0) max = min = g;
        if (i > 0){
            if (max < g){
                max = g;
                ansm = i;
            }
            else if (min >= g){
                ans = i;
                min = g;
            }
        }
    }
    if (min == max) cout << 0 << "\n";
    else if (ans < ansm) cout << ansm - 1 + (n - ans - 1) << "\n";
    else cout << ansm + (n - ans - 1) << "\n";
}