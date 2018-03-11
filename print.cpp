#include <iostream>
#include <string>
using namespace std;
class print
{
string s;
int n,i;
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
void chck()
{
n=s.length();
for(i=0;i<n;i++)
{
s[i]=tolower(s[i]);
}
if(s=="sunday"||s=="saturday")
{cout<<"yes";}
else{cout<<"no";}
}
public:
print()
{
get();
chck();
}
};
int main()
{
print a;
return 0;
}
