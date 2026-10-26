 Print all subarrays with 0 sum

   A.
   Requirements:  Given an integer array, print all subarrays with zero-sum.

   B. Algorithms:
   
    Using two variable i and j, for every i from 0 to n-1, calculate the sum of all the
    elements from index i using j and each time compare the sum with zero, if they match then print
    the subarray from i to j and continue.

   Test case:
   
   1.
   Input:

                 a[]={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
                 n=6

   Output:

                  3 4 -7
                  3 4 -7 3 1 3 1 -4 -2 -2 
                  4 -7 3 
                  -7 3 1 3 
                  3 1 3 1 -4 -2 -2 
                  3 1 -4
         
   2.
   Input:

                 a[]={15,-40,36,37,-5,-100,32,97,98,-74}
                 n=10
         
   Output:

                 a[]=36 37 -5 -100 32
         
   3.
   Input:

                 { 4, 2, -3, -1, 0, 4 } 
                 n=10
         
   Output:

                  -3 -1 0 4
                  0
   
