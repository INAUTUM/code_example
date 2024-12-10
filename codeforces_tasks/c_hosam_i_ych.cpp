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
    for(LL ttt = 0; ttt < n; ttt++){
        LL o; cin >> o;
        set <LL> mas1;
        vi mas(n);
        LL g = 0;
        LL t = 0;
        int r = 0;
        forn(i, o) cout << mas[i];
        sort(mas.begin(), mas.end());
        forn(i, o) {
            g = mas[i];
            if (i == 0){
                for (LL y = 2; y < pow(g, 2); y ++){
                    if(g % y == 0)
                }
            }
        // forn(i, o) cout << mas[i] << " ";
        // cout << "\n";
        if (t == 2) cout << "YES\n";
        else cout << "NO\n";
        }
    }
}
// 1 1 1 5 5
// 1 1 5
// 1 1 5 5 
//2 3 11