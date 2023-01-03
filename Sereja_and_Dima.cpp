#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        A.push_back(x);
    }

    int sereja=0, dima=0;
    bool s = true;
    int size = A.size();
    for(int i=0; i<size; i++){
        int a = A.front();
        int b = A.back();
        
        if(s){
            if(a > b) {
                sereja+= a;
                A.erase(A.begin());
            }else{
                sereja += b;
                A.pop_back();
            }
            s = false;
    
        }else{
            if(a > b) {
                dima += a;
                A.erase(A.begin());
            }else{
                dima += b;
                A.pop_back();
            }
            s = true;
        }

    }
    
    cout << sereja << " " << dima << endl;

    return 0;
}