#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string str;
        cin >> str;

       if(str.length() == 2) cout << str << endl;
       else{
            string conc = "";
            for(int i=0; i<str.length(); i+=2)
            {
                conc += str[i];
            }
            cout << conc + str[str.length() - 1] << endl;
       }
    }

    return 0;
}
