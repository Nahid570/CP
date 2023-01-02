#include<bits/stdc++.h>
using namespace std;

string getPalindrome(string str)
{
    unordered_map<char, int> hmap;

    for(int i=0; i<str.length(); i++){
        hmap[str[i]]++;
    }

    // Find the number of odd element
    int oddCount = 0;
    char oddChar;
    for(auto [key, value]: hmap){
        if(value %2 != 0){
            oddCount++;
            oddChar = key;
        }
    }

    if(oddCount > 1 || oddCount == 1 && str.length()%2 == 0){
        return "NO SOLUTION";
    }

    string firstHalf = " ", secondHalf = "";
    for(auto [key, value]: hmap){
        string s(value/2, key);
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }

    return oddCount == 1 ? firstHalf+oddChar+secondHalf : firstHalf+secondHalf;
}

int main()
{
    string s;
    cin >> s;
    cout << getPalindrome(s) << endl;

    return 0;
}