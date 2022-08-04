#include <iostream>
using namespace std;
int main()
{
 int s;
 int m;
 int h;
 int d;
 const int s_per_m=60;
 const int m_per_h=60;
 const int h_per_d=24;
 cout<<" Enter the number of seconds ";
 cin>>s;

  cout<<"The number of seconds is "<<s/86400<<" days "<<s%86400/3600<<" hours "<<s%3600/60<<" minutes "<<s%60<<" seconds";
	
	
	
	return 0;
	} 
