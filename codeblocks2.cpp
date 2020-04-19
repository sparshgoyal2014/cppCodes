#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    //cout << " write down how many no. of queries you want to enter..."
    cin >> n;
    int notest2[n];
    string s1[n];
    int length1[n];
    for (int i = 0; i < n; i++)
    {

        cin >> s1[i];
        //for(int j=0;j<s[i].length();j++){
        length1[i] = s1[i].length();
        //char querie[length1[i]+1];
        // strcpy(querie, s1[i].c_str());
        //}
    }

    //cout << "enter how many test cases you want to run ...." << endl;

    cin >> m;
    int notest3[m];
    string s2[m];
    int length2[m];

    for (int i = 0; i < m; i++)
    {
        cin >> s2[i];
        length2[i] = s2[i].length();
        //   char test[length2[i]+1];
        // strcopy(test,s2[i].c_str());
    }

    for (int i = 0; i < 8; i++)
    {
        int notest = 0;
        char querie[length1[i] + 1];
        strcpy(querie, s1[i].c_str());
        char test[length2[i] + 1];
        strcpy(test, s2[i].c_str());
        //}
        for(int j=0;j>=0; j++)
        {
            if (querie[j] == test[j])
            {
                notest++;
                if (notest == length1[i] || notest == length2[i])
                {
                    notest++;
                    notest2[i] = notest;
                    break;
                }
            }
            notest2[i] = notest;
            if(querie[j]!=test[j])
            {
                break;
            }
            
            
        }

        for (int k = 0; k < m; k++)
        {
            notest3[k] = notest2[0] + notest2[1] + notest2[2] + notest2[3] + notest2[4] + notest2[5] + notest2[6] + notest2[7];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << notest3[i] << endl;
    }
    return 0;
}

// Write your code here
