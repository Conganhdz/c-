#include <bits/stdc++.h>

#define LL long long
#define pt 1000000

using namespace std;

LL sumUoc(LL n)
{
    LL s = 0;
    for(LL i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            LL j = n / i;
            if( i == j ){
                s += i;
            }else{
                s += i + j;
            }
        }
    }
    return s-n;
}

LL n, m, s = 0;

int main()
{
    scanf("%lld %lld", &n, &m);
    for(LL i = n; i <= m; i++){
        if(sumUoc(i) > i){
            s++;
        }
    }
    cout << s;
}
