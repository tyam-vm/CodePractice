// problem15
#include <iostream>
void solve();
using namespace std;
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
void solve()
{
    int len, first(0), last(0);
    string input;
    cin >> len >> input;
    for (int i(0); i < len; i++)
    {
        if (input[i] != '4' && input[i] != '7'){ cout << "NO"; return; }
        if (i < len / 2) { first += int(input[i]); }
        else { last += int(input[i]); }
    }
    if (first == last) { cout << "YES"; }
    else cout << "NO";
}
