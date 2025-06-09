#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long x = n;
    int cnt[10] = {0};
    
    if (n == 0) {
        cnt[0] = 1;
    }
    
    while (x > 0) {
        cnt[x % 10]++;
        x /= 10;
    }
    
    long long answer = 0;
    
    for (int d = 9; d >= 0; --d) {
        while (cnt[d]-- > 0) {
            answer = answer * 10 + d;
        }    
    }
    
    return answer;
}