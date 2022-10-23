#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Person
{
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person()
	{
		lname = "";
		fname[0] = '\0';
	}
	Person(const string& ln, const char* fn = "Heyyou")
	{
			lname = ln;
			strcpy_s(fname, fn);
	}
	void Show() const;
	void Formalshow() const;	
};


int main()
{
	Person p1, p2, p3;
	
	p1.Show();              //p1 uses constructor without parametre implicitly then uses methods
	p1.Formalshow();

	p2 = Person("Symthecraft");          //p2 uses constructors with 1 parametre  exolicitly 
	p2.Show();
	p2.Formalshow();

	p3 = Person("Dimwiddy", "Sam");            //p3 uses constructor with 2 parametres
	p3.Show();
	p3.Formalshow();
	
	

	return 0;
}


void Person::Show() const
{
	cout << endl<<fname << " " << lname << endl;
}

void Person::Formalshow() const
{
	cout << lname << " " << fname << endl;
}

