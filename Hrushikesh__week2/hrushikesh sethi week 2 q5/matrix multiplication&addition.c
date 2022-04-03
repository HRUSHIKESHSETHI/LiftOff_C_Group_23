#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],s[10][10],m[10][10],i,j,k;
	int r=2;
	int c=2;
	
	printf("\n Enter matrix 1:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" Enter the number at index %d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Matrix 1:\n");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Enter matrix 2:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" Enter the number at index %d%d: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Matrix 2:\n");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m[i][j]=0;
			
		    for(k=0;k<c;k++)
		    {
			m[i][j]+=a[i][k]*b[k][j];
		    }
	    }
		printf("\n");
	}
	
	printf(" Matrix after addition:\n");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",s[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Matrix after multiplication:\n");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}