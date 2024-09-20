// S and p.cpp : 


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float p, s;
    std::cout << "enter the remit of the square : ";
    std::cin >> p;
    s = pow(p / 4, 2);
    cout << "\n s= " << s;
    return 0;
}
