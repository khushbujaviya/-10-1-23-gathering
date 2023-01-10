 //find factorial of number using recursion
 
 
 #include<stdio.h>
 int fact(int a)
 {
 	if(a>=1)
 	{
 		return a*fact(a-1);
	 }
	 else
	 {
	 	return 1;
	 }
 }
 int main()
 {
 	int n;
 	int z;
 	printf("enter value:");
 	scanf("%d",&n);
 	z=fact(n);
 	printf("factoriol: %d",z);
 	return 0;
 }
