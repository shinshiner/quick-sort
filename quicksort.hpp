void qsort(int* a, int l, int r)
{
	if (l >= r) return;
	int i = l, j = r, k = a[l];
	while (i<j)
	{
		while ((i<j) && (a[j] >= k)) --j;
		a[i] = a[j];
		while ((i<j) && (a[i] <= k)) ++i;
		a[j] = a[i];
	}
	a[i] = k;
	qsort(a, l, i - 1);
	qsort(a, i + 1, r);
}

//qsort(x, 0, n - 1);
