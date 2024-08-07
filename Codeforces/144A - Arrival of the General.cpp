// problem16
#include <iostream>
void solve();
using namespace std;
int p144A()
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
    int max(1), min(100), n,input,max_i,min_i,output(0);
    cin >> n;
    for(int i(0);i<n;i++)
    {   cin >> input;
        if (input > max) { max = input; max_i = i; }
        if (input <= min) { min = input; min_i = i; }
    }
    if ((max_i - min_i) < 0) { output = max_i + (n - min_i - 1); }
    else if (max_i - min_i > 0) { output = max_i + (n - min_i - 2); }
    cout << output;
}