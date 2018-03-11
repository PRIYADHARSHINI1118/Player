#include <iostream>
using namespace std;
class Factorial
{
int e=1,s,i=0;
public:
void get()
{
cout<<"INPUT"<<endl;
cin>>s;
}
void prnt()
{
cout<<"OUTPUT"<<endl;
for(i=1;i<=s;i++)
{
e=e*i;
}
cout<<e;
}
};
int main()
{
Factorial f;
f.get();
f.prnt();
return 0;
}
