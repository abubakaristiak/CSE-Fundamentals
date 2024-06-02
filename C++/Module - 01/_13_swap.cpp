// swap with manual process
// #include <iostream>
// using namespace std;
// int main()
// {
//    int a,b;
//    cin >> a >> b;

//    int temp = a;
//    a = b;
//    b = temp;

//    cout << a <<" " <<b <<endl;
// }


// swap with function;
// #include <iostream>
// using namespace std;
// void my_swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//    int a,b;
//    cin >> a >> b;
//     my_swap(&a,&b);
//    cout << a <<" " <<b <<endl;
// } 

// swap with built in function
#include <iostream>
#include<utility>
using namespace std;

int main()
{
   int a,b;
   cin >> a >> b;
    swap(a,b);
   cout << a <<" " <<b <<endl;
} 