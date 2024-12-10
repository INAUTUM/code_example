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
// #pragma GCC optimize("unroll-loops")
// #pragma GCC optimize("fast-math")

#define vi vector <long long>
#define forn(i, uoi) for(ll i = 0; i < uoi; i++)
#define foran(i, a, n) for(int i = a; i < n; i++)
#define ll long long 
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll t;
    cin >> t;
    ll n;
    vector<int> mas;
    ll ans, b, c, k;
    ll p;
    while(--t >= 0){
        mas.clear();
        cin >> n;
        mas.resize(n);
        k = 0;
        c = 0;
        for(auto &i : mas) {
            cin >> i; 
            if(i == 1) ++k;
            else c += k;
        }
        k = 0;
        ans = c;
        c = 0;
        if(mas[0] == 0){
            mas[0] = 1;
            for(auto &i : mas){
                if(i == 1) ++k;
                else c += k;
            }
            mas[0] = 0;
        }
        ans = max(ans, c);
        k = 0;
        c = 0;
        if(mas[n - 1] == 1){
            mas[n - 1] = 0;
            for(auto &i : mas){
                if(i == 1) ++k;
                else c += k;
            }
            mas[n - 1] = 1;
        }
        ans = max(ans, c);
        k = 0;
        c = 0;
        if(mas[n - 1] == 0){
            p = n - 2;
            while(true){
                if(mas[p] == 1) {mas[p] = 0; break;}
                --p;
            }
            for(auto &i : mas){
                if(i == 1) ++k;
                else c += k;
            }
            mas[p] = 1;
        }
        ans = max(ans, c);
        k = 0;
        c = 0;
        if(mas[0] == 1){
            p = 1;
            while(true){
                if(mas[p] == 0) {mas[p] = 1; break;}
                ++p;
            }
            for(auto &i : mas){
                if(i == 1) ++k;
                else c += k;
            }
            mas[p] = 0;
        }
        ans = max(ans,c);
        cout << ans << endl;
    }
}
