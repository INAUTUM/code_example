#define vi vector <long long>
#define forn(i, n) for(LL i = 1; i < n; i++)
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
    LL g = 0;
    LL k; cin >> k;
    LL l; cin >> l;
    LL m; cin >> m;
    LL n; cin >> n;
    LL d; cin >> d;
    // cout << 5 / 2 + 5 % 2;
    forn(i, d + 1) {
        if ((i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0)) g += 1;
    }
    cout << g << "\n";
}