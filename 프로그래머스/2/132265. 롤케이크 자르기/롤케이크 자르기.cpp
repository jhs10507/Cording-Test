#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0, cake;
    unordered_map <int, int> base, cmp; // 본래 케이크와 잘린 상태 변수
    for (auto c : topping) base[c]++;
    cake = base.size(); // 케이크 토핑의 수
    for (auto c : topping)
    {
        cmp[c]++; base[c]--;    // 한 토핑씩 자르기
        if (base[c] == 0) cake--;   // 토핑 개수가 떨어지면 자르지 않은 케이크 토핑 수 --
        if (cake == cmp.size()) answer++; // 안 자른 케이크 토핑 수와 자른 케이크 토핑 수가 같으면
    }
    return answer;
}