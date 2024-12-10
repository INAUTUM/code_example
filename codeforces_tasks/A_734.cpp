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
LL maxi = 0;
LL u = 0;
void solve(){
    LL k, n; cin >> k >> n;
    if (u - k + n > maxi) maxi = u - k + n;
    u = u - k + n;
    // cout << u << "\n";
    // cout << maxi << "\n";

}


int main() {
    freopen("input.txt", "r", stdin);
    LL ttt; cin >> ttt;
    string j; cin >> j;
    LL o = 0;
    LL k = 0;
    forn(i, ttt){
        if (j[i] == 'A') k += 1;
        else o += 1;
    }
    if (k > o) cout << "Anton\n";
    else if (o > k) cout << "Danik\n";
    else cout << "Friendship\n";
}