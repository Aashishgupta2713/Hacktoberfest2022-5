// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;

    cout << "enter the number of rows";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
