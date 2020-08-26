
#include <stdio.h>
int count = 0;
void print(int b[], int size, int a[], int sum)
{
    int k=0;
    for(int i=0;i<size;i++)
    {
        if(b[i]!=0)
        {
            if(k==0)
            {
                printf("%d", a[i]);
                k=1;
            }
            else
            {
                printf(" + %d", a[i]);
            }
        }
    }
    printf(" = %d\n", sum);
}
int combinations(int a[], int size, int b[], int sum, int j, int sum_init)
{
    if(sum==0)
    {
        print(b, size, a,sum_init );
        count++;
    }
    if(j>=size)
        return 0;
    if(sum<0)
        return 0;

    for(int i=j;i<size;i++)
    {
        b[i] = 1;
        combinations(a, size, b, sum-a[i], i+1 , sum_init);

        b[i]=0;
    }
    return 0;
}

int main()
{
    int val, sum;
    scanf(" %d", &val);
    scanf(" %d", &sum);
    int temp = val;
    int size=0;
    while(temp>0)   //getting the size of the input
    {
        size++;
        temp = temp/10;
    }
    int a[size];
    int i=0;
    while(val>0)    // storing the digits in an array
    {
        a[i] = val%10;
        val = val/10;
        i++;
    }
    int b[size];
    for(i=0;i<size;i++)     // array for printing the combination  with sum as given
        b[i]=0;
    printf("Sum of combinations:\n");
    combinations(a, size, b, sum, 0, sum);

    printf("Number of combinations that add up to:%d", count);
	return 0;
}
