#include <string>
#include <vector>
#include <cmath>

using namespace std;

// 소수 판별 함수
bool isPrime(long long num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    // sqrt(num)까지만 확인
    long long sqrtNum = sqrt(num);
    for (long long i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// n을 k진수로 변환
string convertToBase(int n, int k) {
    string result = "";
    while (n > 0) {
        result = to_string(n % k) + result;
        n /= k;
    }
    return result;
}

int solution(int n, int k) {
    // n을 k진수로 변환
    string converted = convertToBase(n, k);
    
    // 0을 기준으로 분리하여 소수 개수 세기
    int count = 0;
    string temp = "";
    
    for (int i = 0; i < converted.length(); i++) {
        if (converted[i] == '0') {
            // 0을 만나면 현재까지 모은 숫자가 소수인지 확인
            if (!temp.empty()) {
                long long num = stoll(temp);
                if (isPrime(num)) {
                    count++;
                }
                temp = "";
            }
        } else {
            // 0이 아니면 숫자를 모음
            temp += converted[i];
        }
    }
    
    // 마지막 남은 숫자 확인
    if (!temp.empty()) {
        long long num = stoll(temp);
        if (isPrime(num)) {
            count++;
        }
    }

    return count;
}