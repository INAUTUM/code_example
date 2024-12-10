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


void solve(){
    LL n; cin >> n;
    vector<LL> mas;
    LL o;
    // forn(i, n) cin >> mas[i];
    forn(i, n) {
        cin >> o;
        if (i > 0 && o == mas[mas.size() - 1]) {}
        else mas.push_back(o);
    }
    LL b = 0;
    LL j = mas.size();
    if (j > 1){
        for (LL i = 0; i < j; i++){
            if (i == 0) {if (mas[i] < mas[i + 1]) b++;}
            else if (i == j - 1) {if (mas[i - 1] > mas[i]) b++;}
            else if (mas[i + 1] > mas[i] && mas[i - 1] > mas[i]) b++;
            if (b > 1) break;
        }
// 5 2 2 4 10 5 10 7 10
        // forn(i, b) cout << m[i] << " ";
        // cout << "\n";
        // if (b == 2){
        //     cout << "YES" << "\n";
        // }
        // else cout << "NO" << "\n";
        // cout << l << " " << r << "\n";
        if (b == 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        return;
        // cout << b << "\n";

    }
    else cout << "YES" << "\n";
    return;
}


int main() {

    LL ttt = 1;
    cin >> ttt;
    while(ttt--) solve();
}