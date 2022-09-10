#include<iostream>
using namespace std;
template <class T>
T maxn(T arr[],int n);
template <> char* maxn(char*arr[], int n);

int main()
{
	int arr1[6]{1,9,8,9,6,4};
	double arr2[4]{1.9, 8.9, 6.0,4.0};
	const char*str[5]{"sumimasen ","watashi","ha","shinajin","desu" };
	cout << maxn(arr1, 6);
	cout << endl << maxn(arr2, 4)<<endl;
	const char*pt =maxn(str, 5);
	cout << &pt;
}

template <class T>
T maxn(T arr[], int n)
{
	T max=0;
	for (int i = 0; i < n; i++)
	{
		max = max < arr[i] ? arr[i] : max;
	}
	
	return max;
}

template <> char* maxn(char* arr[], int n)
{
	int c=0;
	int max=0;
	for (int i = 0; i < n; i++)
	{
		if (max < strlen(arr[i]))
		{
			max = strlen(arr[i]);
			c = i;
		}
		break;
	}
	char* temp = arr[c];
	return temp;
	
}