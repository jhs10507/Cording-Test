#include <vector>
#include <string>
#include <numeric>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    answer = 45 - accumulate(numbers.begin(), numbers.end(), 0);
    return answer;
}