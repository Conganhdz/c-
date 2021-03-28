#include <bits/stdc++.h>

using namespace std;

long long demUoc(long long n)
{
    long long dem, res = 1;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n% i == 0){
            dem = 0;
            while(n % i == 0){
                n /= i;
                dem++;
            }
            res *= (dem+1);
        }
    }
    if(n > 1){
        res *= 2;
    }
    return res;
}

long long sumUoc(long long n)
{
    long long t = 0;
    for(long long i = 1; i <= sqrt(n); i++){
        if(n% i == 0){
            long long j = n/i;
            if(i == j){
                t+=i;
            }else{
                t+=i+j;
            }
        }
    }
    return t;
}

long long tichUoc(long long n)
{
    long long t = 1;
    for(long long i = 1; i <= sqrt(n); i++){
        if(n% i == 0){
            long long j = n/i;
            if(i == j){
                t*=i;
                t = t%1000000007;
            }else{
                t*=i*j;
                t = t%1000000007;
            }
        }
    }
    return t;
}

long long n;

int main()
{
    cin >> n;
    cout << demUoc(n) << " " << sumUoc(n) << " " << tichUoc(n) << endl;
    for(long long i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}
