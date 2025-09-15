#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) 
{
    string answer = "";
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    
    if(it != seoul.end())
    {
    answer = "김서방은 " + to_string(it - seoul.begin()) + "에 있다";
    }
    return answer;
}