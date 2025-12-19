#include <numeric>

using namespace std;

long long solution(int w,int h) {
    // 전체 사각형 개수 계산 (오버플로우 방지를 위한 long long 변환)
    long long total_squares = (long long)w * h;
    
    // 최대공약수 구하기
    long long g = gcd(w, h);
    
    // 공식 적용 : 전체 - (가로 + 세로 - 최대공약수)
    // 괄호 안의 계산도 안전하게 long long으로 처리
    return total_squares - ((long long)w + h - g);
}