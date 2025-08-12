#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> char_index;
    
    for (int i = 0; i < s.length(); ++i)
    {
        char c = s[i];
        if (char_index.count(c))
        {
            answer.push_back(i - char_index[c]);
            char_index[c] = i;
        }
        else
        {
            answer.push_back(-1);
            char_index[c] = i;
        }
    }
    
    return answer;
}