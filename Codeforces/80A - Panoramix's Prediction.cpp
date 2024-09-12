// problem25
#include <iostream>
void solve();
using namespace std;
bool isPrime(int n)
{
    if (n == 0) return false;
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i(3); i <= n; i = i + 2)
    {
        if (n % i) { continue; }
        else { return true; }
    }
}
void solve()
{
    int n, m, temp(0);
    cin >> n >> m;
    if (n % 2)
    {
        for (int i = n; i <= m; ++(++i))
            if (isPrime(i)) { temp = i; break; }
            else { continue; }
    }

    if (temp == m) { cout << "YES"; }
    else cout << "NO";
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
