// Problem35
//	32B - Borze
#include <iostream>
using namespace std;
void solve();

void solve()
{string s,sn("");
cin >>s;
for(int i(0), n= s.size();i<n;)
{if(s[i] == '.'){sn += '0';i++;}
 else if(s[i] == '-'){
                 if(s[i+1] == '.'){sn += '1'; i= i+2;}
                 else if(s[i+1] =='-'){sn +='2'; (++i)++;}
 }

}
cout << sn;
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
