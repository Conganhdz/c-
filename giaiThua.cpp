#include <bits/stdc++.h>
typedef long long LL;
#define pt 1000000
using namespace std;

LL giaiThua(LL n)
{
    if(n == 1){
        return 1;
    }else{
        return n * giaiThua(n-1);
    }
}

int main()
{
    cout << giaiThua(20);
}
