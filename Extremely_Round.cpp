#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int ex_round = 0;
        while(n/10){
            ex_round += 9;
            n /= 10;
        }

        cout << ex_round + n << endl;
    }

    return 0;
}