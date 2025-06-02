#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    if (arr.empty()) return 0.0;
    
    
    double sum = 0.0;
    for (size_t i = 0; i < arr.size(); ++i) 
    { 
        sum += arr[i]; 
    }
    
    double answer = (double)sum / arr.size();
    return answer;
}