#include <iostream>
using namespace std;
class IntervalArmstrong
{
int e,s,i=0,j=0,c=0,ar[500],c2,n;
public:
void get()
{
cout<<"INPUT"<<endl;
cin>>s>>e;
}
void prnt()
{
cout<<"OUTPUT"<<endl;
for(i=s+1;i<e;i++)
{
n=0;
j=i;
c2=i;
c=0;
while(j%10)
{
n++;
ar[c]=j%10;
j=j/10;
c++;
}
int sum=0;
for(j=0;j<c;j++)
{
sum=sum+(ar[j]*ar[j]*ar[j]);
}
if(i==sum)
{cout<<i<<endl;}
}
}
};
int main()
{
IntervalArmstrong i;
i.get();
i.prnt();
return 0;
}
