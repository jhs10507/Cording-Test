#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    
    long long answer = 0;
    double root = std::sqrt(n);
    long long x = static_cast<long long>(root);
    
    if(x * x == n)
        answer = (x + 1) * (x + 1);
    else
        answer = -1;
    
    
    return answer;
}