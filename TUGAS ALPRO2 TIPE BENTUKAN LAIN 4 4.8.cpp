#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main () {
	struct hitung {
		int x [4];
		int y [4];
	}z;
	int i;
	
	for (i=0;i<3;i++){
		z.x[i]= i + 1;
		z.y[i]= (i+1)*100;
	}
	for(i=0;i<3;i++){
		cout<<"z.x["<<i<<"] ="<<z.x[i]<<endl;
		cout<<"z.y["<<i<<"] ="<<z.y[i]<<endl;
	}
	return 0;
}
