#include"Move.h"

int main()
{
	Move m1, m2, m3;
	m1 = Move(1.4, 4.2);
	m2 = Move(3.2, 1.1);
	m3 = m1.add(m2);
	m1.showmove();
	m2.showmove();
	m3.showmove();
	m1.reset(0.0, 0.0);
	m1.showmove();
	
	return 0;
}