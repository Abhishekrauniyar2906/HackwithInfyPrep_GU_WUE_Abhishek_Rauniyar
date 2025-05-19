#include <iostream>
#include <string>
using namespace std;

string getBeautifulPermutation(int n)
{
    if (n == 2 || n == 3)
    {
        return "NO SOLUTION";
    }

    string result = "";

    for (int i = 2; i <= n; i += 2) // even numbers first
    {
        result += to_string(i) + " ";
    }

    for (int i = 1; i <= n; i += 2) // then odd numbers
    {
        result += to_string(i) + " ";
    }

    if (!result.empty())
    {
        result.pop_back(); // remove trailing space
    }

    return result;
}

int main()
{
    int n;
    cin >> n;

    cout << getBeautifulPermutation(n) << endl;

    return 0;
}
