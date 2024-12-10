#define vi vector<int>
#define forn(i, n) for(int i = 0; i < n; i++)
#define foran(i, a, n) for(int i = a; i < n; i++)

#include <bits/stdc++.h>

using namespace std;

// #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
// 	cerr << *it << " = " << a << endl;
// 	err(++it, args...);
// }

int main() {
    long long n; cin >> n;
    cout << n << ' ';
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
            cout << n << ' ';
        }
        else{
            n *= 3;
            n += 1;
            cout << n << ' ';
        }
    }
}