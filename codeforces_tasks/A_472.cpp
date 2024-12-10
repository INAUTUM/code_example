/*
████████████████████████████████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
███████████████████████████▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓███████████████████████
███████████████████████████████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓███████████████████████
████████████████████████████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓███████████████████████
████████████████████████████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
█████████████████████████████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓████████████████████████
█████████████████████████████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓████████████████████████
█████████████████████████████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬█████████████████████████
██████████████████████████████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓█████████████████████████
███████████████████████████████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬██████████████████████████
███████████████████████████████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓██████████████████████████
████████████████████████████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████████
█████████████████████████████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓████████████████████████████
██████████████████████████████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████
███████████████████████████████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓██████████████████████████████
██████████████████████████████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬████████████████████████████████
███████████████████████████████████████▓▓▓██▓▓╬╬╬╬╬╬▓█████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
*/






#define vi vector <long long>
#define forn(i, uoi) for(LL i = 0; i < uoi; i++)
#define foran(i, a, n) for(int i = a; i < n; i++)
#define LL long long 
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


int NOD(LL A, LL B)
{
while (A != 0 && B != 0)
if (A > B) A %= B; else B %= A;
return A + B;
}

int main() {
    LL n; cin >> n;
    if (n % 2 == 0) cout << 4 << " " << n - 4;
    else cout << 9 << " " << n - 9;
}