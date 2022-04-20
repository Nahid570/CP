#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if(n <= 1) cout << 0 << endl;

    else{
        int sum = 0;
        sort(arr, arr + n);
        int max = arr[n - 1];

        for(int i=0; i<n; i++)
        {
            int diff = max - arr[i];
            sum = sum + diff;
        }
        cout << sum << endl;
    }

    return 0;
}
