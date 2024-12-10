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
    LL t = 0;
    vi mas;
    vi mas2;
    LL ans = 0;
    LL minn = 0;
    LL maxx = 0;
    for(LL io = 0; io < ttt; io++){
        cin >> t;
        ans = 0;
        mas.reserve(t);
        mas2.reserve(t);
        forn(i, t) cin >> mas[i];
        forn(i, t) cin >> mas2[i];
        LL right = t - 1;
        LL left = 0;
        while(right >= left){
            if (right == left) {
                ans += mas[left];
                cout << ans << "\n";
                right -=1;
            }
            else{
                if (mas2[right] > mas2[left]){
                    ans += mas[left];
                    mas[left + 1] += mas2[left];
                    left += 1;
                }
                else{
                    ans += mas[right];
                    mas[right - 1] += mas2[right];
                    right -= 1;
                }
            }
        }
    }
}