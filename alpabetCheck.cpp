#include <iostream>
using namespace std;
class Alphabet
{
char ch;
public:
void get()
{
cout<<"Enter a character ";
	cin>>ch;
	}
void chck()
{
if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<"It is a character"<<endl;
	}
	else
	{
		cout<<"It is not a Character"<<endl;
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