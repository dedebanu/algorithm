#include<stdio.h>
int a[3][2];
int d[10];
int s[3];
int main()
{
int i,j,dead,d1,d2,k;
printf("enter the jobs\n");
for(i=1;i<=3;i++)
{
        for(j=1;j<=2;j++)
        {
                scanf("%d",&a[i][j]);
                printf("%d \n",a[i][j]);
        }
}


for(i=0;i<10;i++)
{
        d[i]=1;
}


for(i=1;i<=3;i++)
{
        printf("\n\n\n");
        dead=a[i][2];
        d1=dead-1;
        d2=dead;
        printf("%d%d",d1,d2);
    
        if((d[d1]==0)&&(d[d2]==0))
        {
                printf("not allocated\n");
        }
        else
        {
                printf("allocated %d\n",a[i][1]);
                s[i]=a[i][1];
                d[d1]=0;
                d[d2]=0;
        }
        printf("after %d iteration",i);
         for(j=0;j<10;j++)
        {
                printf("%d",d[j]);
        }
printf("\n");
printf("the 2d matrix is\n");
for(k=1;k<=3;k++)
{
        for(j=1;j<=2;j++)
        {
                printf("%d ",a[k][j]);
}
        }
}

printf("the final nas is\n");
for(i=1;i<=3;i++)
{
printf("%d\n",s[i]);

}
return 0;

}

