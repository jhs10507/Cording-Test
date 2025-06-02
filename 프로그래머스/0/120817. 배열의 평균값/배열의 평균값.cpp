#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {   
    if (numbers.empty()) return 0.0;
    
    double sum = 0.0;
    for (int x : numbers) { sum += x; }
    
    return sum / numbers.size();
}