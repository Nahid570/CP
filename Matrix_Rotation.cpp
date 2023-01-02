#include<bits/stdc++.h>
using namespace std;

int isBeautiful(int a, int b, int c, int d)
{
    if(a<b && a<c && d>b && d>c) return 1;
    else if(c<a && c<d && b>a && b>d) return 1;
    else if(d<c && d<b && a>c && a>b) return 1;
    else if(b<d && b<a && c>d && c>a) return 1;
    else return 0;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(isBeautiful(a, b, c, d)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}