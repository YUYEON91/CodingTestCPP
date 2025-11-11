#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) 
{
    vector<string> dow = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int day = 0;
    
    for (int i = 0; i < a - 1; ++i) 
    {
        day += days[i];
    }
    
    day += b - 1;
    
    return dow[day % 7];
}
