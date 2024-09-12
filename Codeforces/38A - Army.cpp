//Problem33
// 38A-Army
#include <iostream>
using namespace std;
void solve();

void solve()
{ int n(1);
cin >>n;
int years[1000] ={0};
for(int i(0); i<n-1;i++){
    cin >> years[i];
}
int now , later , output(0);
cin >> now>> later;
while(now <later){output += years[now-1];now++;}
cout << output;
}

int main()
{
int n(1);
// cin >> n;
while(n--)
{
 solve();
}}
