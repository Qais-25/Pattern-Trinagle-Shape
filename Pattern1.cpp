#include <iostream>
using namespace std;

void NumberPrint (int limit){
	for (int i=0; i<=limit;i++){
		for(int j=1; j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}


int main (){
	int b;
	cin>>b;
	NumberPrint(b);
	return 0;
}
