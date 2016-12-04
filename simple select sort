void simpleSelectSort(int a[], int size){
    int k, tmp;  //k记录选择过程中最小元素的位置

    for(int i=0;i<size-1;++i){
        k = i;
        for(int j=i+1;j<size;++j)
            if(a[j]<a[k]) k = j;
        tmp = a[i]; a[i] = a[k]; a[k] = tmp;
    }
}
