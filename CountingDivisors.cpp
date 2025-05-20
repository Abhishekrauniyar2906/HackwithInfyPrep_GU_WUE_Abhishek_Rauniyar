#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1e6 + 1;
vector<int> divisorCount(MAX, 0);

void precomputeDivisors()
{
    for (int i = 1; i < MAX; i++)
    {
        for (int j = i; j < MAX; j += i)
        {
            divisorCount[j]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precomputeDivisors(); // O(n log n)

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        cout << divisorCount[x] << '\n';
    }

    return 0;
}
