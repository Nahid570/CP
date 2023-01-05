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
        bool flag = false;

        sort(A, A+n);
        for(int i=0; i<n-1; i++){
            if(!(A[i] < A[i+1])){
                flag = true;
                break;
            }
        }

        if(flag){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}