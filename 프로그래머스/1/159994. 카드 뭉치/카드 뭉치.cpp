#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) 
{
    int card1Length = cards1.size(), card1Location = 0, card2Length = cards2.size(), 
    card2Location = 0;
    
    for(string item : goal)
    {
        if(card1Location < card1Length && item == cards1[card1Location])
        {
            card1Location++;
        }
        else if(card2Location < card2Length && item == cards2[card2Location])
        {
            card2Location++;
        }
        else
        {
            return "No";
        }
    }
    
    return "Yes";
}