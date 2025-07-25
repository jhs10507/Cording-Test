#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string temp = "";
    
    for (int i = 0; i <=t.length() - p.length(); i++)
    {
        for (int j = 0; j < p.length(); j++)
        {
            temp += t[i + j];   
        }
        if (stoll(temp) <= stoll(p))
        {
            answer++;
        }
        temp = "";
    }
    
    return answer;
}