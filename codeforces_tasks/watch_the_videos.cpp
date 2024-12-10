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
    LL o, p; cin >> o >> p;
    vi mas(o);
    LL sum = 0;
    forn (i, o) {cin >> mas[i]; sum += mas[i];}
    sort(mas.begin(), mas.end());
    LL l = 0;
    LL r = o - 1;
    sum += 1;
    while (l < r){
        if (mas[l] + mas[r] <= p){
            l += 1;
            r -= 1;
        }
        else{
            r -= 1;
            sum += 1;
        }
    }
    cout << sum << "\n";
}