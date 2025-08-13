#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i = 1; i < food.size(); ++i)
    {
        int count = food[i] / 2;
        answer += string(count, i + '0');
    }
    
    string reverse_answer = answer;
    reverse(reverse_answer.begin(), reverse_answer.end());
    
    return answer + "0" + reverse_answer;
}