#include<iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);

	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done!\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int count=0;
	cout << "Input info\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Fullname: ";

			cin.get(pa[i].fullname, SLEN);
			cin.get();
			cout << "Hobby: ";
			cin.get(pa[i].hobby, SLEN);
			cin.get();
			cout << "Ooplevel: ";
			cin >> pa[i].ooplevel;
			cin.get();
			count++;
		    
	}
	return count;
}

void display1(student st)
{
	cout << "\nBy struct: \n"
		<< st.fullname
		<< " /"
		<< st.hobby
		<< " /"
		<< st.ooplevel
		<< endl;
}

void display2(const student* ps)
{
	cout << "By pointer: \n"
		<< ps->fullname
		<< " /"
		<< ps->hobby
		<< " /"
		<< ps->ooplevel
		<< endl;

}       

void display3(const student pa[], int n)
{
	cout << "\nBy array of the struct: \n";
	for (int i = 0; i < n; i++)
	{
		cout<<pa[i].fullname
			<< " "
			<< pa[i].hobby
			<< " "
			<< pa[i].ooplevel
			<< endl;
	}
}