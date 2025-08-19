#include <string>
#include <vector>
#include <chrono>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    int days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int total_days = 0;
    
    for (int i = 1; i < a; ++i)
    {
        total_days += days[i];
    }
    total_days += b;
    
    return answer = week[total_days % 7];
}