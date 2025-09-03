#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (int i = 0; i < babbling.size(); i++) {
        bool check = false;
        int n = 0;
        
        for (int j = 0; j < babbling[i].size(); j++) {
            if (babbling[i].substr(j, 3) == "aya" && n != 1) j += 2, n = 1;
            else if (babbling[i].substr(j, 2) == "ye" && n != 2) j += 1, n = 2;
            else if (babbling[i].substr(j, 3) == "woo" && n != 3) j += 2, n = 3;
            else if (babbling[i].substr(j, 2) == "ma" && n != 4) j += 1, n = 4;
            else {
                check = true;
                break;
            }
        }
        if (!check) answer++;
    }
    return answer;
}