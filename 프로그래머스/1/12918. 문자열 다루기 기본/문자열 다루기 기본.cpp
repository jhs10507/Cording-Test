#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if (s.length() != 4 && s.length() != 6) return false;
    
    for (char c : s)
    {
        if (!isdigit(c))
            answer = false; // 숫자가 아닌 문자가 있으면 false
    }
    
    return answer;
}