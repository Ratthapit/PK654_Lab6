#include<iostream>
using namespace std;

int main(){	
    int x=1;
    int Even=0;
    int Odd=0;
    
    while(x>0){
		int n;
    	cout << "Enter an integer: ";
    	cin >> n;
		
		if(n!=0){		
    		if(n%2==0){
    			Even++;
			}
			if(n%2==1){
				Odd++;
			}
		}
		
		if(n==0){
			cout << "#Even numbers = "<< Even <<"\n";
    		cout << "#Odd numbers = "<< Odd;
    	
    		return 0; 
		}
	}	  	
}