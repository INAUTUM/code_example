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
    for (LL pok = 0; pok < n; pok++){
        LL k; cin >> k;
        vi m(k);
        forn(i, k) cin >> m[i];
        vi lp = m;
        sort(m.begin(), m.end());
        LL max1 = m[k - 1];
        LL max2 = m[k - 2];
        forn(i, k){
            if (lp[i] == max1) lp[i] = lp[i] - max2;
            else lp[i] = lp[i] - max1;
        }
        forn(i, k) cout << lp[i] << " ";
        cout << "\n";
    }
}