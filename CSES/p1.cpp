#include <iostream>
using namespace std;
void solve();

void solve()
{
int n,m,q,m1,m2,q1;
int moves(1);
cin >> n>>m>>q;
cin >> m1>>m2;
cin >>q1;

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
cout <<moves<<endl;
}
int main()
{
int n(1);
cin >> n;
while(n--)
{
 solve();
}}