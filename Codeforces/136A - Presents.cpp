// problem18
 // may be there was a way to do it much simpler ,
 // nevertheless can there be a algorithm or some other way to do this gift arangement
 // it just seems something that higher level maths could do easily & ELEGENTLY*/
/*
#include <iostream>
void solve();
using namespace std;
void solve()
{
    int n=1, p;
    //cin >>n; // error on buiding with this change in n , think other method
    int a[n] = { 0 };
    for (int i(1); i <= n; i++) 
    {
        cin >> p;
        a[p -1] = i;
    }
    for (int i(1); i <= n; i++)
    {
        cout << a[i - 1] << " ";
    }
}

int p136A()
{
    int n(1);
    // cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}
*/