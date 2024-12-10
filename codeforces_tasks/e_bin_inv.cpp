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
    LL t; cin >> t;
    for (LL pok = 0; pok < t; pok++){
        LL n; cin >> n;
        cout << n / 2 << "\n";
        vi mas(n);
        forn(i, n) cin >> mas[i];
        LL o = 0;
        LL k = 0;
        LL ans = 0;
        forn(i, n){}
        // for (LL p = 0; p < n / 2; p++){
        //     if (mas[p] == 1) o += 1;
        // }
        // cout << o;
        // for (LL p = n / 2; p < n; p++){
        //     if (mas[p] = 1) k += 1;
        // }
        // // if (o == k)
    }
}

// 1 1 1 1 1 0 0