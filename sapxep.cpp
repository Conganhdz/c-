#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[50], b[50], c[100], i, j, n;
    cin >> n;
    for(i=1; i <= n; i++){
        cin >> a[i] >> b[i];
        c[i] = a[i];
        c[n + i] = b[i];
    }
    for(i=1; i<= n*2-1; i++){
        for(j = i+1; j<= n*2; j++){
            if(c[i] > c[j]){
                int tg = c[i];
                c[i] = c[j];
                c[j] = tg;
            }
        }
    }
    for(i = 1; i <= n*2; i++){
        cout << c[i] << " ";
    }
}
