#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int temp = x;
    int sum = 0;
    bool answer;
    
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    if (sum != 0 && x % sum == 0)
    {
        answer = true;
    }
    else {
        answer = false;
    }
    
    return answer;
}