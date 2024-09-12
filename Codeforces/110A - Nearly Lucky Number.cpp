// problem22
#include <iostream>
void solve();
using namespace std;
void solve()
{
    string n;
    int cnt(0);
    cin >> n;
    for (int i(0),stop = n.size(); i < stop; i++)
    {
        if (n[i] == '4' || n[i] == '7') { cnt++; }
    }
    if (cnt == 4 || cnt == 7) { cout << "YES"; }
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
