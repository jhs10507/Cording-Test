#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int yangkkochi = 12000;
    int drink = 2000;
    if (n >= 10)
        answer = (yangkkochi * n) + (drink * k) - ((n / 10) * 2000);
    else
         answer = (yangkkochi * n) + (drink * k);
    return answer;
}