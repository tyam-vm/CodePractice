#include <iostream>
#include <string>
#include <regex>
#include <fstream>
#include <sstream>
using namespace std;

vector <int> second;
vector <int> first;

bool part2 = true;
vector <vector <int>> input(){
    regex pattern("(\\d{1,})\\|(\\d{1,})");
    ifstream file1("input/day5.txt");
    string line;
    smatch items;

    vector <vector <int>> arr;
        while(std::getline(file1,line)){
            if(regex_search(line, items , pattern)){
                first.push_back( stoi(items[1]));
                second.push_back( stoi(items[2]));
                continue;
            }
            else{
                vector<int> inp;
                string temp = "";
                line += ",";
                // cout << line << endl;
                for(int i(0), n = line.size(); i<n ; i++){
                    if(line[i] != ','){
                        temp = temp+ line[i];
                        if(line[i+1] == ','){
                            inp.push_back(stoi(temp));
                        }
                    }
                    else{
                        
                        temp = "";
                    }
                }
            arr.push_back(inp);
            }

        }
    return arr;
}

int wrongmid(vector <int> &nums){
bool arrOrder = false;
vector <int> correctNums;
for(int i : nums){
    correctNums.push_back(i);
}
    while(!arrOrder){
        bool correctorder = true;
        for(int i(0), n = correctNums.size(); (i < n) && correctorder; i++){
            vector <int> values;
            for(int index=0 ; index < second.size(); index++){
                if(second[index] == correctNums[i]){
                    values.push_back(first[index]);
                }
            }
            
            for(int restOfArr =i ; (restOfArr < n) && correctorder ; restOfArr++){
                for(int firstIdx = 0 ; firstIdx < values.size() ; firstIdx++){
                    if(values[firstIdx] == correctNums[restOfArr]){
                        int temp;
                        temp = correctNums[restOfArr];
                        correctNums[restOfArr] = correctNums[i];
                        correctNums[i] = temp;
                        correctorder = false;
                        break;
                        
                    }
                }
            }    
        }
        
        if(correctorder){
            arrOrder = true;
        }

    }

    return correctNums[correctNums.size()/2];
}


int checkOrder(vector <int> &nums){
    bool arrOrder =true;
    int wrong =0;
    for(int i = 0 , n = nums.size() ; (i < n-1) && arrOrder ; i++){
        vector <int> values;
        for(int index=0 ; index < second.size(); index++){
            if(second[index] == nums[i]){
                values.push_back(first[index]);
            }
        }
        //
        for(int restOfArr =i ; (restOfArr < n) && arrOrder; restOfArr++){
            for(int firstIdx = 0 ; firstIdx < values.size() ; firstIdx++){
                if(values[firstIdx] == nums[restOfArr]){
                    if(part2){
                        wrong = wrongmid(nums);
                    }
                    arrOrder = false;
                    break;
                }
            }
        }


    }
if(part2){
    return wrong;
}
return (arrOrder ? nums[nums.size()/2] : 0 );
}
int main(){

    long long int sum =0;
    vector <vector <int>> arr = input();


    for(vector<int> nums : arr){
        if(nums.size() == 1){
            cout << "size 1" <<endl;
            continue;
        }
        else{
            cout << checkOrder(nums) << endl;
            sum += checkOrder(nums);
        }
        
    }
cout << sum << endl;
}