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
    LL n; cin >> n;
    forn(kljslk, n){
        LL o, u; cin >> o >> u;
        string b1; cin >> b1;
        string b2; cin >> b2;
        LL k = 0;
        LL p = 0;
        forn(i, o - 1){ 
            if (b1[i] == b1[i + 1]) k++;
        }
        if (k >= 2) cout << "NO\n";
        else{
            forn(i, u - 1){
                if (b2[i] == b2[i + 1]) p++;
            }
            if ((k > 0 and p > 0) or (p > 1)) cout << "NO\n"; 
            else{
                if (k == 1 or p == 1){
                    if (b1[o - 1] != b2[u - 1]) cout << "YES\n";
                    else cout << "NO\n";
                }
                else if (k == 0 and p == 0) cout << "YES\n";
            }
        }
    }

}