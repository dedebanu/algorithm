#include<stdio.h>
float a[100][2];
void knap(float a[100][2],float size,float ksize)
{
	float weight;
	int i;
	weight=0;
	printf("entering\n");
	for(i=1;i<=size;i++)
	{
		if(ksize>a[i][1])
		{
			//printf("kzise=%f",ksize);
			ksize=ksize-a[i][1];
			weight=weight+a[i][2];
			printf("percentage=1");
			printf("weight=%.2f\n",weight);
		}
		else
		{
		       // printf("kzise=%f",ksize);
			weight=weight+((ksize*a[i][2])/a[i][1]);
			//i=size+1;
			printf("perxentage=%f",(ksize/a[i][2]));
			printf("weight=%.2f\n",weight);
			//printf("kziseafter=%f",ksize);
			i=size+1;
		}
		
	}
	printf("%f",weight);



}
int main()
{
	float size,temp,temp1,pw,pw1,ksize;
	int i,j;
	printf("enter the size\n");
	scanf("%f",&size);
	printf("enter knapsack size\n");
	scanf("%f",&ksize);
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=size;i++)
	{
	        for(j=i+1;j<=size;j++)
	        {
	                pw=a[i][2]/a[i][1];
	                pw1=a[j][2]/a[j][1];
	                if(pw1>pw)
	                {
	                        temp=a[i][1];
	                        temp1=a[i][2];
	                        a[i][1]=a[j][1];
	                        a[i][2]=a[j][2];
	                        a[j][1]=temp;
	                        a[j][2]=temp1;
	                }
	                else
	                {}
	        
	        }
	        
	
	}
	printf("matrix\n");
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	 knap(a,size,ksize);
	
return 0;
}
