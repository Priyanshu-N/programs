#include <iostream>
using namespace std;

class increment{
	public:
		int x, y;
		increment(int a){
			x=a;
			cout<<"x:"<<x<<endl;
		}
//		overload+operator

		void operator+()
		{
			x=++x;
			cout<<endl<<"after performing unary operator overloading"<<endl;
			cout<<"x: "<<x<<endl;
		}
};

int main()
{
	increment d1(8);
	+d1;
	return 0;
}

