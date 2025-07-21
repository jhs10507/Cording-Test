#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    
    for (char c : s)
    {
        if (c == ' ')
        {
            answer += c;
            index = 0;
        } else {
            answer += (index % 2 == 0) ? toupper(c) : tolower(c);
            index++;
        }
    }
    
    return answer;
}