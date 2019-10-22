#include<iostream>//here file is not created 
#include<fstream>
using namespace std;
int main()
{
	fstream o1;
	o1.open("file2",ios::in|ios::out);
	cout<<"file 2 is created"<<endl;
	if(!o1)
	{
		cout<<"error";
	}
	return 0;
}
