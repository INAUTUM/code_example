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

int main() {
    //long long n; cin >> n;
    string m; cin >> m;
    LL str = m.size();
    LL otv = 0;
    LL j = 1;
    forn(i, str - 1){
        if (m[i] == m[i + 1]){
            j += 1;
        }
        else{
            if (j > otv) otv = j;
            j = 1;
        }
    }
    if (j > otv) otv = j;
    cout << otv << "\n";
}