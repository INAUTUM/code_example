#pragma optimization_level 3
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")

#define vi vector <long long>
#define forn(i, uoi) for(LL i = 0; i < uoi; i++)
#define foran(i, a, n) for(int i = a; i < n; i++)
#define LL long long 
#include <bits/stdc++.h>

using namespace std;


int main(){
    int k, m, n, x = 9, y = 9, z = 10, p[10];
    for(cin >> n >> m; n--; k > x ? : x = k) cin >> k, p[k]++;
    for(; m--; k > y ? : y = k) cin >> k, ++p[k] < 2 | k > z ? : z = k;
    cout << ( z > 9 ? x < y ? x * 10 + y : y * 10 + x : z) << "\n";
}