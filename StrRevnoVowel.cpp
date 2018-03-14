#include <iostream>
using namespace std;
class StrRevnoVowel
{
string s;
int n,i;
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
void display()
{
cout<<"OUTPUT"<<endl;
n=s.length();
for(i=n-1;i>=0;i--)
{
switch(s[i])
{
case 'a':break;
case 'e':break;
case 'i':break;
case 'o':break;
case 'u':break;
default:cout<<s[i];break;
}
}
}
public:
StrRevnoVowel()
{
get();
display();
}
};
int main() {
 StrRevnoVowel s;
	return 0;
}
