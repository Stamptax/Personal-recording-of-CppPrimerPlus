#include"customer.h"


int main()
{
	double total=0.0;
	stack st;
	char ch;
	Item cstm={"NULL",0.0};
	cout << "Please enter A to add\n"
		<< "P to pop\n"
		<< "Q to quit\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'a':
		case 'A':
			if (st.isfull())
			{
				cout << "\nFULL\n\n";
			}
			else
			{
				cout << "Enter the full name of the customer: ";
				cin.get(cstm.fullname, 35);
				cin.get();
				cout << "Enter the payment of the customer: ";
				cin >> cstm.payment;
				total += cstm.payment;
				st.push(cstm);
			}
			cout << "Total: "<<total<<endl<<endl;
			break;
		case 'p':
		case 'P':
			if (st.ispempty())
			{
				cout << "\nEMPTY\n\n";
			}
			else
			{
				st.pop(cstm);
				total -= cstm.payment;
				cout << "Mister/ Mistress " << cstm.fullname << " has been poped out\n";
				cout << "Total: " << total<<endl<<endl;
			}
			break;

			    
		}
		
		cout << "Please enter A to add\n"
			<< "P to pop\n"
			<< "Q to quit\n";
	}
	cout << "Bye\n";
	return 0;
}