//problem 41
//	755A - PolandBall and Hypothesis


// Alternative solution cout <<( n>2 ? n-2: n+2)<<endl;
#include <iostream>
#include<cmath>
using namespace std;
void solve();
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= std::sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
void solve()
{int n,output(1);
cin >>n;
if(n%2){cout<< 3<<endl;}
else{
int i(1) ;
while(isPrime(i*n+1)){++i;output=i;}
cout<<output;}

}
int main()
{
int n(1);
// cin >> n;
while(n--)
{
 solve();
}}
