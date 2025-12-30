#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> cards) {
    vector<int> group_sizes;
    vector<bool> visited(cards.size(), false);
    
    for (int i = 0; i < cards.size(); i++) {
        if (visited[i]) continue;
        
        int count = 0;
        int current = i;
        
        // 연결된 상자들을 하나의 그룹으로 묶음
        while (!visited[current]) {
            visited[current] = true;
            current = cards[current] - 1; // 상자 번호는 1부터 시작하므로 -1
            count++;
        }
        group_sizes.push_back(count);
    }
    
    // 그룹이 하나뿐이면 점수는 0
    if (group_sizes.size() < 2) return 0;
    
    // 그룹 크기 순 정렬 후 가장 큰 두 값의 곱 반환
    sort(group_sizes.begin(), group_sizes.end(), greater<int>());
    return group_sizes[0] * group_sizes[1];
}