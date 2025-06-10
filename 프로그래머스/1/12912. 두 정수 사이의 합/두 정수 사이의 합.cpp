#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long start, end, count, answer;
    
    start = (a < b ? a : b);
    end = (a < b ? b : a);
    count = end - start + 1;
    
    return answer = (start + end) * count / 2; 
}