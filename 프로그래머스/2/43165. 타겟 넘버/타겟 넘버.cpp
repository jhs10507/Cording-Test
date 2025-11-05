#include <vector>
using namespace std;

int dfs(vector<int>& numbers, int target, int index, int sum) {
    if (index == numbers.size()) {      // 기저 조건 : 모든 숫자를 다 사용했을 때
        return sum == target ? 1 : 0;       // 목표와 같으면 1, 아니면 0
    }
    // 재귀 호출 - 현재 숫자를 더하는 경우와 빼는 경우 반환
    return dfs(numbers, target, index + 1, sum + numbers[index])    
         + dfs(numbers, target, index + 1, sum - numbers[index]);
}

int solution(vector<int> numbers, int target) {
    return dfs(numbers, target, 0, 0);
}