#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    
    for (int i = 0; i < priorities.size(); i++) {
        q.push({priorities[i], i});
    }
    
    while(!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        
        bool hasHigherPriority = false;
        
        queue<pair<int, int>> temp = q;
        while(!temp.empty()) {
            if (temp.front().first > current.first) {
                hasHigherPriority = true;
                break;
            }    
            temp.pop();
        }
        
        if (hasHigherPriority) {
            q.push(current);
        } else {
            answer++;
            if (current.second == location) {
                return answer;
            }
        }
    }
    
    return answer;
}