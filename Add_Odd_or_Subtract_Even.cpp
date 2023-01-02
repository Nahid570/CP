#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        if(a == b){
            cout << "0" << endl;
        }

        if(a < b){
            int x = abs(a-b);
            if(x%2 != 0){
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
            }
        }

        if(a > b){
            int x = a - b;
            if(x%2 == 0){
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
            }
        }
        
    }

    return 0;
}