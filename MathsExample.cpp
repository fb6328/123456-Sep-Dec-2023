#include < iostream>
#include < cmath>
using namespace std;
double circle(double r)
{
    double area;
    const double pi = 3.142;
    area = pi * pow(r, 2); // use pow to replace r*r
    return area;
}
int main()
{
    cout << "Area of circle: " << circle(7);
    return 0;
}
