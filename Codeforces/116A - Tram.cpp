// problem20
#include <iostream>
void solve();
using namespace std;
void solve() {
    int n, a(0), b(0), cnt(0),max(0);
    cin >> n;
    for (int i(1); i <= n; i++)
    {
        cin >> a >> b;
        cnt = cnt + b - a;
        if (max < cnt) { max = cnt; }

    }
    cout << max;
}
int main()
{
    int n(1);
    // cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}
