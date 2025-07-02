#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pizza = 1;
    int slice = 7;
    
    if (n % slice != 0)
        answer = (n / slice) + 1;
    else
        answer = n / slice;
    
    return answer;
}