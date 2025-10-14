#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm (int a, int b) {
    if (a == 0 || b == 0) return 0;
    return a * b / gcd(a, b);
}

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    
    answer = lcm(arr[0], arr[1]);
    
    for (int i = 1; i < arr_len - 1; ++i) 
    {
        answer = lcm(answer, arr[i + 1]);
    }
    
    return answer;
}