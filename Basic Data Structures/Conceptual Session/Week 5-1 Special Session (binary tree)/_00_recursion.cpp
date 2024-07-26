// 5 4 3 2 1
#include<bits/stdc++.h>
using namespace std;
void fun(int val){
    if(val == 6) return;
    fun(val+1);
    cout << val << " ";
}
int main()
{
    fun(1);
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout << n << " ";
    fun(n-1);
}
int main()
{
    int n; cin >> n;
    fun(n);
    return 0;
}
*/