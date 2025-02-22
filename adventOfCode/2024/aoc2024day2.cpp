#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <string> 
#include <vector>
#include <algorithm>

using namespace std;
bool safevec(vector <int> values){
    bool safe = true;
    bool dec= false, inc = false;


    for(int i =0; i < values.size()-1; i++){
        int temp = values[i] - values[i+1];
        
        if(!(abs(temp) > 0) || !(abs(temp) < 4)) {
            safe = false;
            break;
        }

        else if(temp > 0) inc = true;
            

        else if(temp < 0) dec = true;

        if(inc && dec) {
            safe = false;
            break;
        }
    }
    return safe;
}
int main() {
bool part2 = false;
std::ifstream inputFile("input/day2.txt");
if (!inputFile) {
     std::cerr << "Unable to open file";
      return 1; 
    }
std::string line;
int cnt =0;


while (std::getline(inputFile, line)) {
    
    std::istringstream iss(line);
    std::vector<int> values;
     int value;
while (iss >> value) {
    values.push_back(value);
}
bool safe = false;
safe = safevec(values);

if (safe) cnt++;
//************************************************This else if is for part2 of question********************************* */

else if(values.size() >= 2 && part2 == true){
        
        for(int i(0), n = values.size(); i< n; i++){
            vector <int> temp;
            for(int j = 0; j< n;j++){
                if(i==j) continue;
                temp.push_back(values[j]);
            }
            
            if(safevec(temp)){
                cnt++;
                break;
            }
        }
    }
}
inputFile.close();
cout << cnt << endl;
}