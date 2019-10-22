//reading from a file//here after space characters will not be picked up
#include<iostream>//for that use put function
#include<fstream>
using namespace std;
int main()//main function
{
	fstream o1;
	char ch[1000];
	o1.open("file1",ios::in);//opening an input file
	if(!o1)
	{
		cout<<"error";
	}
	cout<<"file already exhisted"<<endl;
	if(!o1.eof())
	{
		o1>>ch;
		cout<<ch;
	}
	o1.close();
	return 0;
}
