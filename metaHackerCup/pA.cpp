//A
//


#include <fstream>
#include <iostream>
using namespace std;
float solve();

float solve()
{
int n;
float max(-1);
cin >> n;
int ts[n][2];
// take input of time stamps of each code line
for(int i(0); i<n ;i++){
    cin>> ts[i][0] >> ts[i][1];
}


// for each iteration on slope from down
for(int i(0); i<n ;i++){
    //
int cnt(0);
float m;
m= (float)ts[i][1]/(i+1);
    // to see count of that slope equal to n
    for(int j(0); j<n ;j++){

    if(ts[j][0]<=m*(j+1) && m*(j+1) <= ts[j][1]){
        cnt++;
        continue;
    }
    break;
    }
if(cnt == n){
    max = (float)(i+1)/ts[i][1];
    
    break;
}
}

return max;
}
// return calulated answer

int main()
{
    std::ifstream inputFile("subsonic_subway_input.txt");
    std::ofstream outputFile("output26.txt");
    std::cin.rdbuf(inputFile.rdbuf());
    std::cout.rdbuf(outputFile.rdbuf());

int tests(1);
int num(1);
cin >> tests;

while(tests--)
{
 cout<< "Case #"<<num<<": "<<solve()<<endl;
 num++;
}
}
    