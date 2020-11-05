#include <bits/stdc++.h>

using namespace std;

int ktsnt(int n)
{
    int i;
    if (n<2){
        return 0;
    }
    for (i=2; i<=sqrt(n); i++){
        if (n%i==0)
        return 0;
    }
    return 1;
}

int tinh(int n)
{
    int i,s=0;
    for (i=2; i<=n; i++)
        if (ktsnt(i)==1)
            s=s+i;
    return s;
}

int dem(int n)
{
    int i,s=0;
    for (i=2; i<=n; i++)
        if (ktsnt(i)==1)
            s++;
    return s;
}

int main()
{
    int n, a[1000];
    cin >> n;
    cout << dem(n) << endl;
    cout << tinh(n) << endl;
    for(int i = n; i >= 2; i--){
        if(ktsnt(i) == 1){
            cout << i << " ";
        }
    }
    return 0;
}
