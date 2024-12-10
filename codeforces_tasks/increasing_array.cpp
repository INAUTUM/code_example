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
    vi m;
    m.reserve(n);
    forn(i, n) cin >> m[i];
    LL otv = 0;
    for(LL i = 1; i < n; i++){
        // cout << m[i] << "\n";
        if (m[i - 1] > m[i]){
            //cout << i << "\n";
            otv += m[i - 1] - m[i];
            m[i] += (m[i - 1] - m[i]);
            //forn(i, n) cout << m[i] << " ";
            //cout << "\n";
            // cout << m[i] << "\n";
            // cout << otv << "\n";
        }
    }
    //forn(i, n) cout << m[i] << " ";
    //cout << "\n";
    cout << otv << "\n";
}