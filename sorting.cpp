#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		int n;
		cin>>n;
		int a[n],j,k=0,l=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		while(1)
		{l=0;
			int h=sizeof(a)/sizeof(a[0]);
			sort(a,a+h);
			for(j=0;j<n;j++)
			{
			
			if(a[j]==a[j+1])
			{
			a[j+1]=a[j+1]+a[j];
        }
			else
            if(a[j]!=a[j+1])
         {
		    l++;
	}
}
	if(l==n)
	break;
	else
			k++;
			
		}
		cout<<k<<endl;
		
	}
}
