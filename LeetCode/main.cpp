#include <vector>
#include <iostream>
using namespace std;
class Solution{
    public:
    vector<int> intersection(vector<int> , vector<int>);
};
int main(){
    vector<int> n1 ={1,2,2,1};
    vector<int> n2 = {2,2};
    Solution test;
    vector<int> res = test.intersection(n1,n2) ;
    for(auto i=1; i <= res.size(); i++){
        cout << res[i-1] << " ";
    }
    cout << endl;
}