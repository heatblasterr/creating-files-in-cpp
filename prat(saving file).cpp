//creating a file for writing inside it
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream obj;
	obj.open("omkar.txt");
	
	obj<<"8th september"<<endl;
	obj<<"vivek birthday";
}
