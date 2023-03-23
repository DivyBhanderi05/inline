#include<iostream>

using namespace std;

int sum(int a , int b){
	return a+b;
}
int sub(int a , int b){
	return a-b;
}
int multi(int a , int b){
	return a*b;
}
int div(int a , int b){
	return a/b;
}
int mod(int a , int b){
	return a%b;
}

int main(){
	int m,n,result;
	char q;
	up:
	cout<<"Enter 1st digit : ";
	cin>>m;
	
	cout<<"Select operator : +,-,*,/,% : ";
	cin>>q;	

	cout<<"Enter 2nd digit : ";
	cin>>n;
	
	
	
	switch(q){
		case '+':
			result = sum(m,n);
			break;
		case '-':
		    result = sub(m,n);
		    break;
		case '*':
			result = multi(m,n);
			break;
		case '/':
			result = div(m,n);
			break;
		case '%':
			result = mod(m,n);
			break;		     
	}
	cout<<m<<" "<<q<<" "<<n<<" = "<<result<<endl;
	goto up;
	return 0;
}
