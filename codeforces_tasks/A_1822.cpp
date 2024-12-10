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
// #pragma GCC optimize("unroll-loops"

#define vi vector <long long>
#define ll long long
#define dd double
#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll t, n, k;
    for(cin >> t; cin >> n >> k; cout << endl){
        vector<ll> a(n);
        vector<ll> b(n);
        for(auto &a : a) cin >> a;
        ll ans = -1, x1 = 0, x = 0;
        for(ll i = 0; i < n; ++i, --k){
            cin >> x;
            if(a[i] <= k && x > x1) ans = i, x1 = x;
        }
        cout << (ans == -1 ? -1 : ans + 1);
    }
}
//test
// 1000
// 3 2
// 1 5 2
// 3 9 7
// 2 4
// 5 5
// 8 10
// 2 2
// 2 2
// 10 3
// 2 9
// 3 1
// 9 4
// 5 9
// 3 1 5 3 3
// 3 9 8 5 6
// 4 3
// 2 3 4 3
// 6 5 7 10
// 3 8
// 1 2 2
// 4 5 10
// 4 1
// 5 5 1 5
// 7 10 7 5
// 3 8
// 1 2 4
// 9 9 4
// 5 2
// 3 3 5 2 4
// 4 8 10 4 10
// 2 6
// 3 1
// 9 6
// 5 2
// 2 5 2 2 3
// 10 4 10 5 6
// 3 8
// 3 4 3
// 8 4 4
// 2 8
// 4 4
// 9 7
// 5 5
// 5 5 3 4 2
// 4 5 7 8 7
// 5 7
// 3 4 5 1 5
// 9 8 6 9 9
// 3 5
// 5 1 4
// 6 10 4
// 2 3
// 5 1
// 8 8
// 5 7
// 3 3 2 2 5
// 9 7 3 6 3
// 5 8
// 5 2 2 3 5
// 3 7 4 6 5
// 4 4
// 4 2 3 4
// 5 10 9 3
// 3 8
// 2 5 2
// 10 9 10
// 4 5
// 3 4 2 5
// 6 8 9 7
