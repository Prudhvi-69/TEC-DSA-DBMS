#include<stdio.h>
void main()
{
	int N,i,j,check=0;
	scanf("%d",&N);
	int Arr[N];
	for(i=0;i<N;scanf("%d",&Arr[i++])); // Taking input in one line
	
	printf("\nArray : ");
	for(i=0;i<N;printf("%d ",Arr[i++])); // Displaying in one line

//	for(i=0;i<N-1;i++)  // Start from 1st value
//	{
//		for(j=i+1;j<N;j++) // Check if the value is repeated until the end
//		{
//			if(Arr[i]==Arr[j])  // If it is repeated, we exit immediately...
//			{
//				printf("\nYessssssssssssssss");
//				check++;
//				goto start;  // instead of break, we used goto, to exit
//			}											// the loop
//		}
//	}
//start: 	
//	if(check==0)
//		printf("\n Not Found...");	







////Deletion Based on INDEX
//	int ind;
//	scanf("%d",&ind); // 3<6
//	for(;ind<N;ind++)
//	{
//		Arr[ind]=Arr[ind+1]; // 
//	}
//
//	printf("\nArray After deletion : ");
//	for(i=0;i<N-1;printf("%d ",Arr[i++])); 
//
//
//
//	int val,count=0;
//	scanf("%d",&val); // 3<6
//	for(i=0;i<N;i++)
//	{
//		if(Arr[i]==val){
//			count++;
//			for(j=i;j<N;j++)
//				Arr[j]=Arr[j+1];  
//		}
//	}
//	printf("\nArray After deletion : ");
//	for(i=0;i<N-count;printf("%d ",Arr[i++])); 
	
//	int sum=0;    // Add odd values
//	for(i=0;i<N;i++) // N
//	{
//		if(Arr[i]%2==1)   
//			sum+=Arr[i];
//	}
//	printf("\nOdd Sum : %d",sum);
//
//	int sum=0;     // Add odd indexed values
//	for(i=1;i<N;i=i+2)  // N/2 
//	{
//		sum+=Arr[i];
//	}
//	printf("\nOdd Sum : %d",sum);

//
//
//
//	int rot=700;
//	rot = rot%N;
//	for(i=1;i<=rot;i++)
//	{
//		int temp=Arr[0];
//		for(j=0;j<N;j++)
//			Arr[j]=Arr[j+1];
//		Arr[N-1]=temp;
//	}
//	printf("\nArray After Rotations: ");
//	for(i=0;i<N;printf("%d ",Arr[i++]));
//	
//

	

















}




