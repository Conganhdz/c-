#include <bits/stdc++.h>
#define LL long long
#define pt 1000000

using namespace std;

LL sumSo(LL n)
{
    LL s = 0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}

LL n, m, kt[pt], s = 0;

int main()
{
    scanf("%lld %lld", &n, &m);
    kt[1] = 1;
    for(LL i = 2; i <= m; i++){
        if(kt[i] == 0){
            for(LL j = i * 2; j <= m; j+=i){
                kt[j] = 1;
            }
        }
    }
    for(LL i = n; i <= m; i++){
        if(kt[i] == 0 && kt[sumSo(i)] == 0){
            s++;
        }
    }
    cout << s;
}
