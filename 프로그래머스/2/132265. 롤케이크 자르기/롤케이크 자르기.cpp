#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0, cake;
    
    unordered_map <int, int> base, cmp; // base: 원본 케이크, cmp: 잘린 상태
    
    for (auto c : topping) base[c]++;
    
    cake = base.size(); // 케이크에 올라간 토핑의 총 개수
    
    for (auto c : topping) { 
        cmp[c]++; base[c]--; // 한 토핑씩 자르기
        if (base[c] == 0) cake--; // 해당 토핑의 개수가 떨어지면 안 자른 케이크 토핑 수 --
        if (cake == cmp.size()) answer++; // 자르지 않은 케이크 토핑 수 == 자른 케이크 토핑 수
    }
    return answer;
}