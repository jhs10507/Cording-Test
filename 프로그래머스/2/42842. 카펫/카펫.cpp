#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    // 전체 개수 계산
    int sum = brown + yellow;
    
    // 높이는 최소 3부터 시작
    for (int height = 3; ; height++) 
    {
        if (!(sum % height)) // 총합을 높이로 나누었을 때 나머지가 0일 때만
        {
            int weight = sum / height; // 합을 높이로 나누면 가로 길이가 된다.
            
            // 테두리는 갈색이므로 2줄씩 빼고 계산
            // 높이에서 2개를 빼고 가로 길이에서 2개를 빼고 곱한 값이 빨간색 개수와 같다면
            if (((height - 2) * (weight - 2)) == yellow) 
            {
                answer.push_back(weight);
                answer.push_back(height);
                break;
            }
        }
    }
    
    return answer;
}