#include <iostream>
using namespace std;
class Multiples
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
for(i=1;i<=5;i++)
{
e=s*i;
cout<<e<<" ";
}
}
};
int main()
{
Multiples m;
m.get();
m.prnt();
return 0;
}
