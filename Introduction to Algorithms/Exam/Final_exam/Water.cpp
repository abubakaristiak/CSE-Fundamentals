#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        vector<ll> v;
        priority_queue<ll> pq;
        int n; cin>>n;
        for(int i=0; i<n; i++){
            ll val; cin>>val;
            v.push_back(val);
            pq.push(val);
        }
        int f_mx,f_idx,s_mx,s_idx;
        f_mx=pq.top();
        pq.pop();
        s_mx=pq.top();

        bool f_pre=false;
        bool s_pre=false;

        for(int i=0; i<n; i++){
            if(f_mx==v[i]){
                f_idx=i;
                if(!s_pre) f_pre=true;
            }
            if(s_mx==v[i]){
                s_idx=i;
                if(!f_pre) s_pre=true;
            }
        }
        if(f_pre && !s_pre) cout<<f_idx <<" "<<s_idx<<endl;
        else cout << s_idx <<" "<<f_idx<<endl;
    }
    
    return 0;
}




