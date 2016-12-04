#include<stdio.h>
int a[10];
void print(int a[],int n)
{
        int i;
        for(i=1;i<=n;i++)
        {
                printf("%d",a[i]);
        }

}
void swap(int a[],int i,int j)
{
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

}
void maxheap(int a[],int pos,int si)
{
        int l,r,x;
        l=2*pos;
        r=2*pos+1;
        printf("give %d,left=%d,size=%d",pos,l,si);
        printf("%d,%d",a[pos],a[l]);
       if((l<=si)&&(a[l]>a[pos]))
       {
        x=l;
       }
       else
       {
        x=pos;
       }
       if((r<=si)&&a[r]>a[x])
       {
        x=r;
       }
        
       
        printf("max at%d\n",x);
        printf("pos %d x=%d",pos,x);
        if(x!=pos)
        {
                swap(a,pos,x);
              maxheap(a,x,si);
        }
        
}
      
         


void buildheap(int a[],int n)
{
        int i;
        for(i=(n/2);i>=1;i--)
        {
                maxheap(a,i,n);
        }

}
void heapsort(int a[],int n)
{
        int i;
        int one=1;
        buildheap(a,n);
        printf("after buildheap\n");
        print(a,n);
       for(i=n;i>=2;i--)
        {
                swap(a,i,one);
                buildheap(a,i-1);
        
        }

}
int main()
{
int size,i;
printf("give the size\n");
scanf("%d",&size);
printf("enter elements\n");
for(i=1;i<=size;i++)
{
scanf("%d",&a[i]);
}
//print(a,size);
heapsort(a,size);

print(a,size);
return 0;
}
