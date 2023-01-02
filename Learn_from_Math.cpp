#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int i;
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    for(i = 3; i*i <= n; i+= 2){
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int l,r,half;
    half = n/2;
    l = half;
    r = half;

    if(n%2 != 0) r++;

    while(half--){
        if(prime(l) || prime(r)){
            l--;
            r++;
        }else{
            cout << l << " " << r << endl;
            break;
        }
    }

    return 0;
}