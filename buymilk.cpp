#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL a, b , c ,d;

main()
{
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    if(a < c || b <= c - d){
        printf("%lld", a/b);
    }else{
        LL temp = (a-d)/(c-d);
        printf("%lld", temp + ((a-temp*(c-d))/b));
    }
}
