#define vi vector <long long>
#define forn(i, n) for(int i = 1; i < n; i++)
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
    LL k = 0;
    for (int i = 5; i > 0; i --){
        k += n / i;
        n = n - i * (n / i);
    }
    cout << k << "\n";
}