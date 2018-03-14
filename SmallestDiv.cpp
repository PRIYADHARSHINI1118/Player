#include <iostream>
using namespace std;
class SmallestDiv
{
string s;
int l,r,i,d;
void get()
{
cout<<"INPUT"<<endl;
cin>>l>>r;
}
void display()
{
d=r;
if(l>r)
{
d=l;
}
cout<<"OUTPUT"<<endl;
for(i=d;i>0;i++)
{
if((i%l==0)&&(i%r==0))
{
cout<<i;
break;
}
}
}
public:
SmallestDiv()
{
    get();
    display();
}
};
int main() {
 SmallestDiv s;
	return 0;
}
