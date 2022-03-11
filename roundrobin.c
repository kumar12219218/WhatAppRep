#include<stdio.h>
int main()
{
	int i,j,bt[10],tat[10],p[10],n,rq[10],tq=3,tt=0,count=0,ct[10],x;
	printf("enter the number of process:");
	scanf("%d",&n);
	printf("enter the names of process:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter the burst time of the process:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	int t=0,k=0;
	rq[t]=p[0];
	while(count<n)
	{
		printf("\n%d",bt[rq[t]-1]);
		x=rq[t]-1;
		if(bt[x]<=tq)
		{
			ct[x]=bt[x]+tt;
			tt=ct[x];
			count++;
			printf("in main");
		}
		else
		{
			bt[x]=bt[x]-tq;
			tt=tt+tq;
		        if(k<n)
			{
				for(i=k+1;i<n;i++)
				{
					rq[i]=p[i];
					k++;
				}
			}
			printf("in loop");
			k++;
			rq[k]=p[x];
		}
		t++;
	}
	printf("\n count %d\n",count);
	for(i=0;i<n;i++)
	{
		printf("%d\n",ct[i]);
	}
}
		
			