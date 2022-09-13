#include<stdio.h>
int dfs(int);
int n;
int visited[10]={0};
int a[50][50];
int main()
{
        int s;
        printf("Enter The number of nodes: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("The matrix is : \n");
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }
        printf("Choose the starting node: ");
        scanf("%d",&s);
        if(s<0 || s>=n)
        {
                printf("Invalid Starting node\n");
        }
        else
        dfs(s);
}
int dfs(int v)
{
        visited[v]=1;
        printf("Visited: %d\n",v);
        for(int i=0;i<n;i++)
        {
                if(visited[i]==0 && a[v][i]==1)
                {
                        dfs(i);
                }
        }
        return 0;
}