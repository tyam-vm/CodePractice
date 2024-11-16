#include <iostream>
#include <algorithm>
using namespace std;
void solve();

void solve()
{
int n,m,q,m1,m2,q1;
int moves(1);
cin >> n>>m>>q;
int ts[m];
int dp[q];

    for(int i(0); i<m;i++){
        cin >> ts[i];
    }
    for(int i(0); i<q;i++){
        cin >> dp[i];
    }
std::sort(ts,end(ts));

    for(int i(0);i<q;i++){
        if(m==1){
            if(dp[i]-ts[i]<0){
                moves = ts[i]-1;
            }
            else{
                moves=n-ts[i];
            }
        }
        else{
            q1=dp[i];
            if(q1<ts[0]){
                    m1=ts[0];m2=ts[1];
                    break;}
            else if(ts[m-1]<q1){
                    m1=ts[m-1];m2=ts[m-2];
                    break;}
            else{
                for(int j(0),temp;i<m;j++){
                    if(ts[j]<q1 && q1<ts[j+1]){m1=ts[j];m2=ts[j+1];
                    break;}
             
                    }
                }
        
if(q1<m1 && q1 < m2){//if david is in far left of the teachers
    if(m1-m2 <0){
        moves=m1-1;
    }
    else{
        moves=m2-1;
    }
}
else if(q1>m1 && q1>m2){// if david is in far right of the teacher
    if(m1-m2 <0){
        moves=n-m2;
    }
    else{
        moves=n-m1;
    }
}
else if(m1-q1<0){
    moves= (m2-m1)/2;
}
else if(m2-q1<0){
    moves= (m1-m2)/2;
}    
        }
        cout << moves <<endl;
    }

}
int main()
{
int n(1);
 cin >> n;
while(n--)
{
 solve();
}}
    