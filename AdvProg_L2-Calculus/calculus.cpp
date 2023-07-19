#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x) 
{
    double cos = 1 - 1.0/2*pow(x, 2) + 1.0/24*pow(x, 4) - 1.0/720*pow(x, 6);
    //     cos = 1 - 1/2!.x^2       + 1/4!.x^4       - 1/6!.x^6
    return cos;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
    double sin = x - 1.0/6*pow(x, 3) + 1.0/120*pow(x, 5) - 1.0/5040*pow(x, 7) + 1.0/362880*pow(x, 9);
    //     sin = x - 1/3!.x^3         +1/5!.x^5          - 1/7!.x^7           + 1/9!.x^9
    return sin;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }

    
    return sqrt(x);
}