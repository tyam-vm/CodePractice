// Problem40
//
#include <iostream>
#include <math.h>
using namespace std;
void solve();

void solve()
{
int n;
cin >> n;
int sum(0);
int temp;
for(int i(0); i<n;i++){
    cin >> temp;
    sum += (temp*temp);
}
cout << ceil(sqrt(sum/n)) << endl;
}
int main()
{
int n(1);
cin >> n;
while(n--)
{
 solve();
}
}
    