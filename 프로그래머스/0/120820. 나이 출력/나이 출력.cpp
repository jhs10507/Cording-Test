#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int currentYear = 2022;
    int answer = currentYear - age + 1;
    return answer;
}