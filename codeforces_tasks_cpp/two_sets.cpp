#define vi vector <long long>
#define forn(i, n) for(int i = 1; i < n; i++)
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
    LL otv = 0;
    LL lpo;
    forn(i, n + 1) otv += i;
    lpo = otv / 2;
    vi m(n);
    vi m1(n);
    LL b = 0;
    LL a = 0;
    if (otv % 2 == 0){
        cout << "YES" << "\n";
        for (LL i = n; i > 0; i--){
            if (lpo - i >= 0){
                m1[a] = i;
                lpo -= i;
                a++;
            }
            else{
                m[b] = i;
                b++;
            }

        }
        cout << a << "\n";
        for (LL i = 0; i < a; i++) cout << m1[i] << " ";
        cout << "\n";
        cout << b << "\n";
        for (LL p = 0; p < b; p++) cout << m[p] << " ";
    }

    else cout << "NO" << "\n";
}