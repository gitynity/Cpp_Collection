#include <stdio.h>

main()
{
	int a , c  , x ,z ,p ,r;
	float b,y,q;
	sscanf("10 20 30","%d%f%d",&a , &b , &c);	//space separated string input
	printf("%d\n%f\n%d\n",a,b,c);				//correct output
	
	sscanf("102030","%d%f%d",&p , &q , &r);	//without space string input
	printf("\n%d\n%f\n%d\n",p,q,r);			//undefined garbage output
	
	sscanf("10,20,30","%d%f%d",&x , &y , &z);	//comma separated string input
	printf("\n%d\n%f\n%d\n",x,y,z);				//undefined garbage output
	return 0;
}
