#include <iostream>
using namespace std;
int main()
{
 const int factor{100};
 cout<<"Enter your height in centimetre:_____\b\b\b\b\b";
 int h;
 cin>>h;
 cout<<"Your height is: "<<h/factor<<" metre and "<<h%factor<<" centimetres";
 return 0;
 }
