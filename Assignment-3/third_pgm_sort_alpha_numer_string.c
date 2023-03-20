#include<stdio.h>
#include<stdlib.h>
int size(char *s)
{
	int num = 0;
	while(num>-1)
	{
		if((int)s[num] == 0)
		{
			break;
		}
		num = num+1;
	}
	return num;	
}

void bubble(int arr[],int st,int en)
{
	int i,k,temp;
	
	for(i=0;i<en-1;i++)
	{
		for(k=st;k<en-i-1;k++)
		{
			if(arr[k] > arr[k+1])
			{
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}
	for(i=st;i<en;i++)
	{
		printf("%c",arr[i]);
	}
}

int main()
{
	char *s="";
	//sample_input = "123434acibdf295869asdsd37695dfgasd","123434acibdf295869asdsd37695dfgasd98765421"
	s = (char*)malloc(sizeof(char*));
	printf("ENTER THE STRING : ");
	scanf("%[^\n]",s);
	printf("STRING IS : %s\n",s);
	int num = size(s);
	printf("THE SIZE OF STRING : %d\n",num);
	int i,j=0,arr[num],temp=0,k=1,ar[num];
	ar[0] = 0;
	for(i=0;i<num;i++)
	{	
		arr[j] = (int)s[i];
		j++;
	}
	for(i=0;i<num;i++)
	{
		if((int)s[i]>=48 && (int)s[i]<=57)
		{   
			ar[k] = i+1;
			if((int)s[i+1]>=97 || (int)s[i+1] == 0)
			{
				k++;
			}
		}
		else{
			ar[k] = i+1;
			if((int)s[i+1]<97)
			{
			    k++;
			}
		}
	}
    for(i=0;i<k;i++)
    {
        bubble(arr,ar[i-1],ar[i]);
    }
	return 0;
}

Output:

ENTER THE STRING : 1233434acibdf295869asdsd37695dfgasd
STRING IS : 123434acibdf295869asdsd37695dfgaSTRING IS : RING : 
THE SIZE OF STRING : 96
123344abcdfi256899addss35679adfgTHE SIZE OF STRING : 
69256899addss35679adfgSTRING IS : RING : 

