// Problem34
//34A
#include <iostream>
using namespace std;
void solve();

void solve()
{int n ,idxMin(1), idxMin2(1) ;
cin >>n;
int a[n] ={0};
for(int i(0),temp;i<n;i++){cin>> temp; a[i]=temp;}

for( int i(0),j,min(1000),absValue; i<n; i++)
{ if(i==n-1){j=0;}
    else j= i+1;

        { absValue= abs(a[i]-a[j]);
          if(min>absValue){min =absValue;idxMin=i+1;idxMin2=j+1;}
        }
}

cout<< idxMin<< " "<<idxMin2;
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
