//count how many times the next element is greater than the previous element
Input
5
1 2 2 5 3
Result: count = 3
    // C Language 
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int count = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] > arr[i-1])
            count++;
    }
    printf("%d",count);
    return 0;
} 
 // c++
int fun(int arr[],int n)
{
  int count = 1;
 int max = arr[0];
  for(int i=0;i<n;i++)
{
  if (arr[i]>max)
  count++;
  max = arr[i];
}
cin<<count<<endl;
}
    
