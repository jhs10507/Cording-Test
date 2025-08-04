#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    string answer = "", temp = "";
    vector<string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = 0; i < s.size(); ++i)
    {
        if ('0' <= s[i] && s[i] <= '9') answer += s[i];
        else temp += s[i];
        if (find(number.begin(), number.end(), temp) != number.end())
        {
            answer += to_string(find(number.begin(), number.end(), temp) - number.begin());
            temp = "";
        }
    }
    
    return stoi(answer);
}