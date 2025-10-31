#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;   // 각 기능의 완료 일수를 지정
    
    // 1단계 : 각 기능의 완료까지 필요한 일수 계산
    for (int i = 0; i < progresses.size(); i++) {
        int remain = 100 - progresses[i];                   // 남은 진도
        int day = (remain + speeds[i] - 1) / speeds[i];     // 올림 계산
        // 또는 int day = ceil((double)remain / speeds[i]);
        days.push_back(day);
    }
    
    // 2단계 : 배포 그룹 찾기
    int maxDay = days[0];   // 현재 배포 기준일 (첫 번째 기능의 완료일)
    int count = 1;          // 현재 배포에 포함될 기능 개수
    
    for (int i = 1; i < days.size(); i++) {
        if (days[i] <= maxDay) {
            // 기준일 이내에 완료 -> 같이 배포
            count++;
        } else {
            // 기준일 넘어서 완료 -> 이전 그룹 저장, 새 그룹 시작
            answer.push_back(count);
            maxDay = days[i];   // 새로운 배포 기준일
            count = 1;          // 새 그룹 시작
        }
    }
    
    // 마지막 그룹 저장
    answer.push_back(count);
    
    return answer;
}