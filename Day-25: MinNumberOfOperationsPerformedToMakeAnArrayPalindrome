#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}

int PalinArray(int a[], int n){
for(int i=0;i<n;i++){
    int ans =0;
    int temp = a[i];
    while(temp>0){
        int rem = temp %10;
        temp/= 10;

        ans= (ans*10)+rem;
    }

    if(ans!=a[i])
        return 0;
}
return 1;
}
