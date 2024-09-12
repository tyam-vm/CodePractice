// Problem31
//47A - Triangular numbers
#include <iostream>
using namespace std;
void solve();

void solve()
{int n,tnum(1);
cin >> n;
for( int i(2); tnum <= n; i++ ){
if(n== tnum){puts("YES");return;}
tnum = i*(i+1)/2;
}
puts("NO");
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
