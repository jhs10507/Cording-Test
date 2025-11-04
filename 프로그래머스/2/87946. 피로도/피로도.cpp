#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    int n = dungeons.size();
    
    vector<int> order(n);
    for (int i = 0; i < n; i++) {
        order[i] = i;
    }
    
    do {
        int hp = k;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            int idx = order[i];
            if (hp >= dungeons[idx][0]) {
                hp -= dungeons[idx][1];
                count++;
            }
        }
        
        answer = max(answer, count);
    } while(next_permutation(order.begin(), order.end()));
    
    return answer;
}