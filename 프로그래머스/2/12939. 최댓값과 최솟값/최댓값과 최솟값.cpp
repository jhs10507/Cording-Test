#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream ss(s);
    string segment;
    vector<int> numbers;
    
    while (ss >> segment) {
        numbers.push_back(stoi(segment));
    }

    int max_value = *max_element(numbers.begin(), numbers.end());
    int min_value = *min_element(numbers.begin(), numbers.end());
    
    answer = to_string(min_value) + " " + to_string(max_value);
    
    return answer;
}