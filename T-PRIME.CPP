#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, s[1000000],dem=0;

int main()
{
    scanf("%lld", &n);
    s[0] = s[1] = 1;
    for(LL i = 2; i <= sqrt(n); i++){
        if(s[i] == 0){
            for(LL j = i*2; j <= sqrt(n); j+=i){
                s[j] = 1;
            }
        }
    }
    for(LL i = 1; i <= sqrt(n); i++){
        if(s[i] == 0){
            dem++;
        }
    }
    cout << dem;
}
