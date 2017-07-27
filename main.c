#include <stdio.h>
#include <assert.h>




//直接插入排序
void insert_sort(int array[],int num)
{
    assert(array);

    for (int i = 1; i < num; ++i)
    {
        int j = i-1;
        while (array[i]<array[j] && j >= 0)
            --j;

        int tmp = array[i];

        while(i > j+1)
        {
           array[i] = array[i-1];
           --i;
        }

        array[j+1] = tmp;

    }
}

//希尔排序
//冒泡排序


int main(int argc, char const *argv[])
{
    int a[]={2,5,6,1,3,8,5,7,3,2};
    insert_sort(a,10);

    for (int i = 0; i < 10; ++i)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
