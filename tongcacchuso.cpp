#include <bits/stdc++.h>

using namespace std;

int tcs(int m)
{
    int s = 0;
    while(m != 0){
        s += m %10;
        m = m/10;
    }
    return s;
}
int main()
{
    int n, a[1000];
    cin >> n;
    for(int i =1; i <= n; i++){
        cin >> a[i];
    }
    for(int i =1; i <= n-1; i++){
        for(int j = i+1; j <= n; j++){
            if(tcs(a[i]) > tcs(a[j]) || tcs(a[i]) == tcs(a[j]) && a[i] > a[j]){
                    int tg = a[i];
                    a[i] = a[j];
                    a[j] = tg;
            }
        }
    }
    for(int i =1; i <=n; i++){
        cout << a[i] << " ";
    }
}
