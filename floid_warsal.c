#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define SWAP(A,B) (A)=((A)+(B))-((B)=(A))
#define PI 3.141
#define DEBUG printf("lolwa\n")
#define inpd(x) scanf("%d",&x)
int pre[100][100];
int nxt[100][100];
void floid(int n)
{
 int i,j,k,min,m,o;
 for(k=0;k<n;k++)
 {
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(pre[i][j]<(pre[i][k]+pre[k][j]))
                        {
                                min=pre[i][j];
                        }
                        else
                        {
                                min=(pre[i][k]+pre[k][j]);
                        }
                        nxt[i][j]=min;
                
                }
        }
        for(m=0;m<n;m++)
        {
                for(o=0;o<n;o++)
                {
                        pre[m][o]=nxt[m][o];
                        nxt[m][o]=0;
                }
        }
 }
for(i=0;i<n;i++)
{
        for(j=0;j<n;j++)
        {
                printf("%d\t",pre[i][j]);
        }
        printf("\n");
}

}

int main()
{
int n,i,j;
printf("enter no of vertex\n");
scanf("%d",&n);
printf("enter adjascentcy matrix\n");
for(i=0;i<n;i++)
{
        for(j=0;j<n;j++)
        {
                scanf("%d",&pre[i][j]);
                nxt[i][j]=0;
        }
}
floid(n);

return 0;
}
