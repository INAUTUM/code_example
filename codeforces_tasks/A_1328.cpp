#define vi vector <long long>
#define forn(i, n) for(LL i = 0; i < n; i++)
#define foran(i, a, n) for(LL i = a; i < n; i++)
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
LL maxi = 0;
LL u = 0;
void solve(){
    LL k, n; cin >> k >> n;
    if (u - k + n > maxi) maxi = u - k + n;
    u = u - k + n;
    // cout << u << "\n";
    // cout << maxi << "\n";

}

string reverse(string const &s)
{
    string rev(s.rbegin(), s.rend());
    return rev;
}

int main() {
    LL ttt; cin >> ttt;
    LL k = 0;
    LL n = 0;
    for(LL io = 0; io < ttt; io++){
        cin >> k >> n;
        if (k >= n){
            cout << k % n<< "\n";
        }
        else cout << n - k << "\n";
    }
}