#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int Even = 0;
    int Odd = 0;
    
    for (int i = 0; i < num_list.size(); ++i) 
    {
        if (num_list[i] % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }
    
    answer.push_back(Even);
    answer.push_back(Odd);
    
    return answer;
}