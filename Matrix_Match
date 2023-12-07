#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#define MAXROWS 10
#define MAXCOLS 10

int main()
{
	int sense[MAXROWS][MAXCOLS],sense_array[MAXROWS*MAXCOLS];
	bool paired_boy[MAXROWS], paired_girl[MAXCOLS];
	int n;

	scanf("%d", &n);
	assert(n>=2 && n<=MAXROWS);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &sense[i][j]);
			sense_array[i*n+j]=sense[i][j];
			paired_girl[j]=false;
		}
		paired_boy[i]=false;
	}
	
	for (int i = n*n - 2; i >= 0; i--)
		for (int j = 0; j <= i; j++)
			if (sense_array[j] < sense_array[j + 1])
			{
				int temp = sense_array[j];
				sense_array[j] = sense_array[j + 1];
				sense_array[j + 1] = temp;
			}

	for (int i = 0; i < n*n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				if(sense[j][k] == sense_array[i] && !paired_boy[j] && !paired_girl[k])
				{
					paired_boy[j]=true;
					paired_girl[k]=true;
					printf("boy %d pair with girl %d\n", j+1, k+1);
				}
			

	return 0;
}
