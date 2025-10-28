#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    // want 목록을 해시맵으로 저장
    unordered_map<string, int> wantMap;
    for (int i = 0; i < want.size(); i++) {
        wantMap[want[i]] = number[i];
    }
   
    // 할인 목록을 10일 단위로 탐색
    for (int i = 0; i + 9 < discount.size(); i++) {
        unordered_map<string, int> temp;
        
        for (int j = i; j < i + 10; j++) {
            temp[discount[j]]++;
        }
        
        bool ok = true;
        for (auto &item : wantMap) {
            if (temp[item.first] < item.second) {
                ok = false;
                break;
            }
        }
        
        if (ok) answer++;
    }
    
    return answer;
}