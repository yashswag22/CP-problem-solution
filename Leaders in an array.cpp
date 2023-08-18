bool checkArmstrong(int n){
	int m=n;
	int sum=0;
	string s = to_string(n);
	int k = s.size();
	while(m>0)
	{
		int temp = (m%10);
		sum += pow(temp,k);
		m=m/10;
	}
	if(sum==n)
	return true;
	else
	return false;
}
