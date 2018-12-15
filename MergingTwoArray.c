/* Merge two array (arrays are sequent) to third array (result array should be sequent) */
#include<stdio.h>
#define a_SIZE 5
#define b_SIZE 5

int main() {
	
	int a[a_SIZE] = {1,3,7,11,13};
	int b[b_SIZE] = {2,4,6,10,14};
	int c[a_SIZE + b_SIZE];
	int i, a_index = 0, b_index = 0;
	
	for(i = 0; i<a_SIZE + b_SIZE; i++) {
		if(a_index == a_SIZE) {
			c[i] = b[b_index];
			b_index++;
		}  
        else if(b_index == b_SIZE) {
        	c[i] = a[a_index];
            a_index++;
		}  
        else {
            if(a[a_index] < b[b_index]) {
            	c[i] = a[a_index];
                a_index++;
			} 
            else {
            	c[i] = b[b_index];
            	b_index++;
			}
        }   
	}

	for(i=0; i<a_SIZE + b_SIZE; i++) {
		printf("%d ", c[i]);
	}
        
	return 0;

}
