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
    LL n, k; cin >> n >> k;
    string h; cin >> h;
    for (LL u = 0; u < k; u ++){
        for (LL i = 0; i < n; i += 1){
            if (h[i] == 'B' && h[i + 1] == 'G'){
                h[i] = 'G';
                h[i + 1] = 'B';
                i ++;
            }
        }
    }
    forn(i, n) cout << h[i];
    cout << "\n";
}