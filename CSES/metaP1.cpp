
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool solve();

bool solve()
{ int n;
long long int k; 
int least;
cin >>n>>k;
vector <long long int> vec;
vec.resize(n);

for(int i(0); i< n;i++){
   cin >> vec[i];
}
sort(vec.begin(),vec.end());
 if (n==1){least = vec[0] ;}
 else{least = vec[0]*(2*n -3) ;}// least= vec[0]*(loops*2 +1)

if ((least <= k) and least >0){
   return 1;
}
else{
   return 0;
}

}


int main()
{
int n(1);
 cin >> n;
 int cases =n;
 bool result(0);
    while(n--)
    {
 result = solve();
 cout << "Case #"<<cases-n<<": " << (result?"YES":"NO")<< endl;
    }
}
    