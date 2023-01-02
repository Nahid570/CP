#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a,b,c,f;

    for(int i=0; i<3; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<3; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    for(int i=0; i<3; i++){
        int x;
        cin >> x;
        c.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    f.push_back(a[1]);
    f.push_back(b[1]);
    f.push_back(c[1]);

    sort(f.begin(), f.end());

    cout << f[1] << endl;

    return 0;
}