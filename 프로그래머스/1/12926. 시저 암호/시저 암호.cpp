#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            answer += ' ';
            continue;
        }
        
        char temp = s[i] + n;
        
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            while (!(temp >= 'a' && temp <= 'z'))
            {
                temp -= 26;   
            }
        }
        else 
        {
            while (!(temp >= 'A' && temp <= 'Z'))
            {
                temp -= 26;   
            }
        }
        
        answer += temp;
    }
    
    return answer;
}