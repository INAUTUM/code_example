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
    LL j = 0;
    while (n){
        if(n % 10 == 4 || n % 10 == 7) j += 1;
        n /= 10;
    }
    LL c = 0;
    // cout << j << "\n";
    if (j > 0){
        while (j){
            if (j % 10 == 4 || j % 10 == 7) j /= 10;
            else {cout << "NO"; c = 1; return 0;}
        }
        if (c == 0) cout << "YES";
    }
    else cout << "NO" << "\n";
}
//4744000695826