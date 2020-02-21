#include<stdio.h>
int main()
	{
		int d,size,rot;
		printf("Enter the number of test cases");
		scanf("%d",&d);
		for(int i=0;i<d;i++)
			{
			printf("enter the size of the 			array and rotations");
			scanf("%d %d", &size, &rot);
			int arr[size];
			printf("enter the array 				elements");
			for(int i=0;i<size;i++)
			{
		scanf("%d",&arr[i]);			
			}
			
int n=rot;printf("\n The rotated array");int p=0;
while(n<size)
{
	printf("%d \t",arr[n]);
	n++;
}
while(p<rot)
{
printf("%d \t",arr[p]);
p++;
}
}

}
