#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin >> s;
		int n=s.length();
		int b[n];
		int x,y,c=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='1')
			{
				c++;
			}
			b[i]=1;
		}
		
		if(c==0)
		{
			cout<<"LOSE"<<endl;
		}
		else
		{
			for (int i = 0; i < n; ++i)
			{
				if(s[i]=='1')
				{
					x=i;
					break;
				}
			}
			for (int i = 0; i < n; ++i)
			{
				if(s[n-1-i]=='1')
				{
					y=n-1-i;
					break;
				}
			}
			for (int i = 0; i < n; ++i)
			{
				if(s[i]=='1'&& b[i]==1)
				{
					b[i]=0;
					if(i>=1)
					{
						if(s[i-1]=='0')
							s[i-1] = '1';
						else
							s[i-1]='0';
						//cout<<s[i-1]<<
					}
					if(i+1<n)
					{
						if(s[i+1]=='0')
							s[i+1] = '1';
						else
							s[i+1]='0';
					}
				}
			}
			for (int i = 0; i < n; ++i)
			{
				if(s[i]=='1'&& b[i]==1)
				{
					b[i]=0;
					if(i>=1)
					{
						if(s[i-1]=='0')
							s[i-1] = '1';
						else
							s[i-1]='0';
						//cout<<s[i-1]<<" "<<i<<endl;
					}
					if(i+1<n)
					{
						if(s[i+1]=='0')
							s[i+1] = '1';
						else
							s[i+1]='0';
					}
				}
			}
			int h=0;
			for (int i = x; i <=y; ++i)
			{
				if(s[i]=='0' && b[i]==1)
				{
					h=1;
				}
			}
			
			if(h==0)
			{
				cout<<"WIN"<<endl;
			}
			else
			{
				cout<<"LOSE"<<endl;
			}
		}
	}
}