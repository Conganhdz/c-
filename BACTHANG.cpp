#include <bits/stdc++.h>

using namespace std;

bool checkBac(long long n)
{
    if(n < 10){
        return false;
    }
    long long temp, numR = 10;
    while(n != 0){
        temp = n % 10;
        if(temp >= numR){
            return false;
        }
        numR = temp;
        n /= 10;
    }
    return true;
}

long long n, a[10009], score = 0;

int main()
{
    cin >> n;
    for(long long i = 1; i<= n; i++) cin >> a[i];
    for(long long i = 1; i <= n; i++){
        if(checkBac(a[i])){
            score++;
        }
    }
    cout << score;
}
