#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n = (n + 1) / 2;
    for (int row = 2; row <= n; row++)
    {
        for (int col = n; col >= row; col--)
        {
            cout << "*"
                 << " ";
        }
        for (int spaces = 1; spaces <= 2 * row - 3; spaces++)
        {
            cout << " " << " ";
        }
        for (int col = n; col >= row; col--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int row = n - 1; row >= 2; row--)
    {
        for (int col = n; col >= row; col--)
        {
            cout << "*"  << " ";
        }
        for (int spaces = 1; spaces <= 2 * row - 3; spaces++)
        {
            cout << " "
                 << " ";
        }
        for (int col = n; col >= row; col--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}