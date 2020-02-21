#include<stdio.h>
void MergeSort(int arr[],int l,int r);
void Merge(int arr[], int l,int m,int r);
void print(int arr[],int size);
//Driver Method
int main()
    {
        int arr[]= {5,4,2,1,6};
        int size= sizeof(arr)/sizeof(arr[0]);
        printf("Given aRRAY\n");
        print(arr,size);
        MergeSort(arr,0,size-1);
        printf("\nSorted Array\n");
        print(arr,size);
        return 0;
    }

void MergeSort(int arr[],int l,int r)
    {
        if(l<r)
        {
            int m=(l+r)/2;
            MergeSort(arr,l,m);
            MergeSort(arr,m+1,r);

            Merge(arr,l,m,r);
        }

    }

void Merge(int arr[],int l,int m,int r)
    {

        int n1;
        int n2;
        n1=m-l+1;
        n2=r-m;
        int arr1[n1],arr2[n2];
        int i,j,k;

        for(int i=0;i<n1;i++)
            {
                arr1[i]=arr[i+l];
		
            }
        for(int j=0;j<n2;j++)
            {
                arr2[j]=arr[m+j+1];
            }
	i=0,j=0,k=l;
        while(i<n1 && j<n2)
            {

                if(arr1[i]<=arr2[j])
                {
                    arr[k]=arr1[i];
                    i++;
                }
                else
                {
                    arr[k]=arr2[j];
                    j++;
                }
                k++;
            }

        while(i<n1)
        {
            arr[k]=arr1[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k]=arr2[j];
            j++;
            k++;
        }

    }

void print(int A[],int size)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d \t",A[i]);
        }
    }
