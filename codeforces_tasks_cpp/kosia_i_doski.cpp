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

int main() {
    LL ttt; cin >> ttt;
    LL n, m;
    LL ans = 0;
    forn(jj, ttt){
        ans = 0;
        cin >> n >> m;
        vi mas(n);
        vi mas2(m);
        forn(i, n) cin >> mas[i];
        forn(i, m) {
            cin >> mas2[i];
            sort(mas.begin(), mas.end());
            mas[0] = mas2[i];
            // forn(i, n) cout << mas[i] << " ";
            // cout << "\n";
        }
        forn(i, n) ans += mas[i];
        cout << ans << "\n";
    }
}