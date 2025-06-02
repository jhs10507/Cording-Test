#include <iostream>

using namespace std;
int solution(int n)
{
    int sum = 0;
    
    for (; n > 0; n = n / 10) {
        int last = n % 10;
        sum += last;
    }

    return sum;
}