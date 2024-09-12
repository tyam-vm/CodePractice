// Problem36
//	32A - Reconnaissance
#include <iostream>
using namespace std;
void solve();

void solve()
{int n ,d,cnt;
cin >>n>>d;
int a[n] ={0};
for(int i(0),temp;i<n;i++){cin>> temp; a[i]=temp;}

for( int i(0),absValue; i<n-1; i++)
{    for( int j(1); j<n-i;j++)
        { absValue= abs(a[i]-a[i+j]);
          if(absValue<=d){cnt++;}
        }
}

cout<< cnt*2;
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
