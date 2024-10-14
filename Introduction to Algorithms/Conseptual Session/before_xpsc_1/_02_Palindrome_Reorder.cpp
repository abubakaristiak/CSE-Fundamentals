//https://cses.fi/problemset/task/1755
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    map<char, int> cnt;
    int n=s.size();
    for(int i=0; i<n; i++){
        cnt[s[i]]++;
    }
    int Oddcnt=0;
    for(auto [key,occ] : cnt){
        if(occ%2 != 0){
            Oddcnt++;
        }
    }
    if(Oddcnt>1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }



    string first, middle, last;
    for(auto [key,occ] : cnt){
        if(occ%2 != 0){
            for(int i=0; i<occ; i++){
                middle.push_back(key);
            }
        }
        else{
            for(int i=1; i<=(occ/2); i++){
                first.push_back(key);
                last.push_back(key);
            }
        }
    }
    reverse(last.begin(), last.end());
    string ans=first+middle+last;
    cout << ans << endl;

    return 0;
}