const int MAXNUM = 1000000;  //MAXNUM表示待排序的数据最大值
int a[MAXNUM]={0};   //数组下标代表数据，数组值代表出现次数

void bucketSort(int num){
    int tmp;

    for(int i=0;i<num;++i){
        cin >> tmp; ++a[tmp];
    }
}

void print(int num){
    int i=0, k=0;

    while(k<num)
        if(a[i]==0) {++i; continue;}
        else{  //输出a[i]次数据i
            for(int j=0;j<a[i];++j) cout << i << ' ';
            k += a[i++];
        }
}
