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

//void bubble_sort(int array[],int num)
//{
//    int tmp,i,j,flags=1;
//    for(j=num-1; j> 0; --j)
//    {
//        if(flags)
//        {
//            flags = 0;
//            for(i=0;i<j;++i)
//            {
//                if(array[i] > array[i+1])
//                {
//                    tmp = array[i];
//                    array[i] = array[i+1];
//                    array[i+1] = tmp;
//                    flags = 1;
//                }

//            }
//        }
//        else
//        {
//            printf("j=%d\n",j);
//            break;
//        }
//    }
//}
/*改进的冒泡算法*/
void bubble_sort(int array[],int num)
{
    int m,i,a,bound = num;
    while(bound)
    {
        m = 0;
        for(i=0;i<bound;++i)
        {
            if(*(array+i) > *(array+i+1) )
            {
                a = *(array+i);
                *(array+i) = *(array+i+1);
                *(array+i+1) = a;
                m=i;
            }
        }
        bound = m;
    }

}


/*
 *快速排序
 *  也叫分划交换排序，采用分治策略
 *  1.以任意a[i]为基准，将数据划分为a[low]~a[i]
 *和a[i]~a[high]两个部分,通常取i=(high+low)/2
 *且满足左边的都小于a[i],右边的都大于a[i].
 *  2.a[i]左右的两个子区间都可以进行单独的排序，可以
 *递归调用快速排序
*/
void quick_sort(int array[],int num)
{
    int low ,high,tmp,i ;
    low =0;
    high = num-1;
    i=(low+high)/2;

    if(array[low]>array[i])
    {
        tmp = array[low];
        array[low] = array[i];
        array[i] = tmp;
    }



}


int main(int argc, char const *argv[])
{
    int a[]={9,1,5,7,8};
//    insert_sort(a,10);

//    for (int i = 0; i < 10; ++i)
//        printf("%d\t",a[i]);

//    printf("\n");

    bubble_sort(a,5);

    for (int i = 0; i < 5; ++i)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
