#include <bits/stdc++.h>
using namespace std;

vector<int> funcArrange(vector<int> inputArr)
{
    vector<int> answer;
    for (int i = 0; i < inputArr.size(); i++)
    {
        if (inputArr[i] % 2 == 0)
        {
            answer.push_back(inputArr[i]);
        }
    }
    for (int i = 0; i < inputArr.size(); i++)
    {
        
            if (inputArr[i] % 2 != 0)
            {
                answer.push_back(inputArr[i]);
            }
        }
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }

        cout<<endl;
        return answer;
    };

    int main()
    {
        vector<int> v =  {73, 4, 63, 23, 65};

        funcArrange(v) ;

        return 0;
    }