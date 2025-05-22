#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> prices[i];
    }

    vector<int> earnings;
    for (int price : prices)
    {
        if (price < 0)
        {
            earnings.push_back(-price); // store absolute values
        }
    }

    sort(earnings.begin(), earnings.end(), greater<int>());

    int maxEarn = 0;
    for (int i = 0; i < min(m, (int)earnings.size()); ++i)
    {
        maxEarn += earnings[i];
    }

    cout << maxEarn << endl;
    return 0;
}
