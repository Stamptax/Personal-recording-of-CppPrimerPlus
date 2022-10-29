#include"Stonewt.h"

int main()
{
	Stonewt arr[6];
	arr[0] = Stonewt(43, 7.5);
	arr[1] = Stonewt(31, 9.8);
	arr[2] = Stonewt(11, 27.3);
	for (int i = 3; i < 6; i++)
	{
		arr[i] = Stonewt(i + 6, i + 3.1);
	}
	Stonewt Max, Min, criterion;
	Max = Stonewt(0, 0.0);
	Min = Stonewt(numeric_limits<int>::max(), 0.0);
	criterion=Stonewt(11, 0.0);

	int count = 0;

	for (int i = 0; i < 6; i++)
	{
		Max = arr[i] > Max ? arr[i] : Max;
		Min = arr[i] < Min ? arr[i] : Min;
	}
	
	for (int i= 0; i < 6; i++)
	{
		if (arr[i] > criterion || arr[i] == criterion)
		{
			count++;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i];
	}

	cout << "Max: " << Max 
		<< "Min: " << Min 
		<< "Count: " << count;

	return 0;
}