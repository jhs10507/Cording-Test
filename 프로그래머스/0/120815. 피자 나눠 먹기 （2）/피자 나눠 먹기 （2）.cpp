#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pizza = 1, slice = 6;
    
    while (slice % n != 0) {
        pizza++;
        slice += 6;
    }
    answer = pizza;
    
    return answer;
}