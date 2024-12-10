#define vi vector <long long>
#define forn(i, n) for(LL i = 0; i < n; i++)
#define foran(i, a, n) for(LL i = a; i < n; i++)
#define LL long long 
#include <bits/stdc++.h>
#include <numeric>

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
    freopen("input.txt", "r", stdin);
    LL t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<LL> a(n);
        for(int i = 0; i < n; i++) {
            LL x; cin >> x;
            a[i] = x;
        }
        if(n < 2) {
            cout << 0 << endl;
            continue;
        }
        LL mx = *max_element(a.begin(), a.end());
        vector<pair<LL, LL>> res;
        for(int i = 0; i < n; i++) {
            if(a[i] != mx) {
                res.push_back({i + 1, mx - a[i]});
            }
        }
        cout << res.size() << endl;
        for(auto &u : res) {
            cout << u.first << " " << u.second << endl;
        }
        // if(gcd(f, s) > 1) {
        //     cout << 0 << endl;
        //     continue;
        // }
        // cout << 2 << endl;
        // cout << mp[f] + 1 << " " << f << endl;
        // cout << mp[s] + 1 << " " << s << endl; 

    }
}