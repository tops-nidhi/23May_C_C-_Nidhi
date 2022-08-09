#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b)
{
	cout<<"Addtion is:"<<a+b;
}
int main()
{
	add<int>(50,60);
	cout<<endl;
	add<float>(5.7,6.8);
	
}
