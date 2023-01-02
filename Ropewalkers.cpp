#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    int d;
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    cin >> d;

    sort(begin(a), end(a), greater<>());
    int ans = 0;

    if((a[0] - a[1]) < d) ans = d - (a[0] - a[1]);
    if((a[1] - a[2]) < d) ans += d - (a[1] - a[2]);

    cout << ans << endl;

    return 0;
}