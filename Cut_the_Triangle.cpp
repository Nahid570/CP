#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c,d,e,f;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        int ans = 0;

        if(a-c == 0 || c-e == 0 || e-a == 0){
            ans++;
        }
        if(b-d == 0 || d-f == 0 || f-b == 0){
            ans++;
        }

        if(ans == 2){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}