#include<stdio.h>
int a[20];

void nq(int a[],int n,int r)
{       
int i,j,legal;
       if(r==n+1)
       {
                for(i=1;i<=n;i++)
                {
                        printf("%d",a[i]);
                }
                printf("\n\n");
       }
       else
       {
                for(j=1;j<=n;j++)
                {
                        legal=1;
                        for(i=1;i<=r-1;i++)
                        {
                                if((a[i]==j)||(a[i]==(r-j+i))||(a[i]==(r+j-i)))
                                {
                                        legal=0;
                                }
                                
                        }
                        if(legal==1)
                        {
                                a[r]=j;
                                nq(a,n,r+1);
                                
                        }
                
                
                }
       
       
       }
       
}
int main()
{
        int n;
        int row=1;
        printf("enter board size\n");
        scanf("%d",&n);
        nq(a,n,row);
        return 0;



}

