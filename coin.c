#include<stdio.h>
int main()
{
int m[10][10];
int d[10];
int i,j,y,n,min;
printf("enter the number of coins\n");
scanf("%d",&n);
printf("enter the value\n");
scanf("%d",&y);
for(i=1;i<=3;i++)
{
scanf("%d",&d[i]);
}
for(j=0;j<=y;j++)
{

m[n][j]=j;
}
for(i=(n-1);i>=1;i--)
{
        for(j=0;j<=y;j++)
        {
                if(d[i]>j)
                {
                        m[i][j]=m[i+1][j];
                }
                else
                {
                        if(m[i+1][j]<(1+m[i][j-d[i]]))
                        {
                                min=m[i+1][j];
                        }
                        else
                        {
                        min=(1+m[i][j-d[i]]);
                        
                        }
                        m[i][j]=min;
                
                }
        
        
        }

}
printf("%d",m[1][y]);



return 0;
}
