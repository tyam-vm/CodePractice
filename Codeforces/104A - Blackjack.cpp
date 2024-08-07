// problem23
#include <iostream>
void solve();
using namespace std;

void solve()
{
    int n;
    cin >> n;
    n -= 10;
    int a[26] = { 0, 4,4,4,4,4,4,4,4,4,15,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    if (n < 12 && n >= 0) { cout << a[n]; }
    else cout << 0;

}

int p104A()
{
    int n(1);
    // cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}
