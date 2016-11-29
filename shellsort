void shellSort(int a[], int size)
{
    int step, tmp, j;

    for(step=size/2;step>0;step/=2)  //step为希尔增量
        for(int i=step;i<size;++i){  //对相距step的元素序列采用直接插入排序
            tmp = a[i];
            for(j=i-step;j>=0&&a[j]>tmp;j-=step) a[j+step] = a[j];
            a[j+step] = tmp;
        }
}
