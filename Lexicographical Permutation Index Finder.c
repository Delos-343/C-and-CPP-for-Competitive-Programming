/***
 *      ____  _____ ____  __  __ _   _ _____  _  _____ ___ ___  _   _
 *     |  _ \| ____|  _ \|  \/  | | | |_   _|/ \|_   _|_ _/ _ \| \ | |
 *     | |_) |  _| | |_) | |\/| | | | | | | / _ \ | |  | | | | |  \| |
 *     |  __/| |___|  _ <| |  | | |_| | | |/ ___ \| |  | | |_| | |\  |
 *     |_|   |_____|_| \_\_|  |_|\___/  |_/_/   \_\_| |___\___/|_| \_|
 *      _____ _____ ____ _____
 *     |_   _| ____/ ___|_   _|
 *       | | |  _| \___ \ | |
 *       | | | |___ ___) || |
 *       |_| |_____|____/ |_|
 *
 *     By Muhammad Fatih Akbar, for personal gain.
 *     This Program is to find the index of a permutation
 *     from a list of lexicographical permuations.
 */

#include <stdio.h>

void removeArrElement(int arr[],int n,int index){
	if(index<0 || index>n){
        puts("Error! cant remove element, Out of range");
		return;
    }else{
        for(int i=index; i<n-1; i++)
            arr[i] = arr[i + 1];
    }
}

int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void subtractAbove(int arr[],int n,int f_digit){
	for(int i=1; i<n; i++){
		if(arr[i] > f_digit)
			arr[i] -=1;
	}
}

int getIndexPermutation(int arr[],int n){
	int f_digit, x = 0;
	do{
		f_digit = arr[0];
		x += (f_digit - 1) * factorial(n-1);
		subtractAbove(arr,n,f_digit);
		removeArrElement(arr,n,0);
		n--;
	}while(n>0);
	return x;
}

int main(){
	int i,n;
	puts("> Insert numbers of elements:");
	scanf("%d",&n);
	int m[n];
	puts("> Insert elements, use 1 to n from smallest to largest.");
	puts("  example the permutation is 34 2 340 23 44.");
	puts("  you write : 3 1 5 2 4");
	puts("");
	for(i=0;i<n;i++)
		scanf("%d",&m[i]);
	printf("\n> That can be found on the %dth index\n",getIndexPermutation(m,n));
	return 0;
}
