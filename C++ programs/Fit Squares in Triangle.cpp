#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n /= 2;
        cout << (n * (n - 1)) / 2 << "\n";
    }
    return 0;
}
