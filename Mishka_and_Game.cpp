#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n;

    int mishka = 0, chris = 0;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(a > b) mishka++;
        else if(b > a) chris++;
    }
    

    if(mishka == chris){
        cout << "Friendship is magic!^^" << endl;
    }else if(mishka > chris){
        cout << "Mishka" << endl;
    }else{
        cout << "Chris" << endl;
    }

    return 0;
}