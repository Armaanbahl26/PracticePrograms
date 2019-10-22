#include<iostream>//creation of a file
#include<fstream>
using namespace std;
int main()
{
	fstream o1;
	char filename[81];
	cout<<"enter name of file"<<endl;
	cin.getline(filename,81);//getline function used to get name of file
	o1.open(filename,ios::out);//opening file in output mode
	cout<<"file"<<filename<<"is created";
	return 0;
}
