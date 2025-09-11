#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string apb = "";
    
    for (char i = 'a'; i <= 'z'; i++)
        apb += i;
    for (char sk : skip)
        apb.erase(apb.find(sk), 1);
    for (int i = 0; i < s.size(); i++)
        answer += apb[(apb.find(s[i]) + index) % apb.size()];
    
    return answer;
}