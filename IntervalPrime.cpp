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
if(i>r)
{
int t=i;
i=r;
r=t;
}
}
void chck()
{
for(j=i+1;j<r;j++)
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
cout<<"OUTPUT"<<endl;
for(i=0;i<c;i++)
{
cout<<ar[i]<<" ";
}
}
};
int main()
{
IntervalPrime ip;
return 0;
}
