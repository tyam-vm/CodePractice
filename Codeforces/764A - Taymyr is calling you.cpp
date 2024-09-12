//	764A - Taymyr is calling you
// Problem39
//
#include <iostream>
using namespace std;
void solve();

void solve()
{int n,m,z,cnt(0);
cin >>n>>m>>z;
for(int i(n);i<=z;)
{if(i%m ==0){cnt++;}
i +=n;
}
cout <<cnt<<endl;
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
}
