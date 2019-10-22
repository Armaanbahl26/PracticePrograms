#include<iostream>//including iput file stream
#include<fstream>//including input  and output file stream
using namespace std;
int main()//in main function
{
	fstream o1;//creating object of fstream class
	o1.open("file2",ios::in|ios::out);
	cout<<"file 2 is created"<<endl;
	if(!o1)
	{
		cout<<"error";
	}
	return 0;
}
