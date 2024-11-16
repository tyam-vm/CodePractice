// Problem40
//
#include <iostream>
using namespace std;
void solve();

void solve()
{int n;

cin >>n;
n=n-2;
int last,sec_last,sum(0);

while(n--){
int temp;
cin>> temp;
sum += temp;
}
cin >> sec_last >>last;

cout << last -(sec_last-sum) << endl;

}
int main()
{
int n(1);
cin >> n;
while(n--)
{
 solve();
}}
    