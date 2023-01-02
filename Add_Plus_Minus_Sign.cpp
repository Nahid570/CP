#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string a;
    cin >> t;

    while(t--)
    {
        cin >> n;
        cin >> a;
        int one = 0;

        for(int i=0; i<n; i++)
        {
            if(i==0){
                if(a[i] == '1'){
                    one++;
                }
            }else{
                if(a[i] == '1'){
                    one++;
                    if((one%2)==0){
                        cout << "-";
                    }else{
                        cout << "+";
                    }
                }else{
                    cout << "+";
                }
            }
        }

        cout << endl;

    }

    return 0;
}