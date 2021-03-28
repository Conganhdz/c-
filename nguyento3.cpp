#include <bits/stdc++.h>
#define l long long

using namespace std;

bool snt(l n)
{
    if(n <= 1){
        return false;
    }
    for(l i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

l n, s= 0;

int main()
{
    cin >> n;
    for(l i = 1; i <= n; i++){
        for(l j = i; j <= n; j++){
            if(snt(i+j)){
                s++;
            }
        }
    }
    cout << s;
}
