#include<stdio.h>
double getAvg(int arr[],int n)
{
    int sum = 0;
    int i;
    double avg;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        
    }
    avg=sum/ n;
    return avg;

}
int main()
{
    int nums[6] = {1, 2, 5, 10, 6, 8};
    int sum;
    double avg = getAvg(sum, 6);
    return 0;

}