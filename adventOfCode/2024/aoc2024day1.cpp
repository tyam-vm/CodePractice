#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

#pragma comment(lib , "Ws2_32.lib")
using namespace std;

// int main(){ this is part1
//     freopen("input/day1.txt", "r" , stdin);
//     long long int sum(0);
//     vector <int> a;
//     vector <int> b;
//     int x , y;
//     for(int i =0 ; i < 1000 ; i++){
//         cin >> x >> y;
//         a.push_back(x);
//         b.push_back(y);
//     }
//     sort(a.begin() , a.end());
//     sort(b.begin() , b.end());

//     for(int i(0) ; i<1000; i++){
//         sum += abs(a[i] - b[i]);
//     }
//     cout << sum << endl;
//     return 0;
// } 
int main(){
    const int N = 1000;
    freopen("input/day1.txt", "r" , stdin);
    long long int sum(0);
    vector <int> a;
    vector <int> b;
    int x , y;
    for(int i =0 ; i < N ; i++){
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    int cnt(1);
    int temp(1);
    for(x=0,y=0 ; x < a.size() && y < b.size(); ){
        if (a[x] == b[y]){
            while(a[x] == b[++y] ){
                cnt++;
            }
            while(a[x] == a[x+1]){
                temp++;
                x++;
            }
            sum += a[x]*temp*cnt;
            x++;
        }
        else if(a[x] < b[y]) x++;
        else y++;
        cnt = 1, temp = 1;
    }
    cout << sum << endl;

}