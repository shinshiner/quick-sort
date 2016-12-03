void simpleInsertSort(int a[], int size){
    int k, tmp;

    for(int j=1;j<size;++j){
        tmp = a[j];
        for(k=j-1;tmp<a[k]&&k>=0;--k) a[k+1] = a[k];
        a[k+1] = tmp;
    }
}
