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
        LL n; cin >> n;
        vi mas(n);
        LL g = 0;
        forn(i, n){
            cin >> mas[i];
        }
        g = mas[0];
        sort(mas.begin(), mas.end());
        forn(i, n){
                if (mas[i] - g > 0){
                    if ((mas[i] - g) % 2 == 1){
                        g += (mas[i] - g + 1) / 2;
                    }
                    else{
                        g += (mas[i] - g) / 2;
                    }
                    // cout << mas[0] << " " << mas[i] << "\n";
                }
        }
        cout << g << "\n";
    }
}