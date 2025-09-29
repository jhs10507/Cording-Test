#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    int length;
    
    while (s.size() != 1) 
    {
        length = 0;
        
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0') 
                answer[1]++;
            else length++;
        }
        
        s = "";
        while(length)
        {
            s += to_string(length % 2);
            length /= 2;
        }
        reverse(s.begin(), s.end());
        answer[0]++;
    }
    
    return answer;
}