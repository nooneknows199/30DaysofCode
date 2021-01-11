#include<iostream>
using namespace std;
int main()
{
    int n,i,k,j,temp,pos;
    cout<<"enter the size of the array :";
    cin>>n;
    cout<<"enter no of rotation in array u want to perform: ";
    cin>>k;
    int a[n];
    cout<<"enter the elements in array:";
    for(i=0;i<n;i++)
        cin>>a[i];
        for(j=1;j<=k;j++){
            temp=a[0];
            for(i=0;i<n-1;i++){
                a[i]=a[i+1];
            }
            a[i]=temp;
        }
        cout<<"array after rotation: ";
        for(i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
        cout<<"\nprint the element:";
        cin>>pos;
        cout<<a[pos];
        return 0;
        }

Or 

#include<iostream>
using namespace std;
int main()
{
    int n,i,d;
    cout<<"enter the size of the array :";
    cin>>n;
    cout<<"enter no of rotation in array u want to perform: ";
    cin>>d;
    int a[n];
    cout<<"enter the elements in array:";
    for(i=0;i<n;i++)
        cin>>a[i];

        cout<<"array after rotation: ";
        for(i=0;i<n;i++){
        cout<<a[(i+d)%n]<<" ";
        }
        return 0;
        }
        
