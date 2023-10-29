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

		friend void operator+(increment &n);
};

void operator+(increment &n)
{
	n.x=++n.x;
	cout<<endl<<"after performin unary operator overloading"<<endl;
	cout<<"x: "<<n.x<<endl;
}

int main()
{
	increment d1(8);
	+d1;
	return 0;
}

