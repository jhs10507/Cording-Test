#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int i = 0;
    
    // 1 = 빵, 2 = 야채, 3 = 고기
    int idx[1000000];
    
    for (int n : ingredient)
    {
        idx[i] = n;
        if (i >= 3)
            if (idx[i-3] == 1 && idx[i - 2] == 2 && idx[i - 1] == 3 && idx[i] == 1)
            {
                ++answer;
                i -= 4;
            }
        ++i;
    }
    
    return answer;
}