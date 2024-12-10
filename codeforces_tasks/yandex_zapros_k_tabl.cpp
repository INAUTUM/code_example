/*
⣾⣿⠿⠿⠶⠿⢿⣿⣿⣿⣿⣦⣤⣄⢀⡅⢠⣾⣛⡉⠄⠄
⢀⡋⣡⣴⣶⣶⡀⠄⠄⠙⢿⣿⣿⣿⣿⣿⣴⣿⣿⣿⢃⣤
⢸⣇⠻⣿⣿⣿⣧⣀⢀⣠⡌⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿
⢸⣿⣷⣤⣤⣤⣬⣙⣛⢿⣿⣿⣿⣿⣿⣿⡿⣿⣿⡍⠄⠄
⣖⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⢇⣿⣿⡷⠶⠶
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿
⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣦⣌⣛⣻⣿⣿⣧⠙⠛⠛⡭⠅⠒⠦⠭⣭⡻⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⡆⠄⠄⠄⠄⠄⠄⠄⠄⠹⠈⢋⣽⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⠄⣴⣿⣶⣄⠄⣴⣶⠄⢀⣾⣿⣿⣿
⠈⠻⣿⣿⣿⣿⣿⣿⡄⢻⣿⣿⣿⠄⣿⣿⡀⣾⣿⣿⣿⣿
⠄⠄⠄⠄⠄⠉⠻⣿⣿⣾⣦⡙⠻⣷⣾⣿⠃⠿⠋⠁⠄⠄
⣿⣶⣶⣮⣥⣒⠲⢮⣝⡿⣿⣿⡆⣿⡿⠃⠄⠄⠄⠄⠄..
*/

// #pragma optimization_level 3
// #pragma GCC optimize("Ofast,no-stack-protector")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("fast-math")
// #pragma GCC optimize("unroll-loops")

#define vi vector <long long>
#define forn(i, uoi) for(ll i = 0; i < uoi; i++)
#define foran(i, a, n) for(int i = a; i < n; i++)
#define ll long long
#define dd double
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n, m, q;
    cin >> n >> m >> q;
    vector<string> s(m);
    ll o = 0;
    // for(auto &s : s) {string h; cin >> h; s = make_pair(h, o); ++o;}
    for(auto &s : s) cin >> s;
    sort(s.begin(), s.end());
    ll a[n][m];
    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    while(--q >= 0){
        string col;
        char zn;
        ll pos;
        cin >> col >> zn >> pos;
        ll x = distance(s.begin(), find(s.begin(), s.end(), col));
        for(ll i = 0; i < n; ++i){
            if(zn == '<'){
                if(a[i][x] >= pos) {
                    for(ll j = 0; j < m; ++j){
                        a[i][j] = 0;
                    }
                }
            }
            else{
                if(a[i][x] <= pos) {
                    for(ll j = 0; j < m; ++j){
                        a[i][j] = 0;
                    }
                }
            }
        }
        // for(ll i = 0; i < n; ++i){
        //     for(ll j = 0; j < m; ++j){
        //         cout << a[i][j];
        //     }
        // }
        // cout << endl;
    }
    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            ans += a[i][j];
        }
    }
    cout << ans << endl;
}