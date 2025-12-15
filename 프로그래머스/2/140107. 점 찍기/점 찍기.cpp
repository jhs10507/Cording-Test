#include <iostream>
#include <cmath>

using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
    long long d_sq = (long long)d * d;  // d^2 계산 (오버플로우 방지)
    long long k_sq = (long long)k * k;  // k^2 계산
    
    for (long long a = 0; a * k <= d; ++a) {    // x좌표 (a * k)가 d 이하인 동안 반복
        long long x_sq = a * a * k_sq;  
        long long max_y_sq = d_sq - x_sq;   // (b*k)^2의 최댓값
        if (max_y_sq >= 0) {
            long long b_max = (long long)sqrt(max_y_sq) / k;    // 최대 b 값 계산
            answer += (b_max + 1);  // 0부터 b_max까지, 총 b_max + 1개
        }
    }
    
    return answer;
}