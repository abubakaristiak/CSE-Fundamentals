//https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-05/challenges
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test; cin>> test;
    cin.ignore();
    while (test--)
    {
        map<string, int> mp;
        string sentence; 
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);

        string max_string;
        int max_count = INT_MIN;
        while (ss >> word)
        {
            mp[word]++;

            if(max_count < mp[word]){
                max_count = mp[word];
                max_string = word;
            }
        }
        cout << max_string << " "<<max_count << endl;
    }
    
    
    return 0;
}