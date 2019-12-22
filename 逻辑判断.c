#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int a,b,c;
for(a=0;a<=1;a++) 
{
for(b=0;b<=1;b++)
{
for(c=0;c<=1;c++)
{
if( (a&&(!b)||(!a)&&b)&&(b&&(!c)||(!b)&&c)&&((c&&!(a+b))||(!c&&(a+b))))
{
printf("¼× told a %s\n",a?"truth":"lie");
printf("ÒÒ told a %s\n",b?"truth":"lie");
printf("±û told a %s\n",c?"truth":"lie");
}		
}
}
}	
	
	return 0;
}