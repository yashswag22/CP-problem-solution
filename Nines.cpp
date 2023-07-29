int nines(int n, vector<int> &a, int k) {
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==9)
        count++;
    }
    if(count >= k)
    return 1;
    else
    return 0;
}
