//writing data in file closing it reopening it and appending data
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream o1;
	o1.open("file1",ios::out);
	o1<<"data written in file"<<endl;
	o1.close();
	o1.open("file1",ios::app);
	o1<<"and appended also";
	o1.close();
	return 0;
}
