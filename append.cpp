#include <iostream>
#include <string>
using namespace std;
class append
{
string s;
char y='.';
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
void Append()
{
s=s+y;
}
void display()
{
cout<<"OUTPUT"<<endl;
cout<<s;
}
public:
append()
{
get();
Append();
display();
}
};
int main()
{
append a;
return 0;
}
