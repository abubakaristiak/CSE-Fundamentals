// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int mid = n / 2;
//     int left_sum = 0;
//     int right_sum = 0;

//     for (int j = 0; j < mid; j++)
//     {
//         left_sum += v[j];
//     }
//     for (int j = mid + 1; j < n; j++)
//     {
//         right_sum += v[j];
//     }
//     if(left_sum==right_sum){
//         cout << mid << endl;
//     }
//     return 0;
// }




#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum -= arr[i]; 

        if (left_sum == total_sum) {
            cout << i << endl;
            return 0;
        }

        left_sum += arr[i];
    }

    // If no equilibrium index found
    cout << -1 << endl;
    return 0;
}
