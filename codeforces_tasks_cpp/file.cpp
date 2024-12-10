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
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m; cin >> n >> m;
    int mas[n];
    forn(i, n) cin >> mas[i];
    // sort(mas, mas + n, [&](int &a, int&b) {
    //     return a > b;
    // });
    forn(i,n) cout << mas[i] << " \n ";
    cout << "\n";
    // error(n, m);
    // cout << upper_bound(v.begin(), v.end(), 4) << endl;
    // vi mas1;
    // vi mas2;
    // int po = n - 2;
    // if (n > 1){
    //     while (true){
    //         if (mas[0] + mas[po] <= m){
    //             mas1.push_back([mas[po], mas[0]]);
    //             delete [] mas[po];
    //             delete [] mas[0];
    //             po = mas.size();
    //             if (po <= 0 || mas.size() <= 1) break;
    //         }
    //         else{
    //             if (po - 1 <= 0 || mas.size() <= 1) break;
    //             po -= 1;
    //         }
    //     }
    // }
    // if (mas.size() > 1){

    // }
}