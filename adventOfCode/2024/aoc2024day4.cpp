#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdio>
using namespace std;

bool part2 = true;
const int N = 140;

 std::string word = "XMAS";
    
//const int arrsize = N + 2*(word.size()-1);
const int arrsize = N + 2*(4-1);
int offset = word.size();

int matchX(char (&arr)[arrsize][arrsize] , int i , int j){
    if((arr[i-1][j-1] == 'S' && arr[i+1][j+1] == 'M') || (arr[i-1][j-1] == 'M' && arr[i+1][j+1] == 'S')  ){
// s|m 0 0
//  0  A 0
//  0  A s|m
    if((arr[i-1][j+1] == 'S' && arr[i+1][j-1] == 'M') || (arr[i-1][j+1] == 'M' && arr[i+1][j-1] == 'S')  ){
        return 1;
    }


 }
 return 0;
}

int matchDirection(string word,char(&arr)[arrsize][arrsize],int i , int j){
    int sum =0;
    for(int y =-1; y<2; y++){
        for(int x = -1; x <2 ;x++){
            if(x==0 and y==0) continue;
            if(word[1] == arr[i+y][j+x]){
                
                if(word[2]== arr[i+(y*2)][j+(x*2)] && word[3]== arr[i+(y*3)][j+(x*3)] ){
                    
                    sum++;
                }
            }
        }
    }
    return sum;
}


int main(){
    freopen("input/day4.txt", "r", stdin);
    char arr[arrsize][arrsize] ={0};
    
    for(int i(offset); i < offset+N; i++ ){//get input of array
        std::cin.getline(&arr[i][offset],N+1);
        // for(int j(offset); j<N+offset ; j++){
        //     cout << arr[i][j];
        // }
        // cout << endl;
    }

    long long int cnt = 0;
    for(int i(offset); i < offset+N; i++ ){//finds the first letter of the word that is 'X' for XMAS
        for(int j(offset); j < N+offset; j++){
            if(arr[i][j] == word[0] && !part2){
                cnt = cnt+ matchDirection(word,arr,i,j);
            }
            if(part2 && arr[i][j]== 'A'){
                cnt = cnt + matchX(arr,i,j);
            }
        }
    }

cout << cnt << endl; 
}