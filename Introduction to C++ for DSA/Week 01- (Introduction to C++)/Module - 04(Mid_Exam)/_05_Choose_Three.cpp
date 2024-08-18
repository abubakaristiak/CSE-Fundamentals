//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-05/challenges
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, sum;
        cin >> n >> sum;
        int ar[n];
        for (int i = 0; i < n; i++){
            cin >> ar[i];
        }
        int flag = 0;
        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                for (int k = j + 1; k < n; k++){
                    if (ar[i] + ar[j] + ar[k] == sum){
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 1){
            cout << "YES" << endl;
            }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}