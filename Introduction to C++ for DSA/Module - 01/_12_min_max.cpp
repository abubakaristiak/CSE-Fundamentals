#include <iostream>
using namespace std;
#include<algorithm>
int main()
{
    // Manaul process
    // int a, b;
    // cin >> a >> b;
    // if (a < b)
    //     cout << a;
    // else
    //     cout << b;

    // calcute two number:
    // int a,b;
    // cin>> a>>b;
    // int x_1 = min(a,b);
    // int x_2 = max(a,b);
    // cout<< x_1 <<" " << x_2 <<endl;

    // calcute four numbers:
    int c, d, e, f;
    cin>> c>> d >> e>> f;
    int y = min({c,d,e,f});
    int x = max({c,d,e,f});
    cout<< y <<" " << x <<endl;




}