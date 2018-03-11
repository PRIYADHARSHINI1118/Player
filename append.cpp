#include <iostream>
#include <string>
using namespace std;
class append
{
string s;
char y='.';
void get()
{
getline(cin,s);
}
void Append()
{
s=s+y;
}
void display()
{
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
