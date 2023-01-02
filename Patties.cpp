#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,m,c,k,r,v;
    cin >> p >> m >> c >> k >> r >> v;

    int max_patties = 0;

    while(p >=k && m >= r && c >= v)
    {
        max_patties++;
        p = p - k;
        m = m - r;
        c = c - v;
    }

    cout << max_patties << endl;

    return 0;
}