#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a,b;
    cin >> n >> a >> b;

    // When total match is 1 and goal are equal
    if(n==1 && (a==b))
    {
        cout << 1 << endl;
        cout << a << ":" << b << endl;
    }

    // When a+b < n 
    if(a+b < n)
    {
        int d = n - (a + b);
        cout << d << endl;
        if(a > b){
            int c = 0;
            int v = 1;
            while(c != a){
                cout << v << ":" << "0" << endl;
                c++;
            }
        }
        if(b < a){
            int c = 0;
            int v = 1;
            while(c != b){
                cout << "0" << ":" << v << endl;
                c++;
            }
        }
        for(int i=0; i<d; i++){
            cout << "0" << ":" << "0" << endl;
        }
    }

    // When a+b >= n and (a or b) is zero
    if(a+b >= n && (a==0 || b==0))
    {
        
    }


    return 0;
}