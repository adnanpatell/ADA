#include<stdio.h>
void classic(int a[],int n)
{
        int i,j,k,temp;
        int count=0;
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-1;j++)
                {
                        count++;
                        if(a[j]>a[j+1]){
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                        }
                for(k=0;k<n;k++)
                        printf("%d",a[k]);
                        printf("\n");


                }


        }
        printf("Comparisson Count is %d",count);
}
void semi_optimized(int a[],int n)
{
        int i,j,k,temp;
        int count=0;
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-i-1;j++)
                {
                        count++;
                        if(a[j]>a[j+1]){
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                }
                for(k=0;k<n;k++)
                        printf("%d",a[k]);
                        printf("\n");
                }
        }
        printf("Comparisson Count Is: %d",count);
}
void optimized(int a[],int n)
{
        int i,j,k,temp;
        int count=0;
        int flag=0;
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-i-1;j++)
                {
                        count++;
                        if(a[j]>a[j+1])
                        {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;  
			flag=1;
                }
                }

                if(flag==0){
                        break;
                }
                flag=0;

                for(k=0;k<n;k++)
                        printf("%d",a[k]);
                        printf("\n");
        }

        printf("Comparisson Count is: %d",count);
        }

int main()
{
        int a[100],n;
        int i,j;
        int choice;
        printf("Enter Number Of Elements to sort");
        scanf("%d",&n);
        printf("Enter Elements: \n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        printf("------------------Please Enter Your Choice-------------- \n 1.Classical Bubble Sort \n 2.Semi-Optimized Bubble Sort \n 3.Optimized Bubble Sort \n");
        scanf("%d",&choice);
        switch(choice){
case 1:
                classic(a,n);
                for(i=0;i<n;i++)
                        printf("\n Your Sorted List is %d \n",a[i]);
                break;
                case 2:
                semi_optimized(a,n);
                for(i=0;i<n;i++)
                        printf("\n Your sorted list is %d \n",a[i]);
                break;
                case 3:
                optimized(a,n);
                for(i=0;i<n;i++)
                        printf("\n Your Sorted List is %d \n",a[i]);
                break;
                default:
                printf("Invalid choice");
        }
}

