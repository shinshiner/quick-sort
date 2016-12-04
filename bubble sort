void bubbleSort(int a[], int size){
    int tmp;
    bool flag;  //记录一趟起泡中有没有发生交换

    for(int i=1;i<size;++i){
        flag = false;
        for(int j=0;j<size-i;++j)  //第i次起泡
            if(a[j+1]<a[j]){
                tmp = a[j]; a[j] = a[j+1]; a[j+1] = tmp; flag = true;
            }
        if(!flag) break;
    }
}
