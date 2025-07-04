#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int pizza = 1;
    
    while (pizza * slice < n)
    {
        pizza++;
    }
    answer = pizza;
    
    return answer;
}