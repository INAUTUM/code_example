#define vi vector <long long>
#define forn(i, uoi) for(LL i = 0; i < uoi; i++)
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
    // // LL n; cin >> n;
    // LL o = n;
    // // set <LL> mas;
    // // string h;
    // // while (true){
    //     // h = to_string(n);
    //     // forn(i, h.size()) mas[i].incert(h[i]);

    // // }
    // vi mas(4);
    // forn(i, 4){
    //     mas[i] = n % 10;
    //     n /= 10;
    // }
    // reverse(mas.begin(), mas.end());
    // forn(i, 4) cout << mas[i];
    LL n; cin >> n;
    LL h;
    set <LL> mas;
    // string st;
    for(int i = n; i < 9013; i++){
        n += 1;
        // st = to_string(n);
        h = n;
        forn(o, 4){
            mas.insert(h % 10);
            h /= 10;
        }
        if (mas.size() == 4) {cout << n << "\n"; break;}
        mas.clear();
    }
}