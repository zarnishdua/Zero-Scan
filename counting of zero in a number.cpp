#include <iostream>
using namespace std;
int main(){
	int n;
	int count=0;
	int lastdigit;
	cout<<"Enter your number :";
	cin>>n;
    while(n>0)	{
             lastdigit=n%10;
	         if(lastdigit==0)
	         count++;
             n=n/10;
         }
	cout<<"This number has "<<count<<" Zero";
	return 0;
}
