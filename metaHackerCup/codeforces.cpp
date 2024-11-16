//https://codeforces.com/contest/2030/problem/A
//
/*
#include <iostream>
#include <algorithm>
using namespace std;
void solve();

void solve()
{ int n;
cin >> n;
long long int max, min, temp;
cin >> temp;
min = temp;
max =temp;
for(int i(0); i<n-1;i++){
    cin >> temp;
    max = std::max(max,temp);
    min = std::min(min,temp);
}
cout << (max-min)*(n-1)<< endl;
}
int main()
{
int t(1);
cin >> t;
while(t--)
{
 solve();
}}

*/

//https://codeforces.com/contest/2030/problem/B

//
/*
#include <iostream>
using namespace std;
void solve();

void solve()
{int n;
cin >> n;
cout << 1;
for(int i(0); i< n-1 ; i++){
    cout << 0;
}
cout << endl;

}

int main()
{
int n(1);
 cin >> n;
while(n--)
{
 solve();
}
}

*/

//https://codeforces.com/contest/2030/problem/C
//
#include <iostream>

using namespace std;
int solve();

bool win(bool arr[], int n){
    //base case
    if(n==2){
        if(arr[0]==0){
            if(arr[1]==0){
                return 0;
            }
            else{
                return 1;}
        }
        else{
            
                return 1;
            
        }   
    }
    
    
    if (n%2==0){//Alice has last turn
        
        if(arr[0] == 1){// Alice use OR to win
            return 1;
        }
        else{
            // 1st digit is 0 now check second
            if(win(arr+1, n-1)){
                return 1;
            }
            else{
                return 0;
            }

        }
    }
    else{//Bob has last turn
        if(arr[0]==0){// Bob uses And to win
            return 0;
        }
        else{
            if(!(win(arr+1,n-1))){// second turn out to be 0 the bob wins 
                return 0;
            }
            else{
                return 1;
            }
        }

    }
}

int solve()
{int n;
cin >> n;

bool arr[n];
for(int i(0); i<n;i++){
    cin >> arr[i];
}
//alice last turn
//win(arr,n)? puts("YES") : puts("NO") ;
if(win(arr,n)){
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
int ar[n];
t= 0;
while(n--)
{
 ar[t]=solve();
 t++;
}
for(int i(0); i<n;i++){
    ar[i]==1? puts("YES") : puts("NO");
}
}