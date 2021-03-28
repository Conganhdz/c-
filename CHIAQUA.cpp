#include <bits/stdc++.h>

using namespace std;

long long n, k, a[10000009], candyS[10000009], s[10000009], res = 0;

int main()
{
    freopen("CHIAQUA.INP", "r", stdin);
    freopen("CHIAQUA.OUT", "w", stdout);
    cin >> n >> k;
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }
    s[0] = 0;
    for(long long i = 1; i <= n; i++){
        s[i] = s[i-1]+ a[i];
    }
    for(long long i = 0; i+k <= n; i++){
        s[i] = s[i+k]-s[i];
    }
    candyS[n-k+1] = 0;
    for(long long i = n-k; i >= 0; i--){
        candyS[i] = max(candyS[i+1],s[i]);
    }
    for(long long i = 0; i <= n-k; i++){
        res = max(res,s[i]+candyS[i+k]);
    }
    cout << res;
}
