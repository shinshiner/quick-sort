void merge(int a[], int left, int mid, int right){
    int *tmp = new int[right-left+1];
    int i=left, j=mid, k=0;

    while(i<mid&&j<=right) //两表都未结束
        if(a[i]<a[j]) tmp[k++] = a[i++];
        else tmp[k++] = a[j++];
    while(i<mid) tmp[k++] = a[i++]; //前半部分没有结束
    while(j<=right) tmp[k++] = a[j++]; //后半部分没有结束
    for(i=0,k=left;k<=right;) a[k++] = tmp[i++];

    delete []tmp;
}

void mergeSort(int a[], int left, int right){
    if(left==right) return;

    int mid=(left+right)/2;
    mergeSort(a,left,mid);
    mergeSort(a,mid+1,right);
    merge(a,left,mid+1,right);
}
