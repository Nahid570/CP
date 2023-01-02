#include<bits/stdc++.h>
using namespace std;

int main()
{
    string picked, guessed;
    cin >> picked >> guessed;
    int bulls = 0, cows = 0;

    for(int i=0; i<4; i++){
        if(picked[i] == guessed[i]){
            bulls++;
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i != j){
                if(guessed[i] == picked[j]){
                    cows++;
                }
            }
        }
    }

    cout << bulls << " " << cows << endl;

    return 0;
}