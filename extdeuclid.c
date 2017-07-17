#include<stdio.h>
void main()
{
	int m,b,A1,A2,A3,B1,B2,B3,Q,T1,T2,T3;
	printf("Enter b::");
	scanf("%d",&b);
	
	printf("Enter m::");
	scanf("%d",&m);
	
	A1=1;A2=0;A3=m;
	B1=0;B2=1;B3=b;
	
	if(B3==0)
	{
		printf("GCD::%d\n",A3);
	}
	else
	{
		
		while(B3>1)
		{
			
			Q=A3/B3;
			T1=A1-(Q*B1);
			T2=A2-(Q*B2);
			T3=A3-(Q*B3);
			A1=B1;A2=B2;A3=B3;
			B1=T1;B2=T2;B3=T3;
						
		}
		if(B3==1)
		{
			printf("Multiplicative Inverse::%d\n",B2);
			printf("GCD::%d\n",B3);
		}
		else
		{
			printf("No multiplicative inverse\n");
			printf("GCD::%d\n",A3);
		}
	}
	
	
	
}
