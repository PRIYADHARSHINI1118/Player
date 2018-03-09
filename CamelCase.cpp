// Example program
#include <iostream>
#include <string>
using namespace std;
class CamelCase
{
bool ch=true;
string s;
int n,i=0;
public:
CamelCase()
{
get();   
convert();
display();
}
void get()
{
cout<<"INPUT"<<endl;    
getline(cin,s);
}
void convert()
{
n=s.length();
for(i=0;i<n;i++)    
{
if(ch)
{
s[i]=toupper(s[i]);
ch=false;
}
else
{
s[i]=tolower(s[i]);    
}
if(s[i]==' ')
{
ch=true;
}
}
}
void display()
{
cout<<"OUTPUT"<<endl<<s;;    
}
};
int main()
{
CamelCase cc;
return 0;
}
