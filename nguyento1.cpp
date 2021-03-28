#include <bits/stdc++.h>
#define l long long
#define pt 1000000

using namespace std;

bool snt(l n)
{
    if(n <= 1){
        return false;
    }
    for(l i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

l sumUoc(l n)
{
    l s = 0;
    s = (1+n)*n/2;
    return s;
}

l n, kt[pt], a[pt], d = 0;

int main()
{
    scanf("%lld", &n);
    for(l i=n; i>=1; i--){
        l s = 0;
        for(l j = i - 1; j >= 1; j--){
            if(snt(i + j)){
                cout << i + j;
                s++;
                break;
            }
        }
        if(s == 1){
            break;
        }
    }
}
