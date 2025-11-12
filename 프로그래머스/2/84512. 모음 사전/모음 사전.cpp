#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(string word) {
    // 각 자리수에서의 가중치
    // weights[i] = 해당 위치에서 한 문자를 바꿨을 때 건너뛰는 단어 수
    int weights[5] = {781, 156, 31, 6, 1};
    
    int answer = 0;
    
    // 각 문자마다 순서 계산
    for (int i = 0; i < word.length(); i++) {
        // 현재 문자가 A(0), E(1), I(2), 0(3), U(4) 중 몇 번째인지 계산
        int charIndex = 0;
        if (word[i] == 'A') charIndex = 0;
        else if (word[i] == 'E') charIndex = 1;
        else if (word[i] == 'I') charIndex = 2;
        else if (word[i] == 'O') charIndex = 3;
        else if (word[i] == 'U') charIndex = 4;
        
        // 현재 위치에서 앞선 문자들로 만들 수 있는 모든 조합 수 + 1
        answer += charIndex * weights[i] + 1;
    }
    
    return answer;
}