#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define ARRAYSIZE 100
int main()
{
	int n, number[ARRAYSIZE];
	bool prime[ARRAYSIZE];

	scanf("%d", &n);
	assert(n>=1 && n<ARRAYSIZE);

	for(int i=0; i<n; i++)
	{
		scanf("%d", &number[i]);
		prime[i]=true;
	}

	for(int i=0; i<n; i++)
	{
		for(int j=2 ; j<number[i] && prime[i] ; j++)
			if(number[i]%j == 0)
				prime[i]=false;
		if(prime[i]==true)
			printf("YES ");
		else
			printf("NO ");
	}

	printf("\n");

	return 0;
}
