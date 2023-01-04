#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int c = INT32_MAX, a = 0, b = 0;

        for (int i = 0; i < k; i++)
            if (str[i] == 'B')
                a++;

        c = min(c, (k - a));

        for (int i = k, j = 0; i < n; i++, j++)
        {

            if (str[i] == 'B')
                a++;

            if (str[j] == 'B')
                a--;

            c = min(c, (k - a));
        }
        cout << c << endl;
    }

    return 0;
}