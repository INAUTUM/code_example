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
    LL p; cin >> p;
    // LL n, k; cin >> n >> k;
    for (long long l = 0; l < p; l++){
        LL n, k; cin >> n >> k;
        if (n % 2 == 0){
            if (n > k) {cout << n * n - (k - 1) << "\n";}
            else{
                if (k % 2 == 0) cout << (k - 1) * (k - 1) + n << "\n";
                else cout << k * k + 1 - n << "\n";
            }
        }
        else{
            if (n > k) cout << (n - 1) * (n - 1) + k << "\n";
            else{
                if (k % 2 == 0) cout << (k - 1) * (k - 1) + n << "\n";
                else cout << k * k + 1 - n << "\n";
            }
        }
    }
}