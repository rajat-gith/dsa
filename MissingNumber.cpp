#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<long long, int> mp;

    for (int i = 1; i < n; i++)
    {
        long long temp;
        cin >> temp;
        mp[temp]++;
    }

    for (long long i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
