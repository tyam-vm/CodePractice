// Problem40
//
#include <iostream>
using namespace std;
void solve();

void solve()
{long long int n(0),sum(0),temp(0);
cin >> n;
for(int i(1);i<n;i++){
    cin >> temp;
    sum += temp;
    sum -= i;
}
sum = n-sum;
cout<< sum << endl;
}
int main()
{
int n(1);
// cin >> n;
while(n--)
{
 solve();
}}
