#include<iostream>//library for input file stream
#include<fstream>//library for output file stream and input file stream
using namespace std;
int main()//entering in the main function
{
	fstream o1;//creating object of fstream class
	char filename[81];
	cout<<"enter name of file"<<endl;
	cin.getline(filename,81);//getline function used to get name of file
	o1.open(filename,ios::out);//opening file in output mode
	cout<<"file"<<filename<<"is created";
	return 0;
}
