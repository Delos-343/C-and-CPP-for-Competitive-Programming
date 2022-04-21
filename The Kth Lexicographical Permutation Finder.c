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
 *     This Program is to create the k-th permuatation
 *     of an lexicographical permuation.
 */

#include <stdio.h>

void removeArrElement(int arr[],int n,int index){
	index +=1;
	if(index<0 || index>n){
        puts("Error! cant remove element, Out of range");
		return;
    }else{
        for(int i=index-1; i<n-1; i++)
            arr[i] = arr[i + 1];
    }
}

int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void printKthPermutation(int arr[],int n,int k){
	int i,a,b,index[n];
    for(i=1;i<=n;i++){
        index[n-i] = k%i;
        //printf("%d <- %d = %d\n",k,i,k%i);
        k = k/i;
    }
    puts("");
    for(i=0;i<n;i++){
        printf("%d ",arr[index[i]]);
        removeArrElement(arr,n,index[i]);
    }
}

void insertionSort(int arr[], int n){
   int i, key, j;
   for (i = 1; i < n; i++) {
      key = arr[i];
      j = i-1;

      while (j >= 0 && arr[j] > key) {
         arr[j+1] = arr[j];
         j = j-1;
      }
      arr[j+1] = key;
   }
}

int main(){
	int i,n,k;
	puts("> Insert numbers of elements:");
	scanf("%d",&n);
	int arr[n],sortedArr[n];
	puts("> Insert elements (sorted):");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
    insertionSort(arr,n);

	puts("> Insert desired K:");
	scanf("%d",&k);
	printf("> The %dth permuatation is \"",k);
	printKthPermutation(arr,n,k-1);
	printf("\"\n");

	return 0;
}

