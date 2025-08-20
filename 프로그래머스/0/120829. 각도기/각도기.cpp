#include <string>
#include <vector>

using namespace std;

int solution(int angle) 
{
    int answer;
    if(angle > 0)
    {
        if(angle <= 180)
        {
            if(angle < 90)
            {
                answer =1;
            }
            if(angle == 90)
            {
                answer = 2;
            }
            if(angle > 90)
            {
                if(angle ==180)
                {
                    answer =4;
                }
                else
                {
                    answer =3;
                }
            }
        }
    }
    return answer;
}
