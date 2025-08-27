#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    // 자연수 N 각 자리수의 합
    while(n !=0)
    {
        answer = answer + n%10;
        n = n/10;
    }
    
    return answer;
}