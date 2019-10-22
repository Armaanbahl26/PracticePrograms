#include<iostream>//closing of a file
#include<fstream> //incliding input and output file stream
using namespace std;
int main()//in main function
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
