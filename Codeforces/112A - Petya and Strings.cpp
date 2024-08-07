// problem21
#include <iostream>
void solve();
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    for (int i(0), n = a.size(); i < n; i++)
    {
        if (a[i] < 97) { a[i] += 32; }
        if (b[i] < 97) { b[i] += 32; }
    }
    if (a == b) { cout << 0; }
    else if (a < b) { cout << -1; }
    else cout << 1;
}



int p112A()
{
    int n(1);
    // cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}
