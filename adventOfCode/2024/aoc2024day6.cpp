#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

const int N = 130;
bool part2 = false;

int offset = 1;
const int arrsize = offset + N + offset;


int main(){
    char arr[arrsize][arrsize] ={0};
    int idxi =0;
    int idxj =0;
    freopen("input/day6.txt", "r" , stdin);
    for(int i(offset); i < offset + N  ; i++ ){//get input of array
        std::cin.getline(arr[i] + offset,N+1);

    }
    for( int i(0) ; i < arrsize ;i++){ // array get ^ indexs and set padding to 0
        
        for(int j(0) ; j < arrsize ; j++){
            if(i == 0 || j == 0   || i == arrsize-1 || j == arrsize-1){
                arr[i][j] = 0;
                continue;
            }
            if(arr[i][j] == '^'){
                idxi = i;
                idxj = j;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    bool x = false;
    bool y = false;
    while(arr[idxi][idxj] != 0){
        if(!x && !y){
            arr[idxi][idxj] = 65;
            if(arr[idxi-1][idxj] == '#'){
                x = false;
                y = true;
                idxj++;
            }
            else idxi--;


        }
        else if(!x && y){
            arr[idxi][idxj] = 65;
            if(arr[idxi][idxj+1] == '#'){
                x = true;
                y = true;
                idxi++;
            }
            else idxj++;

        }
        else if(x && !y){
            arr[idxi][idxj] = 65;
            if(arr[idxi][idxj-1] == '#'){
                x = false;
                y = false;
                idxi--;
            }
            else idxj--;
        }
        else if(x && y){
            arr[idxi][idxj] = 65;
            if(arr[idxi+1][idxj] == '#'){
                x = true;
                y = false;
                idxj--;
            }
            else idxi++;
        }
    }

    int distinctsteps =0;

    for(auto& row : arr){
        for(char elem : row){
            if(elem == 'A'){
                distinctsteps++;
            }
        }
    }
    cout << distinctsteps << endl;
    return 0;
}