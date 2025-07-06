#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int temp1 = money / 5500;
    int temp2 = money % 5500;
    
    answer.push_back(temp1);
    answer.push_back(temp2);
    
    return answer;
}