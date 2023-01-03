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
        string s;
        cin >> s;
        vector<string> v;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'Q'){
                v.push_back("Q");
            }else if(!v.empty()){
                v.pop_back();
            }
        }

        if(!v.empty()){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }

    }

    return 0;
}