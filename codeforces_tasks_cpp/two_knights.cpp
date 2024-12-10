#define vi vector <long long>
#define forn(i, n) for(LL i = 1; i < n; i++)
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
    LL k; cin >> k;
    for(LL n = 1; n <= k; n++) cout << (LL) pow(n, 2) * ((LL) pow(n, 2) - 1) / 2 - (4 * (n - 1) * (n - 2)) << "\n";    
}