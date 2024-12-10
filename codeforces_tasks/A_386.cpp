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
    LL maxx = 0;
    LL max1 = 0;
    LL o = 0;
    vi mas(n);
    forn(i, n) {
        cin >> mas[i];
        if (maxx < mas[i]){
            max1 = maxx;
            maxx = mas[i];
            o = i + 1;
        }
        else if (mas[i] > max1 && maxx >= mas[i]) max1 = mas[i];
    }
    cout << o << " " << max1 << "\n";

}
