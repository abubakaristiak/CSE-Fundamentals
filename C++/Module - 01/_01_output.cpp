#include <iostream>
int main()
{

    // print string
    std::cout << "hello world!" << "\n";
    // std::cout << "\n";

    int a = 10;
    long long int b = 100000000000;
    float c = 1.5;
    double d = 1.33333343;
    char cc = 'A';

    // print integer
    // std ::cout << a;

    // print string + integer
    // std::cout << "\nmy favourite number is " << a;

    // print string + number + string;
    // std ::cout << "\nmy " << a << " favourite number";

    // print two number with space
    // std :: cout << a << " " <<b;

    // print two number with new line
    // std ::cout << a << "\n"
    //            << b << "\n";

    // print two number with endl
    std ::cout << a << std::endl
               << b << std::endl;


    return 0;
}