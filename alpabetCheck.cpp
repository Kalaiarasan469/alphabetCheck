#include <iostream>
using namespace std;
class Alphabet
{
char ch;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>ch;
	}
void chck()
{
	cout<<"OUTPUT"<<endl;
if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<"Alphabet"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
};
int main()
{
Alphabet a;
a.get();
a.chck();
return 0;
}
