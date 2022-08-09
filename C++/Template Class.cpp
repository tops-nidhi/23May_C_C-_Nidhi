#include<iostream>
using namespace std;
template <typename T>
class Data
{
	public:
		T add(T a,T b)
		{
			cout<<"No 1:"<<a<<endl;
			cout<<"No 2:"<<b<<endl;
		}
};
int main()
{
	Data <int> d1;
	d1.add(23,67);
	Data <char> d2;
	d2.add('A','B');
}

