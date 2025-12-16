#include <string>
#include <vector>

using namespace std;

int solution(int storey) {
    int answer = 0;
    
    while(storey > 0) {
        int n = storey % 10;    // 1의 자리의 수
        storey /= 10;           // 자리수 오른쪽으로 1칸씩 이동
        
        // 1의 자리수가 5 미만일 때 n만큼 버튼 누르기
        if (n < 5) {
            answer += n;
        }
        
        // 1의 자리수가 5 초과일 때 한 자리 수 위 버튼 1번 10-n만큼 버튼 누르기
        else if (n > 5) {
            ++storey;
            answer += 10 - n;
        }
        
        // 1의 자리수가 5일 때, 다음 자리수가 5 이상이면 2번, 미만이면 1번
        else {
            int test = storey % 10;
            if (test >= 5) {
                ++storey;
            }
            answer += n;
        }
    }
    
    return answer;
}