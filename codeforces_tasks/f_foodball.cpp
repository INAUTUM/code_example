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


// string reverse(string const &s)
// {
//     string rev(s.rbegin(), s.rend());
//     return rev;
// }

int main() {
    LL n; cin >> n;
    LL k; cin >> k;
    LL j; cin >> j;
    if (n == 1 && k == j){
        cout << 1 << "\n";
        cout << k << ":" << j << "\n";
    }
    else if (k + j >= n){
        cout << 0 << "\n";
        forn(i, n){
            if (i + 1 == n){
                cout << k << ":" << j << "\n";
            }
            else{
                if (i + 2 == n && j > 0 && k > 0){
                    if (k - 1 == j || j - 1 == k){
                        if (0 <= k - 2) {k -= 2; cout << 2 << ":" << 0 << "\n";}
                        else if(0 <= j - 2) {j -= 2; cout << 0 << ":" << 2 << "\n";}
                    }
                    else{
                        if (0 <= k - 1) {k -= 1; cout << 1 << ":" << 0 << "\n";}
                        else if(0 <= j - 1) {j -= 1; cout << 0 << ":" << 1 << "\n";}
                    }
                }
                else{
                    if (0 <= k - 1) {k -= 1; cout << 1 << ":" << 0 << "\n";}
                    else if(0 <= j - 1) {j -= 1; cout << 0 << ":" << 1 << "\n";}
                }
            }

            // cout << "+\n"; 
        }

    }
    else{
        cout << n - k - j << "\n";
        forn(i, n){
            if (i + 1 == n) cout << k << ":" << j << "\n";
            else if (k == 0 && j == 0) cout << 0 << ":" << 0 << "\n";
            else if (k - 1 >= 0) {k -= 1; cout << 1 << ":" << 0 << "\n";}
            else if (j - 1 >= 0) {j -= 1; cout << 0 << ":" << 1 << "\n";}
        }
        
    }
    
}