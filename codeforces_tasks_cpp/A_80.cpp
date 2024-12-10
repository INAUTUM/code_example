#define vi vector <long long>
#define forn(i, n) for(LL i = 2; i <= n; i++)
#define forny(i, n) for(LL i = 0; i <= n; i++)
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

// LL pow_LL(LL a, LL n){
//     LL ans = 1;
//     forn(i, n) ans*=a;
//     return ans;
// }

// LL prost(LL y){
    
// }

int main(){
    LL x, o; cin >> x >> o;
    vi mas;
    bool k = true;
    int j = 0;
    forn(i, 50){
        k = true;
        for(int y = 2; y <= sqrt(i); y++){
            if (i % y == 0){
                k = false;
                break;
            }
        }
        if (k == false){
            k = true;
            continue;
        }
        else{
            if (x == i) j = mas.size();
            mas.push_back(i);
        }
    }
    if (mas[j + 1] == o) cout << "YES\n";
    else cout << "NO\n";
    // forny(i, size(mas) - 1) cout << mas[i] << " ";
}