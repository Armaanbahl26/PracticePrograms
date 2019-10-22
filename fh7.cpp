#include<iostream>//for that use get or getline function previous error removed
#include<fstream>
using namespace std;
int main()
{
	fstream o1;
	char ch[300];
	o1.open("file1",ios::in);
	if(!o1)
	{
		cout<<"error";
	}
	cout<<"file already exhisted"<<endl;
	if(!o1.eof())
	{
		o1.get(ch,300);//we need to specify sie of the array compulsory
		cout<<ch;//now it will pick up spaces
	}
	o1.close();
	return 0;
}
