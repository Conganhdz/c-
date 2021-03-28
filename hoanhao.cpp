#include <bits/stdc++.h>

using namespace std;

long long sumUoc(long long n)
{
    long long t = 0;
    for(long long i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
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

bool check(long long n)
{
    return n*2==sumUoc(n);
}

long long n, sl = 0, sum = 0, a[1000000];

int main()
{
    cin >> n;
    for(long long i = 2; i <= n; i++){
        if(check(i)){
            sl++;
            sum+=i;
            a[sl] = i;
        }
    }
    cout << sl << endl << sum << endl;
    for(long long i = 1; i <= sl; i++){
        cout << a[i] << " ";
    }
}
