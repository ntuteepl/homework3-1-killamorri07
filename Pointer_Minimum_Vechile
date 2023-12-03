#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>
#define MAXNUM 100
#define MAXDRIVER 100
#define MAXTRIP 100

int main()
{
	int s[MAXNUM], d[MAXNUM];
	int driver[MAXDRIVER][MAXTRIP];
	int trip[MAXDRIVER], num_driver=0;

	int num_input = 0;	
	while(num_input<MAXNUM && scanf("%d%d", &s[num_input], &d[num_input]) != EOF)
		num_input++;
	assert(num_input>=1 && num_input<MAXNUM);

	for(int i = num_input - 2; i >= 0; i--)
		for (int j = 0; j <= i; j++)
			if (s[j] > s[j + 1])
			{
				int temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
				temp = d[j];
				d[j] = d[j + 1];
				d[j + 1] = temp;
			}
			else if (s[j] == s[j + 1] && d[j] > d[j + 1])
			{
				int temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
				temp = d[j];
				d[j] = d[j + 1];
				d[j + 1] = temp;
			}

	for(int i=0; i<MAXDRIVER; i++)
		trip[i] = 0;
 
	driver[0][0]=s[0];
	driver[0][1]=d[0];
	num_driver++;
	trip[0]=1;

	for(int i = 1; i<num_input; i++)
	{
		int old_num_driver=num_driver;

		bool add_driver=true;
		for(int j = 0; j<old_num_driver; j++)
		{
			bool add_trip=true;

			for(int k=0; k<trip[j]; k++)
			{	
				if(s[i]>=driver[j][k*2] && s[i]<driver[j][k*2+1])
					add_trip=false;
			}
			
			if(add_trip)
			{
				int temp=trip[j]*2;
				driver[j][temp]=s[i];
                                driver[j][temp+1]=d[i];
                                trip[j]++;
				add_driver=false;
				break;
			}
		}
		
		if(add_driver)
		{
			driver[num_driver][0]=s[i];
			driver[num_driver][1]=d[i];
			trip[num_driver]++;
			num_driver++;
		}
	}

	printf("%d\n", num_driver);

	for(int i=0;i<num_driver;i++)
	{
		printf("Driver %d's schedule is ", i+1);
		for(int j=0;j<trip[i];j++)
			printf("%d %d ", driver[i][j*2], driver[i][j*2+1]);
		printf("\n");
	}
}
