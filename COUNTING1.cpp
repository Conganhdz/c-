#include <bits/stdc++.h>
typedef long long LL;
#define pt 1000000
using namespace std;

LL n, b[pt], temp;

int main()
{
    scanf("%lld", &n);
    for(LL i = 0; i <= 99; i++){
        b[i] = 0;
    }
    for(LL i = 1; i <= n; i++){
        scanf("%lld", &temp);
        b[temp]++;
    }
    for(LL i = 0; i <= 99; i++){
        cout << b[i] << " ";
    }
}
