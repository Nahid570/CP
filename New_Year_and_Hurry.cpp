#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int s = 0, i=1, j=1, count=0;
    while( k <= 240 && j<=n){
        s = 5*i;
        k += s;
        if(k > 240){
            break;
        }
        i++;
        j++;
        count++;
    }

    cout << count << endl;

    return 0;
}