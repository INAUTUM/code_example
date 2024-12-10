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

// vector<LL> operator-(const vector<int>&a, const vector<int>&b)
// {
//     if (a.size() != b.size())
//         throw("a.size() != b.size()"); // Или как-то иначе обработать разные размеры
//     vector<int> c(a.size());
//     for(size_t i = 0; i < a.size(); ++i)
//         c[i] = a[i] - b[i];
//     return c;
// }

// vector<LL> operator+(const vector<int>&a, const vector<int>&b)
// {
//     if (a.size() != b.size())
//         throw("a.size() != b.size()"); // Или как-то иначе обработать разные размеры
//     vector<int> c(a.size());
//     for(size_t i = 0; i < a.size(); ++i)
//         c[i] = a[i] + b[i];
//     return c;
// }

// #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
// 	cerr << *it << " = " << a << endl;
// 	err(++it, args...);
// }
// class Solution{
//     public:
//         vector<vector<LL>> threeSum(vector<LL> &nums){}
// };
// LL maxi = 0;
// LL u = 0;
// void solve(){
//     LL k, n; cin >> k >> n;
//     if (u - k + n > maxi) maxi = u - k + n;
//     u = u - k + n;
//     // cout << u << "\n";
//     // cout << maxi << "\n";
// }

// vector<vector<LL>> f(LL y, LL k, vector<vector<LL>> mas, bool s = false){
//     vi arr;
//     if (s == 1 or k == 1){
//         forn(i, k) arr.push_back(-1);
//         arr[k - 1] = y;
//         if (y == 0) return {{0}, arr};
//         else return {{mas[k - 1][y - 1]}, arr};
//     }
    // else{
    //     vector<vector<LL>>maxx = {{-1}, {-1, k}};
    //     forn(i, y + 1){
    //         vector<vector<LL>>f1 = f(i, k, mas, true);
    //         vector<vector<LL>>f2 = f(y - i, k - 1, mas, false);
    //         // vector<vector<LL>> data1;
    //         // if (data > maxx[0]){
    //         //     maxx[0] = data1;

    //         // }
    //     }
    // }
// }

// vector<vector<LL>> find(vector<vector<LL>> mas){
    // vector<vector<LL>>data = f(mas[0].size(), mas.size(), mas, false);
    // return data;
// }

// string reverse(string const &s)
// {
//     string rev(s.rbegin(), s.rend());
//     return rev;
// }


// int NOD(LL A, LL B)
// {
// while (A != 0 && B != 0)
// if (A > B) A %= B; else B %= A;
// return A + B;
// }

// LL check(LL k, LL n, LL m, vi b, vi a){
//     LL cnt = 0;
//     // cout << "+" << k << "\n";
//     for (LL i = 0; i < m && cnt < k; ++i){
//         cout << b[cnt] << " " << a[i] << " " << b[n - 1 - k + cnt] << "\n";
//         if (b[cnt] < a[i] && a[i] < b[n - 1 - k + cnt && 2 * k <= n]){
//             cnt++;
//             // cout << cnt << "+" << "\n";
//         }
//     }
//     cout << cnt << "\n";
//     if(cnt >= k) return 0;
//     else if(cnt < k) return 1;
// }

int main(){
    ll n;
    vector<ll> a;
    ll ans;
    ll t;
    cin >> t;
    while(--t){
        cin >> n;
        ans = 0;
        a.clear();
        a.resize(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        for(auto &x : a) ans += x - a[0];
        cout << ans << endl;
    }
}