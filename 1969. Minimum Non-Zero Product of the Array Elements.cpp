#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long minNonZeroProduct(vector<int> &arr)
{

    vector<int> nonZeroElements;
    for (int num : arr)
    {
        if (num != 0)
        {
            nonZeroElements.push_back(num);
        }
    }

    if (nonZeroElements.empty())
        return 0;

    sort(nonZeroElements.begin(), nonZeroElements.end());

    long long product = 1;
    for (int num : nonZeroElements)
    {
        product *= num;
    }

    return product;
}

int main()
{
    vector<int> arr = {1, 2, 0, 3, 4};

    cout << "Minimum Non-Zero Product: " << minNonZeroProduct(arr) << endl;

    return 0;
}
