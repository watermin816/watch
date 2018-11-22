#include <iostream>
#include <string>

using namespace std;

class Watch
{
	public:
		int hour;
		int minute;
		int second;
		Watch(int h, int m, int s);
		void getTime();
};

Watch::Watch(int h, int m, int s){hour=h; minute=m; second=s;};

void Watch::getTime()
{
	cout << hour << endl;
	cout << minute<< endl;
	cout << second<< endl;
}

int main()
{
	class Watch *ABC = new Watch(1,30,30);
	ABC->getTime();
	return 0;
}


