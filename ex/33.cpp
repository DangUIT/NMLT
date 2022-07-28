#include <iostream>
#include <time.h>
using namespace std;

void tt1(int* a, int n){
    int maxSum = 0;
    clock_t start,end; 
        double time_use;
    start = clock();    
    for(int i = 0; i < n; i++ )
    	for(int j = i; j < n; j++ ) {
    		int thisSum = 0;
    		for(int k = i; k <= j; k++ )
    			thisSum += a[ k ];
    		if (thisSum > maxSum)
	    		maxSum = thisSum;
	    }
    end = clock();
    time_use=(double)(end-start)/ CLOCKS_PER_SEC;
    cout<<"Tong lon nhat cua cac day con: "<<maxSum;
    cout<<"\nThoi gian chay chuong trinh tt1: "<<time_use;
}

void tt2(int* a, int n){
    int maxSum = 0;
    clock_t start,end;
        double time_use;
    start = clock();
    for( int i = 0; i < n; i++ ){
	    int thisSum = 0;
	    for( int j = i; j < n; j++ ) {
	    	thisSum += a[ j ];
	    	if( thisSum > maxSum )
	    		maxSum = thisSum;
	    }
    }    
    end = clock();
    time_use = (double)(end-start)/ CLOCKS_PER_SEC;
    cout<<"\nTong lon nhat cua cac day con: "<<maxSum;
    cout<<"\nThoi gian chay chuong trinh tt2: "<<time_use;
}

void tt4(int* a, int n){
    int maxSum=0, thisSum=0;
    clock_t start,end;
        double time_use;
    start = clock();
    for(int i=0; i< n; i++){
        thisSum+= a[i];
        if(thisSum>maxSum)
            maxSum=thisSum;
        else if(thisSum<0)
            thisSum=0;
    }
    end = clock();
    time_use = (double)(end-start)/ CLOCKS_PER_SEC;
    cout<<"\nTong lon nhat cua cac day con: "<<maxSum;
    cout<<"\nThoi gian chay chuong trinh tt4: %.6lf "<<time_use;
}

int main(){
    int n, *c;
    cout<<"So phan tu cua chuoi: ";cin>>n;
    c= new int[n];
    for(int i=0; i<n; i++)
        c[i]=rand();
    tt1(c,n);
    tt2(c,n);
    tt4(c,n);
    return 0;
}