3.Find the time complexity of this problem:
for(int i=0;i<i*1;i++)
{
for(j=n;j>1;j=j/2)
{
for(int k=1;k<n;k*=2)
{ .... } .... }..... }


//first loop : it will never execute so complexity 

// second loop

// n/1, n/2 , n/4 , n/8

// n/2^i > 1

// n > 2^i 
// log n > i log2 
// i<log n

// O(LOG N)


// for third loop 

// 1 ,2 ,4, 8 ,16

// 2^i <  n
// i log 2 < log n

// i < log n

// O(LOG N)






// final complexity =0 

// 0*logn*logn==00
// 0

//because firstloop never execute so inner loop never executed





