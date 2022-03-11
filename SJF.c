#include<stdio.h>
int main()
{
	int i,j,p[10],at[10],wt[10],bt[10],ct[10],tat[10],temp,n,visited[10];
	printf("enter the number of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	printf("enter the process name:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter the arrival time of a process:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	printf("enter the burst time of a process:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(bt[i]>bt[j])
			{
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
				temp=at[i];
				at[i]=at[j];
				at[j]=temp;
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t %d \t %d \n",p[i],at[i],bt[i]);
	}
	int tt=0;
	for(i=0;i<n;i++)
	{
		if(at[i]<=tt)
		{
			if(visited[i]==0)
			{

				ct[i]=bt[i]+tt;
				tt=ct[i];
				visited[i]=1;
			}
		}
		else
		{
			for(j=0;j<n;j++)
			{
				if(at[j]<=tt && visited[j]==0)
				{
					ct[j]=bt[j]+tt;
					tt=ct[j];
					visited[j]=1;
					i=i-1;
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("completion time of %d is: %d",p[i],ct[i]);
		printf("\n");
	}
}	
					
				

