#include <stdio.h>
int main()
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.23e-5;
	printf("%f can be written %e\n",aboat,aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%f can be written %e\n",dip,dip);
	return 0;
		
}