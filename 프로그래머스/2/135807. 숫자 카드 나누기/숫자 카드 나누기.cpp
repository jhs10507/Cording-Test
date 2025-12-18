#include <numeric>  // gcd 사용
#include <vector>
#include <algorithm>

using namespace std;

// 배열 전체의 최대공약수를 구하는 함수
int getArrayGCD(vector<int>& arr) {
    int res = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        res = gcd(res, arr[i]);
        if (res == 1) break;    // GCD가 1이면 계산의 의미 없음
    }
    return res;
}

// 상대방 배열의 모든 원소가 해당 숫자로 나누어지지 않는지 확인
bool isNotDivisible(int gcdVal, vector<int>& targetArr) {
    for (int num : targetArr) {
        if (num % gcdVal == 0) return false;
    }
    return true;
}

int solution(vector<int> arrayA, vector<int> arrayB) {
    int answer = 0;
    
    int gcdA = getArrayGCD(arrayA);
    int gcdB = getArrayGCD(arrayB);
    
    // 조건 1
    if (isNotDivisible(gcdA, arrayB)) {
        answer = max(answer, gcdA);
    }
    
    // 조건 2
    if (isNotDivisible(gcdB, arrayA)) {
        answer = max(answer, gcdB);
    }
    
    return answer;
}