#include <iostream>
#include <ctime>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    int total = 0;
    int circle = 0;
    int n;

    cout << "Choose a number of points to use: ";
    cin >> n;

    // seed random generator
    srand(static_cast <unsigned> (time(0)));

    // generate n random points on a square bounded by x axis, y axis, x=1 and y=1
    for (; total < n; total++) {
        // random x and y between 0 and 1
        float x = float(rand()) / float(RAND_MAX);
        float y = float(rand()) / float(RAND_MAX);

        // check if point is inside quarter circle centred at origin, radius 1
        if (pow(x, 2) + pow(y, 2) < 1) {
            circle++;
        }
    }

    // estimate pi
    float pi = 4 * float(circle) / float(total);
    float error = pi - M_PI;
    cout << "pi is approximately " << pi << endl
        << "the error is " << error;


    return 0;
}
