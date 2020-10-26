#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100], b[100], c[100], j, i, n, k;
    cin >> n >> k;
    for(i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
    }
    for(i = 1; i<= n; i++){
        c[i] = a[i] - b[i];
    }
    for(i = 1; i <= n - 1; i++){
        for(j = i + 1; j<=n; j++){
            if(c[i] < c[j]){
                int tg = c[i];
                c[i] = c[j];
                c[j] = tg;
            }
        }
    }
    cout << c[k];
}
