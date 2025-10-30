#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> categoryCount;   // 종류별 의상 개수 저장
    long long answer = 1;                       // 곱셈이므로 long long 사용
    
    // 각 의상 종류별로 개수를 세기
    for (int i = 0; i < clothes.size(); i++) {
        string type = clothes[i][1];            // 의상 종류
        categoryCount[type]++;                  // 종류별 카운트 증가
    }
    
    // 각 의상 종류별로 (개수 + 1)을 곱하기
    for (auto &pair : categoryCount) {
        // pair.first-> 종류 이름
        // pair.second-> 그 종류 개수
        answer *= (pair.second + 1);
    }
    
    // 아무것도 안 입은 경우 빼기
    // 1가지 경우만 제외하면 되므로 if문 필요하지 않음
    return (int)(answer - 1);
}