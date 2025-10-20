#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    string answer = "";
    vector<string> digitWords = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    vector<bool> convertFlags(10, true);
    convertFlags[0] = true;
    convertFlags[1] = true;
    convertFlags[2] = true;
    convertFlags[3] = true;
    convertFlags[4] = true;
    convertFlags[5] = true;
    convertFlags[6] = true;
    convertFlags[7] = true;
    convertFlags[8] = true;
    convertFlags[9] = true;

    string result;
    for(char ch : s)
    {
        int digit = ch - '0';
        if(convertFlags[digit])
        {
            result += digitWords[digit];
        }
        else
        {
            result += ch;
        }
    }
    return result;
    
    for (const string& input : s) 
    {
        cout << input << " → \"" << solution(s) << "\"" << endl;
    }


}