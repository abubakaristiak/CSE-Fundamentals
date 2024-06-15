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



// Pending
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


// int n;
// cin>>n;
// vector<int>a(n);
// for (int i = 0; i < n; i++)
// {
// cin>>a[i];
// }
// vector<int>b(n);
// b[0]=a[0];
// for (int i = 1; i < n; i++)
// {
// b[i]=a[i]+b[i-1];
// }
// int l=0,r=n-1,m=(l+r)/2;
// if (b[m-1]==(b[r]-b[m]))
// {
// cout<<m<<endl;
// }else{
// cout<<"NOt";
// }


// Prefix sum বের করবেন।
// উপরে ইনপুটের prefix sum হবে এইটি
// -7 -6 -1 1 -3 0 0
// and
// total sum = 0
// আপনি যখন
// i=0 index এ আছেন তখন, সেইটি,
// left side এর sum = 0, i==0 হলে left side এর sum =0 ধরবো।
// right side এর sum = total_sum - prefixsum[i] = 0 - (-7) = 7
// তাহলে 0 index এ left side and right side same না।
// ==========
// i=1 index এ আছেন তখন, সেইটি,
// left side এর sum = prefixsum[i-1] =prefixsum[0] = -7
// right side এর sum = total_sum - prefixsum[1] = 0 - (-6) = 6
// তাহলে 1 index এ left side and right side same না।
// ==========
// i=2 index এ আছেন তখন, সেইটি,
// left side এর sum = prefixsum[i-1] =prefixsum[1] = -6
// right side এর sum = total_sum - prefixsum[2] = 0 - (-1) = 1
// তাহলে 2 index এ left side and right side same না।
// ==========
// i=3 index এ আছেন তখন, সেইটি,
// left side এর sum = prefixsum[i-1] =prefixsum[2] = -1
// right side এর sum = total_sum - prefixsum[3] = 0 - (1) = -1
// তাহলে 3 index এ left side and right side same, তাই আউটপুট 3 হবে।
