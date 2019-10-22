//writing content into the file
#include<iostream>
#include<fstream>//include files
using namespace std;
int main ()//in main function
{
	fstream o1;
	o1.open("file3",ios::out);//opening of file already exhisted
	o1<<"contents written in file 3";//writing into file
	cout<<"suceesfully written";
	o1.close();
	return 0;
}
