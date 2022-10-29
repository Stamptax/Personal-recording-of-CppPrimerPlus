#include"vect.h"
#include<ctime>
#include<cstdlib>
#include<limits>

using namespace std;


int main()
{
    using VECTOR::Vector;
    srand(time(0));
    int N ;
    long int total = 0;
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
  
    cout << "How many times you wanna wandering: ";
    cin >> N;
    int max = 0;
    int min = numeric_limits<int>::max();

    for (int i = 0; i < N; i++)
    {

        cout << "Enter target distance (q to quit): ";
        cin >> target;
        cout << "Enter step length: ";
        cin >> dstep;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;

        }
        max = steps > max ? steps : max;
        min = steps < min ? steps : min;
        total = total + steps;

        steps = 0;
        result.reset(0.0, 0.0);
    }
 
    cout << "Max: " << max << endl
        << "Min: " << min << endl
        << "Mean: " << total / N;

    return 0;
}
