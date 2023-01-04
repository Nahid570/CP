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
        int A[n];
        for(int i=0; i<n; i++){
            cin >> A[i];
        }

        int mx = INT32_MIN, mn = INT32_MAX, orAns, andAns;

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n; j++){
                orAns = A[i] | A[j];
                andAns = A[i] & A[j];
                mx = max(mx, orAns);
                mn = min(mn, andAns);
               if(A[i] > A[j]){
                    A[i] = orAns;
                    A[j] = andAns;
               }
               else{
                    A[i] = andAns;
                    A[j] = orAns;
               }
            }
        }

        cout << mx - mn << endl;
    }

    return 0;
}