// Problem37
//9A - Die Roll
#include <iostream>
using namespace std;
void solve();

void solve()
{int a,b,numerator,denom(6);
cin >>a>>b;
numerator = std::max(a,b);
numerator = 7 -numerator;
if(numerator == 6){numerator = 1;denom =1;}
else if(numerator == 4){numerator = 2;denom =3;}
else if(numerator == 3){numerator = 1;denom =2;}
else if(numerator == 2){numerator = 1;denom =3;}
cout <<numerator<<"/"<<denom<<'\n';
}

int main()
{
int n(1);
// cin >> n;
while(n--)
{
 solve();
}

}