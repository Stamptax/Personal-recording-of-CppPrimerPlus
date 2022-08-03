#include<iostream>
using namespace std;
int main()
{
	double donation[10];
	double sum=0;
	double ave;
	int i;
	int count=0;
	cout << "Plz enter up to ten donations, any non digit to stop: \n";
	for(i=0;i<10;i++)
	{
        cin >> donation[i];
		if (cin.fail())
		{

			cout << "NOT A DIGIT"<<endl;
			break;
		}
		sum= sum + donation[i];	
	}
	ave = sum / i;
	for (int x = 0; x < 10; x++)
	{
		if (donation[x] > ave)
		{
			count++;
		}
	}
	cout << "The ave: " << ave<<endl;
	cout << "There are " << count << " value bigger than the ave";
	return 0;

}