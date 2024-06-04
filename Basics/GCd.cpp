#include<iostream>
using namespace std;
int main(){
	int n1=77,n2=54,gcd=1;
	for(int i=1;i<=n1||i<=n2;i++){
		if(n1%i==0 && n2%i==0)
		gcd=i;
	}
	cout<<"gcd  of"<<n1<<"and" <<n2<< "is" <<gcd;
}
/*
int main()
{
    int n1 = 104, n2 = 24, gcd = 1;
    
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    
    cout<<"The GCD : "<<n1;
    
    return 0;
}
*/
