#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int maxNum = 0;
    
    unordered_map<int, int> um;
    
    for (const auto num : array) {
        um[num]++;
    }
    
    for (const auto& num : um) {
        if (num.second > maxNum) {
            maxNum = num.second;
            answer = num.first;
        } else if (num.second == maxNum) {
            answer = -1;
        }
    }
    
    return answer;
}