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

using namespace std;

bool check(ll n, ll k, ll mid, ll t, vector<ll> gas){
    ll x = 0;
    for(ll i = 1; i < k; ++i){
        if(gas[i] - gas[i - 1] > mid) return 0;
        else if(2 * (gas[i] - gas[i - 1]) <= mid) x += gas[i] - gas[i - 1];
        else x += 3 * (gas[i] - gas[i - 1]) - mid;
    }
    if(x <= t) return 1;
    else return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll n, k, s, t;
    cin >> n >> k >> s >> t;
    vector<pair<ll, ll>> car(n);
    for(auto &car : car) cin >> car.second >> car.first;
    vector<ll> gas(k + 2);
    for(ll i = 1; i < k + 1; ++i){
        cin >> gas[i];
    }
    gas[k + 1] = s;
    sort(car.begin(), car.end());
    sort(gas.begin(), gas.end());
    ll l = -1, r = n + 1, mid;
    while(r - l > 1){
        mid = l + (r - l) / 2;
        if(check(n, k + 2, car[mid].first, t, gas)) r = mid;
        else l = mid;
    }
    if(l == n) cout << -1 << endl;
    else{
        ll ans = 1e9;
        for(ll i = r; i < n; ++i){
            ans = min(ans, car[i].second);
        }
        cout << ans << endl;
    }
}