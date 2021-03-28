#include <bits/stdc++.h>
#define LL long long

using namespace std;

LL a, b, k;

int main()
{
    scanf("%lld %lld %lld", &a, &b, &k);
    cout << (a*b + a*k)-k;
}
