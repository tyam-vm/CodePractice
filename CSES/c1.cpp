// Problem40
//
#include <iostream>
#include <algorithm>
using namespace std;
void solve();

void solve()
{ int n ,x,y;
cin >>n;
cin >>x>>y;
x= std::min(x,y);
cout << std::ceil(x) << endl;

}
int main()
{
int n(1);
cin >> n;
while(n--)
{
 solve();
}}
    