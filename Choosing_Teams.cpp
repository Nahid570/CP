#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int A[n];

    for(int i=0; i<n; i++) cin >> A[i];

    int team_count = 0;
    for(int i=0; i<n; i++)
    {
        if(A[i]+k <= 5){
            team_count++;
        }
    }
    
    cout << team_count/3 << endl;

    return 0;
}