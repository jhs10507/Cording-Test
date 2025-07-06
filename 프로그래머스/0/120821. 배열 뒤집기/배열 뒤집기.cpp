#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for (int j = num_list.size(); j >= 0; --j)
    { 
        answer.push_back(num_list[j]);
    }
    answer.erase(answer.begin());
    
    return answer;
}