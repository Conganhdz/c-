#include <bits/stdc++.h>

using namespace std;

long long sumChan(long long n)
{
    long long t = 0;
    while(n!=0){
        long long temp = n % 10;
        if(temp % 2 == 0){
            t+= temp;
        }
        n/=10;
    }
    return t;
}

long long dem(long long n)
{
    long long t = 0;
    while(n!=0){
        t++;
        n/=10;
    }
    return t;
}

long long sum(long long n)
{
    long long t = 0;
    while(n!=0){
        long long temp = n % 10;
        t+= temp;
        n/=10;
    }
    return t;
}

long long n;

int main()
{
    cin >> n;
    cout << dem(n) << endl << sum(n) << endl << sumChan(n);
}
