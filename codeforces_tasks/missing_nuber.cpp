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
    long long n; cin >> n;
    vi mas(n - 1);
    forn(i, n - 1) cin >> mas[i];
    // cout << sizeof(mas);
    sort (mas.begin(), mas.end());  
    // cout << "\n";
    // forn(i, n) cout << mas[i] << " ";
    vi mas2(n);
    //mas2.reserve(n);
    forn(i, n) mas2[i] = i + 1;
    // cout << "\n";
    // cout << sizeof(mas2);
    // cout << "\n";
    // forn(i, n) cout << mas2[i] << " ";

    forn(i, n){
        if (mas2[i] != mas[i]){
            cout << mas2[i] << "\n";
            break;
        }
    }
}