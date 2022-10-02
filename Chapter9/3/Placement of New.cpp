#include<iostream>
#include<new>
using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	chaff s1, s2;
	s1 =                                                        //Initialisation...
	{
		"test1",
	1
	};
	s2 = {
		"test2",
	2
	};
	
	chaff arr[2]={s1,s2};         //Put them into an array
    chaff* pc = arr;                  
	char*buffer=new char[512];          //Create a space for buffer, I don't know why people use char and 512 here, I just followed anyway
	 pc= new (buffer) chaff[2];         //allocate space for that array in buffer space
	
	 for (int i = 0; i < 2; i++)
	 {
		 cout << "Please enter dross:\n";
		 cin.get(pc[i].dross, 20);                   
		 cin.get();            
		 cout << "Please enter slag:\n";
		 cin >> pc[i].slag;
		 cin.get();
	 }

	 for (int i = 0; i < 2; i++)
	 {
		 cout << endl << "Dross: " << pc[i].dross << endl << "Slag: " << pc[i].slag;
	 }




	return 0;
}