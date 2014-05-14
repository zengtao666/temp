#include <iostream>
#include <vector>
#include <algorithm>
//#include "head.h"

using namespace std;

//int g_i = 0;
class coperator_base
{
public:
	int a,b;
	virtual int get_result() = 0;
};

class c_add : public coperator_base
{
public: 
	int get_result()
	{
		return a+b;
	}
};

int main()
{
	c_add x;
	x.a = 3;
	x.b = 4;
	cout<<x.get_result()<<endl;
	//cout<<g_i<<endl;
// 	try
// 	{
// 		vector<int> v1(5),v2(4);
// 		//std::copy(v1.begin(),v2.begin(),v2.begin());
// 		std::swap(v1,v2);
// 	}
// 	catch(std::exception e)
// 	{
// 		cout<<e.what()<<endl;
// 	}
	return 0;
}