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
        vi mas(o);
        LL min = 0;
        LL maxi = 0;
        LL ans = 0;
        LL ansm = 0;
        forn(i, o) {
            cin >> mas[i];
            // cout << i << "\n";
            if (i == 0) {
                min = mas[i];
                maxi = mas[i];
            }
            if (mas[i] < min) min = mas[i];
            if (mas[i] > maxi) maxi = mas[i];
            // cout << min << " " << max << "\n";
        }
        // cout << min << " " << max << "\n";
        forn(i, o){
            if (mas[i] == maxi) ans += 1;
            else if(mas[i] == min) ansm += 1;
        }
        // cout << maxi << " " << min << "\n";
        if (min == maxi) cout << o * (o - 1) << "\n";
        else cout << ansm * ans * 2 << "\n";
    }
}
// 1 1 1 5 5
// 1 1 5
// 1 1 5 5 