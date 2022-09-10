//creating a file for writing inside it
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char s[80];
	ofstream obj;
	obj.open("omkar r b.txt",ios::app);
	
	cout<<"enter the name = "<<endl;
	gets(s);
	obj<<s;
	cout<<endl;
	obj.close();
}  
