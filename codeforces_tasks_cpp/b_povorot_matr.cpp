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

LL pow_LL(LL a, LL n){
    LL ans = 1;
    forn(i, n) ans*=a;
    return ans;
}

int main() {
    LL op; cin >> op;
    forn(h, op){
        LL g = 0;
        LL p = 0;
        LL q = 0;
        LL io = 0;
        LL t = 0;
        vector<vector<LL>> mas(2, vector<LL> (2));
        forn(i, 2) forn(j, 2) cin >> mas[i][j];
        forn(ttt, 4){
                if(mas[0][0] < mas[0][1] && mas[0][0] < mas[1][0] && mas[0][1] < mas[1][1] && mas[1][0] < mas[1][1]) {
                    t = 1;
                    break;
                }
                else{
                    g = mas[0][0];
                    p = mas[0][1];
                    q = mas[1][0];
                    io = mas[1][1];
                    mas[0][0] = q;
                    mas[0][1] = g;
                    mas[1][0] = io;
                    mas[1][1] = p;
                }
        }
        if (t == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
