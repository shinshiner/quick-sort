void percolateDown(int a[], int hole, int size)
{
    int child, tmp = a[hole];

    for(;hole*2+1<size;hole=child){
        child = hole * 2 + 1;
        if(child!=size-1&&a[child+1]>a[child]) child++;
        if(a[child]>tmp) a[hole] = a[child]; else break;
    }
    
    a[hole] = tmp;
}

void heapSort(int a[], int size)
{
    int tmp;

    //创建初始的堆
    for(int i=size/2-1;i>=0;--i) percolateDown(a,i,size);

    //执行n-1次deQueue
    for(int i=size-1;i>0;--i){
        tmp = a[0]; a[0] = a[i]; a[i] = tmp; //delete a[0]
        percolateDown(a,0,i);
    }
}
