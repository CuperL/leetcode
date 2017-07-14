class Solution {
public:
    int reverse(int x) {
 	int i,j;	
    int s[10];
    int sum=0;
    bool q=false;
    if(x<0)
    {
        x=-x;
        q=true;
    }
    if(x==0||x==-2147483648) return sum;    
        int k;
	for(k=1;;k++)
	{
		if(x/pow(10,k)<1) break;
	}
    for(i=0;;i++)
    {
        if(x==0) break;
        s[i]=x%10;
        x=x/10;
	
    }
	if(k==10)
	{
		int max[10],maxi=pow(2,31)-1;
		for(i=0;i<10;i++)
		{
			max[i]=maxi%10;
			maxi=maxi/10;
		
		}
		
		bool ma=false;
		for(i=0;i<10;i++)
		{
			if(max[9-i]<s[i]) {ma=true;break;}
            else if(max[9-i]>s[i]) break;
		}
		if(ma) return sum;
        
	}

    for(j=0;j<k;j++)
    {
        sum=sum*10+s[j];
		if(sum==0) cout<<"0";
    }
   
    if(q) sum=-sum;
    return sum;}
};
