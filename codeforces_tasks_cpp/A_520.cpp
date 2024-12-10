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
    string st; cin >> st;
    set <char> mas;
    forn(i, n) {
        st[i] = tolower(st[i]);
        mas.insert(st[i]);
        // cout << mas.size() << " " << st[i] << "\n";
    }
    if (mas.size() == 26) cout << "YES\n";
    else cout << "NO\n";
}