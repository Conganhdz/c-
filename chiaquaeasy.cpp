#include <bits/stdc++.h>

typedef long long int64;

using namespace std;

int64 n, s = 1, s2 = 0;

int main()
{
    scanf("%lld", &n);
    for(int64 i = 1; i <= n; i++){
        s2+=s;
        s+=3;
    }
    cout << s2;
}
