#include"mytime0.h"

int main()
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time Temp;

	cout << "Aida and Tosca:\n";
	cout << aida << "; " << tosca << endl;
	Temp = aida + tosca;
	cout << "Aida+Tosca: " << Temp << endl;
	Temp = aida * 1.17;
	cout << "Aida * 1.17: " << Temp << endl;
	cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
	
	
	
	return 0;
}