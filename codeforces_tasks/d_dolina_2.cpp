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
    LL o; cin >> o;
    for (LL pok = 0; pok < o; pok++){
        LL n; cin >> n;
        vi mas(n);
        forn(i, n) cin >> mas[i];
        LL l = 0;
        LL r = 0;
        LL t = 1;
        vi m(n);
        LL b = 0;
        if (n > 1){
            l = 0;
            r = 0;
            for (LL i = 1; i < n; i++){
                // cout << l << " " << r << "\n";
                if (mas[l] == mas[i]) {
                    if (mas[l] == mas[i]) r = i;
                    if (i + 1 <= n - 1){
                        if (mas[i + 1] > mas[l]){
                            r = i;
                            m[b] = l;
                            b++;
                            m[b] = r;
                            b++;
                        }
                    }
                    else {
                        r = i;
                        m[b] = l;
                        b++;
                        m[b] = r;
                        b++;
                    }
                }
                if (mas[l] > mas[i]){
                    // cout << i << "\n";
                    l = i;
                    if (i + 1 <= n - 1){
                        if (mas[i + 1] > mas[l]){
                            r = i;
                            m[b] = l;
                            b++;
                            m[b] = r;
                            b++;
                        }
                    }
                    else {
                        r = i;
                        m[b] = l;
                        b++;
                        m[b] = r;
                        b++;
                    }
                }
            }
            forn(i, b) cout << m[i] << " ";
            cout << "\n";
            // if (b == 2){
            //     cout << "YES" << "\n";
            // }
            // else cout << "NO" << "\n";
            // cout << l << " " << r << "\n";
        }
        else cout << "YES" << "\n";
    }
}