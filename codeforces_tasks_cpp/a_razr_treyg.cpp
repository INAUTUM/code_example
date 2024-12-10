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
    LL t; cin >> t;
    for (LL io = 0; io < t; io++){
        LL x1, y1; cin >> x1 >> y1;
        LL x2, y2; cin >> x2 >> y2;
        LL x3, y3; cin >> x3 >> y3;
        if ((x1 == x2 && y1 == y2) || (x1 == x2 && y2 == y3) || (x1 == x2 && y1 == y3) || (x2 == x3 && y1 == y2) || (x2 == x3 && y2 == y3) || (x2 == x3 && y1 == y3) || (x3 == x1 && y1 == y2) || (x3 == x1 && y2 == y3) || ((x3 == x1 && y3 == y1))){
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}