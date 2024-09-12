// problem19
#include <iostream>
#include <numeric>
#include <algorithm>
void solve();
using namespace std;
int gcd(int m, int n)
{//m >n
    if (m == n) { return m; }
    if (m > n) { return gcd(m - n, n); }
    else {return gcd(n-m,m) ;} // n>m
}
void solve()
{
    int a, b, n(0);
    cin >> a >> b >> n;
    while (n > 0)
    {
       n -= gcd(n, a);
        if (n < 0) { cout << 1; break; }
        else if (n == 0) { cout << 0; break; }

       n -= gcd(n, b);
        if (n < 0) { cout << 0; break; }
        else if (n == 0) { cout << 1; break; }
    }

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