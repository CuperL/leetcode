class Solution {
public:
    string addBinary(string a, string b) {
     
	int i = a.size() - 1, j = b.size() - 1;
	string su;

	bool flag = false;
	while (i >= 0 && j >= 0)
	{
		int t = (a[i] - '0') + (b[j] - '0');
		if (flag) { t++; flag = false; }
		if (t > 1)
		{
			t -= 2;
			flag = true;
		}
		su += (char)(t + '0');
		i--;
		j--;

	}

	while (i >= 0)
	{
		int p = (a[i] - '0');
		if (flag) 
		{
			p++; 
			flag = false;
		}
		if (p > 1)
		{
			p -= 2;
			flag = true;
		}
		su += (char)(p + '0');
		i--;
		
	 }
	while (j >= 0)
	{
		int p = (b[j] - '0');
		if (flag)
		{
			p++;
			flag = false;
		}
		if (p > 1)
		{
			p -= 2;
			flag = true;
		}
		su += (char)(p + '0');
		j--;

	}
        if(flag) 
        {
            int q=1;
            su+=(char)(q+'0');
        }
	reverse(su.begin(), su.end());

        return su;
        
    }
};
