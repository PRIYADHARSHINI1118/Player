#include <iostream>
using namespace std;
class IntervalPrime
{
int k,r,c=0,i,j,ar[5];
bool ch=true;
public:
IntervalPrime()
{
get();
chck();
display();
}
void get()
{
cout<<"INPUT"<<endl;
cin>>i>>r;
}
void chck()
{
for(j=i;j<=r;j++)
{
for(k=2;k<j;k++)
{
if(j%k==0)
{
ch=false;
}
}
if(ch)
{
ar[c]=j;
c++;
}
ch=true;
}
}
void display()
{
cout<<"OUTPUT"<<endl<<c;
}
};
int main()
{
IntervalPrime ip;
return 0;
}
