#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int min_score;
    sort(score.begin(), score.end(), greater<>());
    
    int index = 0;
    for(int i = 0; i < score.size()/m ; i ++)
    {
        min_score = *min_element(score.begin()+index,score.begin()+(index+m));
        answer += min_score * m;
        index+=m;
    }
    
    return answer;
}