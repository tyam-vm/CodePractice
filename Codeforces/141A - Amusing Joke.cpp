// problem17
//not sure if  i could have written a better algorithm,
// another option was to use sort algorithm twice.
// Should try and check which is a better algo for larger inputs*/
#include <iostream>
void solve();
using namespace std;

void solve()
{
    int a[52] = { 0 };

    string input1, input2,input3;
    cin >> input1 >> input2 >> input3;
    if (input1.size() + input2.size() != input3.size()) { cout << "NO"; return; }
    for (int i(0), n = int(input1.size()); i < n; i++) 
    {
        ++a[input1[i] - 'A'];
    }
    for (int i(0), n = int(input2.size()); i < n; i++)
    {
        ++a[input2[i] - 'A'];
    }
    for (int i(0), n = int(input3.size()); i < n; i++)
    {
        ++a[(input3[i] - 'A' )+ 26];
    }
    for (int i(0), n = 26; i < 26; i++)
    {
        if (a[i] != a[i + 26]) { cout << "NO"; return; }
        
    }
    cout << "YES";
} 
int p141A()
{     
    int n(1);
    // cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}
