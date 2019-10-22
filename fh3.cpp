#include<iostream>//closing of a file
#include<fstream>
using namespace std;
int main()
{
	fstream o1;
	o1.open("file3",ios::out);
	if(!o1)
	{
		cout<<"error";
	}
	cout<<"file created sucessfully"<<endl;
	cout<<"closing of a file";
	o1.close();
	return 0;
}
