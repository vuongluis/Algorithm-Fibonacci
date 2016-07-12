#include <stdio.h>
#include <conio.h>
void printFibonacci(int n);
int main(){
	int n;
	printf("Nhap gia tri n: "); scanf("%d",&n);
	printFibonacci(n);
}
void printFibonacci(int n){
	/** - xet giong bai so nguyen to **/
	if(n == 2){
		printf("1 1");
	}else if(n > 2){
		int f0 = 1,f1 = 1,f2;
		printf("1 1 ");
		while(true){
			f2 = f0 + f1;
			f0 = f1;
			f1 = f2;
			if(f2 >= n){
				break;
			}
			printf("%d ",f2);
		}
	}
}
