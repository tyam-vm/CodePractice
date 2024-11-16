#include <iostream>
#include <algorithm>
using namespace std;
void solve();
bool sortDirection(int init,int next){return init > next;}
void solve()
{int n(1),cnt(0);
int arr[200001]={0};
    cin >> n;
    for(int i(0);i<n;i++){
        cin >> arr[i];
    }
    sort(arr,std::end(arr),sortDirection);
    
    for(int i(0),arrvValue,temp(-1),len =n;i<len;i++){
        arrvValue=arr[i];
        if(arrvValue ==0){break;}
        else if(arrvValue == temp){continue;}
        else{temp =arrvValue;cnt++;}
    }
    cout << cnt << endl;
}
int main()
{
int n(1);
// cin >> n;
while(n--)
{
 solve();
}}