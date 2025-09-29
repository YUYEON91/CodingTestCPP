using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    for(int c = 1; c <= count; c++)
    {
        answer += price * c;
    }
    if(answer > money)
    {
        answer = answer - money;
    }
    else if(answer <= money)
    {
        answer = 0;
    }
    return answer;
}