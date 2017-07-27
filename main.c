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

/*
 * 冒泡排序
 *   进行n-1趟比较，每次都将相邻的两个数的顺序调整好，
 *  第一次比较会将最大的数放在数组的末尾
 *  第二次会将第二大的放在倒数第二个
 *  ...
 */

void bubble_sort(int array[],int num)
{
    int tmp,i,j,flags=1;
    for(j=num-1; j> 0; --j)
    {
        if(flags)
        {
            flags = 0;
            for(i=0;i<j;++i)
            {
                if(array[i] > array[i+1])
                {
                    tmp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = tmp;
                    flags = 1;
                }

            }
        }
        else
        {
            printf("breaknow");
            break;
        }

    }
}


int main(int argc, char const *argv[])
{
    int a[]={2,5,6,1,3,8,5,7,3,2};
//    insert_sort(a,10);

//    for (int i = 0; i < 10; ++i)
//        printf("%d\t",a[i]);

//    printf("\n");

    bubble_sort(a,10);

    for (int i = 0; i < 10; ++i)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
