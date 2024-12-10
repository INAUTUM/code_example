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

int main() {
    LL n; cin >> n;
    LL ans = 0;
    LL g = 0;
    LL u = 0; // 2 2 4 5 6 6 7 9 11
    vi mas (n);
    forn(i, n){
        cin >> g;
        if (i == 0) {u = g; mas[i] = g;}
        else if (u == g - 2){
            u = g;
            mas[i] = g;
            mas[i - 1] += 1;
        }
        else{
            mas[i] = g;
            u = g;
            if (i == n - 1 && g == 0) mas[i] += 1;
        }
        cout << u << "\n";
    }
    // forn(i, n - 1){
    //     if (mas[i] == mas[i + 1]) mas[i] -= 1;
    //     else if (mas[i] == mas[i + 1] - 2) mas[i + 1] -= 1;
    // }
    forn(i, n) cout << mas[i] << " ";
}