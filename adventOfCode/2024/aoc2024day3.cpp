#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>
#include <string>
using namespace std;
// /(mul\(\d{1,3},\d{1,3}\))/gm
int mul(string& inp){
    regex pattern = regex("mul\\((\\d{1,3}),(\\d{1,3})\\)");
    int sum(0);
    smatch sm;
    auto word_begin = sregex_iterator(inp.begin() , inp.end() , pattern);
    auto word_end = sregex_iterator();
    for(sregex_iterator i = word_begin; i != word_end ; i++){
        sm = *i;
        sum = sum + (stoi(sm[1]) * stoi(sm[2]));
    }
    return sum;
}


int main(){
    bool part2 = true;
    long long int sum = 0;
    ifstream file1("input/day3.txt");

    smatch sm;
    stringstream buffer;
    buffer << file1.rdbuf();
    string inp = buffer.str();
    
    if (!part2){
        sum = sum + mul(inp);
    }
    
    else{
   regex DOpattern = regex("mul\\((\\d{1,3}),(\\d{1,3})\\)|do\\(\\)|don't\\(\\)");
    smatch sm;
    auto word_begin = sregex_iterator(inp.begin() , inp.end() , DOpattern);
    auto word_end = sregex_iterator();
    bool flag = true;
    for(sregex_iterator i = word_begin; i != word_end ; i++){
        sm = *i;
        if(sm[0] == "don't()"){
            flag = false;
        }
        if(sm[0] == "do()"){
            flag = true;
        }
        else{
            if(flag){
                sum = sum + (stoi(sm[1]) * stoi(sm[2]));

            }
            else{
                continue;
            }
        // cout << endl;
        }
    }
    
    
    // regex_search(inp , sm , pattern);
    // for(auto i =0; i< sm.size(); i++){
    //     cout << sm[i] << endl;
    // }
    
   
    cout << sum << endl;
    file1.close();
    return 0;
}
}