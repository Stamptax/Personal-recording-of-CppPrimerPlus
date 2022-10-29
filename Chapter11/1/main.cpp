#include"vect.h"
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;

//Gotta say this is a extremely tedious one, all I have done is duplicating the codes from the book and add some almost instructions

int main()
{
using VECTOR::Vector;
srand(time(0));
ofstream fout;
fout.open("Recording.txt");
double direction;
Vector step;
Vector result(0.0, 0.0);
unsigned long steps = 0;
double target;
double dstep;
cout << "Enter target distance (q to quit): ";
while (cin >> target)
{
    cout << "Enter step length: ";
    if (!(cin >> dstep))
    {
        break;
    }
    fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
    while (result.magval() < target)
    {
        direction = rand() % 360;
        step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            fout <<steps<<": " << result << endl;
    }
    cout << "After " << steps << " steps, the subject has the following location:\n";
    cout << result << endl;
    result.pol_mode();
    cout << " or\n" << result << endl;
    cout << "Average outward distance per step = " << result.magval() / steps << endl;

    fout << "After " << steps << " steps, the subject has the following location:\n";
    fout << result << endl;
    result.pol_mode();
    fout << " or\n" << result << endl;
    fout << "Average outward distance per step = " << result.magval() / steps << endl;

    steps = 0;
    result.reset(0.0, 0.0);
    cout << "Enter target distance (q to quit): ";
        
}
cout << "Bye\n";
cin.clear();
while (cin.get() != '\n')
continue;

return 0;
}



