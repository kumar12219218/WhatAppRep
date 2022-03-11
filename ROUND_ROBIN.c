#include<stdio.h>
int main()
{
	int i,j,n,k=0,p[10],at[10],bt[10],t=0,ct[10],tt=0,count=0,temp,tq=2,tat[10],rq[100];
	printf("enter the number of process:");
	scanf("%d",&n);
	printf("enter the names of the process:");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&p[i]);
	}
	printf("enter the arrival times of the process");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	printf("enter the burst time of the process");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(at[i]>at[j])
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
	i=0;
	while(count<n)
	{
		if(at[i]<=tt)
		{
			for(j=i;j<n;j++)
			{
				if(at[j]<=tt)
				{
					rq[k]=p[j];
					k++;
				}
				if(bt[rq[t-1]-1]>0)
				{
					rq[k]=p[rq[t-1]-1];
					k++;
				}
			}
			if(bt[rq[t]-1]>=tq)
			{
				bt[rq[t]-1]=bt[rq[t]-1]-tq;
				t++;
				
			}
			else
			{
				ct[rq[t]-1]=tt+bt[rq[t-1]];
				tt=ct[rq[t]-1];
				t++;
				count++;
			}
		}
	}
	printf("completion time of %d is %d",ct[1],ct[2]);

}
			
