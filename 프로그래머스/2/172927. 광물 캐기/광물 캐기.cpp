#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
map<string, int> m; // 다이아 0, 철 1, 돌 2
int fatigue[3][3] = {{1,1,1}, {5,1,1}, {25,5,1}}; // [곡괭이][광물] = 피로도

void DFS(vector<int> &picks, vector<string> &minerals, int &answer, int sum, int location) {
    
    // 광물 다 캤거나 곡괭이를 다 썼을 때 피로도 갱신
    if (location == minerals.size() || (picks[0] == 0 && picks[1] == 0 && picks[2] == 0)) {
        answer = min(answer, sum);
        return;
    }
    
    // 0 ~ 2 곡괭이 방문
    for (int i = 0; i < 3; i++) {
        
        // i 곡괭이가 있다면
        if (picks[i] != 0) {
            picks[i]--;
            
            int tmpIdx = location; // 곡괭이를 들면 5개 연속 채굴. 임시 인덱스
            int tmpSum = sum; // 누적 피로도
            for (; tmpIdx < location + 5 && tmpIdx < minerals.size(); tmpIdx++) { // 5개 혹은 남은 광물 캐기
                tmpSum += fatigue[i][m[minerals[tmpIdx]]]; // tmpIdx : 광물 번호
            }
            
            DFS(picks, minerals, answer, tmpSum, tmpIdx);
            
            picks[i]++;
        }
    }
}

int solution(vector<int> picks, vector<string> minerals) {
    int answer = (25 * 50) + 1; // 최고 피로도* 최대 광물 개수
    
    m.insert({"diamond", 0});
    m.insert({"iron", 1});
    m.insert({"stone", 2});
    
    DFS(picks, minerals, answer, 0, 0);
    
    return answer;
}