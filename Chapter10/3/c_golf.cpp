#include "c_golf.h"
int main()
{
	c_golf ann, andy;
	ann.showgolf();
	andy = c_golf(andy);
	andy.showgolf();
	srand(time(0));
	andy.handicap(andy, rand());
	andy.showgolf();
	return 0;
}

void c_golf::handicap(c_golf&g, int hc)
{
	hdcp = hc;
};

void c_golf::showgolf()
{
	cout << endl << "FULLNAME: " << fullname << endl << "NO. " << hdcp;
};