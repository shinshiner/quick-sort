struct node{
    int data;
    node *next;

    node() {next = NULL;}
    node(int d):data(d) {next = NULL;}
};

//待排序数要用不带头结点的链表的方式存储,排完序是降序
void buckerSort(node *&p, int d){   //p是链表头,d是最大的位数
    node *bucket[10], *last[10], *tail;
    int i, j, k, base = 1;

    for(i=1;i<=d;++i){              //执行d次的分配与重组
        for(j=0;j<=9;++j) bucket[j] = last[j] = NULL;   //清空口袋
        while(p!=NULL){     //执行一次分配
            k = p->data / base % 10;    //计算结点所在的口袋
            if(bucket[k]==NULL) bucket[k] = last[k] = p;
            else last[k] = last[k]->next = p;
            p = p->next;
        }
        p = NULL;
        for(j=9;j>=0;--j){  //执行重组
            if(bucket[j]==NULL) continue;
            if(p==NULL) p = bucket[j];
            else tail->next = bucket[j];
            tail = last[j];
        }
        tail->next = NULL;  //表尾置空
        base *= 10;         //为下一次分配做准备
    }
}
