#define vi vector <long long>
#define forn(i, uoi) for(LL i = 0; i < uoi; i++)
#define foran(i, a, n) for(int i = a; i < n; i++)
#define ll long long 
#include <bits/stdc++.h>

using namespace std;

// #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
// 	cerr << *it << " = " << a << endl;
// 	err(++it, args...);
// }
// LL maxi = 0;
// LL u = 0;
// void solve(){
//     LL k, n; cin >> k >> n;
//     if (u - k + n > maxi) maxi = u - k + n;
//     u = u - k + n;
//     // cout << u << "\n";
//     // cout << maxi << "\n";

// }


// vector<vector<vector<LL>>> f1(LL y, LL k, vector<vector<LL>> mas, bool s = false){
//     vector<vector<LL>> maxx = {{2}, {-1, 3, {false}}};
//     if(y == 1 or s == 1)return {{2}, {-1, 3, {false}}};
//     else return {{0}, maxx};
// }

// vector<vector<vector<LL>>> f(){
//     vector<vector<LL>>maxx = f1(2, 3, {{0}});
//     return maxx;
// }

// string reverse(string const &s)s
// {
//     string rev(s.rbegin(), s.rend());
//     return rev;
// }

int main() {
    vector<ll> a = {2, 5, 7, 9};
    cout << accumulate(begin(a), end(a), 1, [](ll a, ll b){cout << a << endl; return b * b;}) << endl;

}