#include <stdio.h>

#define NO_OF_BITS 8
#define SIZE sizeof(int)*NO_OF_BITS

/* void bin_print(int n) {
 * int i = 0;
 * printf("Binary representation of %d, 0x%x : \t", n,n);
 * while (n) {
 *         if (n&1) {
 *                         printf("1");
 *                                 } else {
 *                                                 printf("0");
 *                                                         }
 *
 *                                                                 n=n>>1;
 *                                                                 }
 *                                                                 printf("\n");
 *                                                                 printf("x = 0x%x \n", x);
 *
 *                                                                 }
 *
 *                                                                 int reverse(int *num) {
 *
 *                                                                         int x,i,tmp = 0,tmp2 = 0 ;
 *                                                                                 x = ((sizeof(int)) * NO_OF_BITS) ;
        for (i=0; i<=x-1 ; i++) {
                 tmp = (1<<i);
                 tmp = tmp & (*num);
                 if (tmp)
                         tmp2 = tmp2 | 0x01;
                 if (i==(x-1)) continue ;
                 tmp2 = tmp2 << 1;
         }
         printf("tmp2 = 0x%8x\n", tmp2);
         //*num = tmp2 ;
				 //        num = &tmp2 ;
				 //                printf("*num = 0x%x , tmp2 = 0x%x \n", *num, tmp2);
				 //                        bin_print(tmp2);
				 //                        }
				 //                        */
				 //                        *
				 //
				 
*/
void reverse_bits(int n) {
int i = SIZE;
int x = 0;
printf("i = %d\n", i);
printf("Binary representation of %d, 0x%x : \n", n,n);
while (i) {
	x=x<<1;
	if (n&1) {
		    printf("1");
		        x = x|1 ;
	}  else {
		    printf("0");
		        x = x|0 ;
	}
	n=n>>1;
	i--;
}
printf("\n");
printf("x = 0x%x \n", x);
}


int rev_bits(int n) {

	int i = SIZE;
	int x = 0;

	while (i) {

		x=x<<1;
		if (n&1)  x = x|1 ;

		n>>=1;
		i--;
	}
	printf("x = 0x%x \n", x);

	return x ;
}
void print_bin( int n) {
	
	        //int *ptr, arr[SIZE] = { 0 } ;
		//        int arr[SIZE] = { 0 } ;
		//                char c_arr[SIZE] ;
		//                        int i = SIZE - 1 ;
		//
		//                                while (i>=0) {
		//
		//                                                if (n&1) arr[i] = 1;
		//                                                                n>>=1;
		//                                                                                i--;
		//                                                                                        }
		//
		//                                                                                                //ptr = arr;
		//                                                                                                        sprintf(c_arr, "%.32s\n", arr);
		//                                                                                                                printf("Binary Representation of num : %.32s\n", c_arr);
		//                                                                                                                        //printf("Binary Representation of num : %s\n", *ptr);
		//                                                                                                                        }
		//
		//
void main() {
	        int rev_num = 0 , reversed_num = 0;
		        scanf("0x%x",&rev_num);
			        printf("num : 0x%x\n", rev_num);
				        print_bin(rev_num);
					        //bin_print(rev_num);
						//        reverse_bits(rev_num);
						//                reversed_num = rev_bits(rev_num);
						//                        printf("Reversed num : 0x%x\n", reversed_num);
						//                        }
						//

