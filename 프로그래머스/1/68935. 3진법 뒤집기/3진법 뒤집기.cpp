#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ternary;
    
    while(n > 0) {
        ternary.push_back(n % 3);
        n /= 3;
    }
    reverse(ternary.begin(), ternary.end());
    
    int power = 1;
    for (int digit : ternary) {
        answer += digit * power;
        power *= 3;
    }
    
    return answer;
}