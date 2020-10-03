#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    for(int i=0;i<40;i+=2)
    {

	    float a;
	    a=float(i);
	    int b;
        cout<<i<<" "; 
	    b=ceil(a/2);
	    if(b%2!=0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<b/2+1<<endl;
        }
    }
}