//1. C program to check whether the given number is even or odd

//answer
#include <stdio.h>
int main() {
    int num;
    printf("input number: ");
    scanf("%i",&num);
    if(num%2 ==0){
        printf("Number is even");
    }else{
        printf("Number is odd");
    }

    return 0;
}

//_______________________________________________________

//2. C program to convert the temperature in Degree Celsius to Fahrenheit
//tip: F = C x (9/5)+32 

//answer
#include <stdio.h>
int main() {
    int C, F;
    printf("input gradus celsius: ");
    scanf("%i",&C);
    F = (C *9/5) + 32;
    printf("%i celsius gradus is %i Farenheit",C,F);

    return 0;
}

//_______________________________________________________

//3. C program to find the area of a triangle whose three sides are given
//tip: A = √[p(p-a)(p-b)(p-c)] where s is semi-perimeter

//answer
#include <stdio.h>
#include <math.h>
int main() {
    float A,p,a,b,c;
    printf("input a, b, c triangle sides: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        p = (a+b+c)/2;
        A=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Sides are: %.1f %.1f %.1f\n semi-perimeter = %.2f\n Area = %.2f",a,b,c,p,A);
    }else if(a+b<c || b+c<a || a+c<b){
        printf("Error!!!");
    }
    

    return 0;
}

//_______________________________________________________

//4.C program to find the circumference and area of a circle with a given radius
//tip: S = pi*r^2   L = 2pi*r

//answer
#include <stdio.h>
#include <math.h>
int main() {
    double S,L,r;
    float pi = 3.14;
    printf("input radius of the circle: ");
    scanf("%lf",&r);
    if(r>0){
        S = pi* pow(r,2);
        L = 2*pi*r;
        printf("Radius is: %lf\nArea of the circle is: %lf\nCircumference is: %lf ",r,S,L);
    }else if(r<0 || r==0){
        printf("Error!!!");
    }
    

    return 0;
}
//_______________________________________________________

//5.C program to check whether the given integer is a multiple of 5

//answer
#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("input number: ");
    scanf("%i",&num);
    if(num%5 ==0){
        printf("%i is multiply of 5 ",num);
    }else if(num%5 !=0){
        printf("%i is not multiply of 5",num);
    }
    

    return 0;
}
//_______________________________________________________

//6.C program to check whether the given integer is a multiple of both 5 and 7

//answer
#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("input number: ");
    scanf("%i",&num);
    if(num%5 ==0 && num%7==0){
        printf("%i is multiply of both 5 and 7 ",num);
    }else if(num%5 !=0 && num%7 !=0){
        printf("%i is not multiply of both 5 and 7",num);
    }
    

    return 0;
}
//_______________________________________________________

//7.C program to find the average of 5 numbers using while loop

//answer
#include <stdio.h>
#include <math.h>
int main() {
    int sum=0,count=0;
    while(count<5){
        printf("Enter integer: \n");
        int number;
        scanf("%i",&number);
        sum = sum+number;
        count++;
    }
    int avg;
    avg = sum/count;
    printf("average of the numbers is: %i",avg);
    

    return 0;
}
//_______________________________________________________

//8.C program to display the given integer in a reverse manner

//answer
#include <stdio.h>

int main() {
  int myNumber;
  printf("Enter a number: ");
  scanf("%d",&myNumber);

  int rev = 0;
  while(myNumber!=0){
    int digit = myNumber%10;
    rev = (rev*10)+digit;
    myNumber = myNumber/10;
  }
  printf("The reverse of the number is %d \n",rev);
  
  return 0;
}
//_______________________________________________________
// 9.Counts the number of even numbers in the range 5 to 27.

//answer
#include <stdio.h>

int main() {
    int x=6;
    int count=0;
    while(x>=5 && x<=27){
        count++;
        printf("%d\t",x);
        x+=2;
        
    }
    printf("\ncount of numbers: %d",count);    
        
    return 0;
}

//_______________________________________________________

// 10.Add even numbers in the range 10 to 20.

//answer
#include <stdio.h>

int main() {
    int x=10;
    int s=0;
    while(x>=10 && x<=20){
        s=s+x;
        printf("%d\t",x);
        x+=2;
        
    }
    
    printf("\ncount of numbers: %d",s);    
        
    return 0;
}

//_______________________________________________________

// 11.Count the number of multiples of 8 in the range 20 to 50.

//answer
#include <stdio.h>

int main() {
    int x=20;
    int s=0;
    int count =0;
    
    while(x>=20 && x<=50){
        s=x%8;
        if(s==0){
            printf("\n%d",x);
            count++;
        }
        x++;
        
    }
    
    printf("\ncount of numbers: %d",count);    
        
    return 0;
}
//_______________________________________________________

// 12.Find the sum of numbers from 10 to 70 that are not multiples of 8.

//answer
#include <stdio.h>

int main() {
    int x=10;
    int s=0;
    int sum =0;
    
    while(x>=10 && x<=70){
        s=x%8;
        if(s!=0){
            printf("\n%d",x);
            sum = sum +x;
        }
        x++;
        
    }
    
    printf("\ncount of numbers: %d",sum);    
        
    return 0;
}

//_______________________________________________________

// 13.Write a program that adds multiples of 3 from 14 to 29 in the range.

//answer
#include <stdio.h>

int main() {
    int x=10;
    int s=0;
    int sum =0;
    
    while(x>=10 && x<=70){
        s=x%3;
        if(s==0){
            printf("\n%d",x);
            sum = sum +x;
        }
        x++;
        
    }
    
    printf("\ncount of numbers: %d",sum);    
        
    return 0;
}

//_______________________________________________________

// 14.C program to find the geometric mean of n numbers
//tip:geometric mean formula is c=√(ab)

//answer
#include <stdio.h>
#include <math.h>
double x = 0;
double y=1;
int count = 0;
int testnum = 0;
int main() {
    printf("Write how much numbers are involved in: ");
    scanf("%d",&count);
    
    while (count>testnum){
        printf("write number:");
        scanf("%lf",&x);
        testnum++;
        y=y*x;
    }
    
    printf("geometric mean is %lf",sqrt(y));

    return 0;
}
//__________________________________________________________

// 15. C program to find the sum of the digits of an integer using a while loop

//answer
#include <stdio.h>

int main() {
    int num, sum =0;
    printf("insert integer: ");
    scanf("%d",&num);
    while(num != 0){
        int digit = num % 10;
        sum = sum+digit;
        num = num/10;
    }
    printf("sum of the digits of an integer is : %d",sum);

    return 0;
}

//__________________________________________________________

// 16. C program to display all the multiples of 3 within the range 10 to 50

//answer
#include <stdio.h>

int main() {
    int num=3, start=10;
    
    while(start>=10 && start<=50){
        if(start % num ==0){
            printf("%d\n",start);
        }
        start++;
    }

    return 0;
}

//__________________________________________________________

// 17. C program to display all integers within the range 100-150 whose sum of digits is an even number

//answer
#include <stdio.h>

int main() {

  for(int i=100;i<150;i++){
    int num = i;
    int sum = 0;
    while(num!=0){
      int digit = num%10;
      sum = sum + digit;
      num = num/10;
    }
    
    if(sum%2==0){
      printf("%d \n",i);
    }
  }
  
  return 0;
}

//__________________________________________________________

// 18. y=3x^4 - 5x^3 -x^2 -6x -3 ; x>= -2 && x<= 5.8 and x is changing with   h=0.02 steps. 
// what is arithmetic mean of the function?

//answer
#include <stdio.h>
#include <math.h>

int main() {
    float y,x = -2,h = 0.02, sum = 0, aritmetic_mean;
    int count = 0;
    
    while(x>=-2 && x<=5.8){
        y=5*pow(x,3) - pow(x,2) - 6*x -3;
        x = x+h;
        sum = sum + y;
        count ++;
    }
    aritmetic_mean = sum / count;
    printf("this is aritmetic mean %f",aritmetic_mean);
    

    return 0;
}

//__________________________________________________________

// 19. y=cosx and x is changing with h=0.02 steps. what is y?

//answer
#include <stdio.h>
#include <math.h>

int main() {
    float y,x = -2,h = 0.1;
    int count = 0;
    
    while(x>=-10 && x<=25){
        y=cos(x);
        x = x+h;
        printf("y = %f\n",y);
    }

    return 0;
}

//__________________________________________________________


// 20.Calculate ln2 (Taylor series) susing a while or do-while loop
//tip: ln2 = 1 -1/2 +1/3 -1/4 +1/5 -1/6 ...

//answer
#include <stdio.h>

int main() {
  double ln2 = 0;
  int i = 1;
  do {
    if (i % 2 == 1) {
      ln2 += 1.0 / i;
    } else {
      ln2 -= 1.0 / i;
    }
    i++;
  } while (i <= 100);
  printf("ln2 = %f\n", ln2);
  return 0;
}

//__________________________________________________________

//21. calculate the value of pi/4 (Taylor series) using a while or do-while loop in C
//tip pi/4 = 1 -1/3 +1/5 -1/7 +1/9 ...

//answer
#include <stdio.h>

int main() {
  double piBy4 = 0;
  int divisor = 1;
  do {
    if (divisor % 4 == 1 ) {
      piBy4 += 1.0 / divisor;
      printf(" 1/%i ",divisor);
    } else if(divisor% 4 == 3) {
      piBy4 -= 1.0 / divisor;
      printf(" 1/%i ",divisor);
    }
    divisor += 2;
  } while (divisor <= 100);
  printf("\npi/4 = %lf", piBy4);

  return 0;
}

//__________________________________________________________

//22. calculate the value of pi^2/6 (Taylor series) using a while or do-while loop in C
//tip pi^2/6 = 1 + 1/2^2 + 1/3^2 +1/4^2 ...

//answer
#include <stdio.h>
#include <math.h>

int main() {
  double pipiBy6 = 0,finalResult=0;
  int divisor = 1;
  while(divisor <= 100){
      pipiBy6 = 1/pow(divisor,2);
      printf(" 1/%i^2 ",divisor);
      finalResult += pipiBy6;
      divisor++;
  }
  printf("\n pi^2/6 = %lf",finalResult);

  return 0;
}

//__________________________________________________________

//23. calculate the value of pi^2/8 (Taylor series) using a while or do-while loop in C
//tip pi^2/8 = 1 + 1/3^2 + 1/5^2 +1/7^2 ...

//answer
#include <stdio.h>
#include <math.h>

int main() {
  double pipiBy8 = 0,finalResult=0;
  int divisor = 1;
  while(divisor <= 100){
      pipiBy8 = 1/pow(divisor,2);
      printf(" 1/%i^2 ",divisor);
      finalResult += pipiBy8;
      divisor+=2;
  }
  printf("\n pi^2/8 = %lf",finalResult);

  return 0;
}

//__________________________________________________________

//24. calculate the value of ln(1+x) (Taylor series) using a do-while loop in C
//tip ln(1+x) = x - x^2/2 + x^3/3 - x^4/4 +x^5/5 ...

//answer
#include <stdio.h>
#include <math.h>

int main() {

  int x, n = 1;
  double ln_1plusx = 0;
  printf("insert integer: ");
  scanf("%d",&x);

  do {
    if (n % 2 == 1) {
      ln_1plusx += pow(x, n) / n;
      printf(" %d^%d/%d ", x, n, n);
  } else {
      ln_1plusx -= pow(x, n) / n;
      printf(" %d^%d/%d ", x, n, n);
  }
  n++;
  } while (n<=10);

  printf("\nln(1+x) = %f", ln_1plusx);

  return 0;
}

//__________________________________________________________

//25. calculate the value of arctgx (Taylor series) using a do-while loop in C
//tip arctgx= x - x^3/3 + x^5/5 - x^7/7 +x^9/9 ...

//answer
#include <stdio.h>
#include <math.h>

int main() {

  int num, n = 1;
  double arctgx = 0;
  printf("insert integer: ");
  scanf("%d",&num);

  do {
    if (n % 4 == 1) {
      arctgx += pow(num, n) / n;
      printf(" +%d^%d/%d ", num, n, n);
  } else {
      arctgx -= pow(num, n) / n;
      printf(" -%d^%d/%d ", num, n, n);
  }
  n+=2;
  } while (n<=15);

  printf("\narctgx = %f", arctgx);

  return 0;
}

//__________________________________________________________

//26. calculate the value of 1/(1+x) (Taylor series) using a do-while loop in C
//tip 1/(1+x)= 1 -x +x^2 -x^3 + x^4 -x^5 ...

//answer
#include <stdio.h>
#include <math.h>

int main() {

  int x, n = 1;
  int oneToOnePlusX = 1;
  printf("insert integer: ");
  scanf("%d",&x);
  printf("%d",oneToOnePlusX);   
  do {
    if (n % 2 == 1) {
      oneToOnePlusX -= pow(x, n);
      printf(" -%d^%d ", x, n);
  } else {
      oneToOnePlusX += pow(x, n);
      printf(" +%d^%d ", x, n);
  }
  n++;
  } while (n<=5);

  printf("\n1/(1+x) = %d", oneToOnePlusX);

  return 0;
}

//__________________________________________________________

//27. calculate the value of 1/(1-x) (Taylor series) using a do-while loop in C
//tip 1/(1-x)= 1 +x +x^2 +x^3 + x^4 +x^5 ...

//answer
#include <stdio.h>
#include <math.h>

int main() {

  int x, n = 1;
  int oneToOneMinusX = 1;
  printf("insert integer: ");
  scanf("%d",&x);
  printf("%d",oneToOneMinusX);   
  do {
      oneToOneMinusX += pow(x, n);
      printf(" +%d^%d ", x, n);
      n++;
  }while (n<=5);

  printf("\n1/(1+x) = %d", oneToOneMinusX);

  return 0;
}

//__________________________________________________________

// 28. Write a list of numbers from 1 to 10, their sum and product using a For loop

//answer
#include <stdio.h>

int main() {
    int x, sum,mult=1;
    for(x=1;x<=10;x++){
        sum +=x;
        mult *=x;
        printf("%d\n",x);    
        
    }
    printf("sum = %d \nmultiplication = %d",sum,mult);

    return 0;
}
//__________________________________________________________

//29. create a sand clock pattern in C using nested for loops.

//answer
#include <stdio.h>

int main() {
    int count;
    printf("Enter the count of '*' characters: ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Invalid input. Count should be greater than 0.\n");
    }

    for (int i = count; i >= 1; i--) {
        
        for (int j = 1; j <= count - i; j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 2; i <= count; i++) {
        for (int j = 1; j <= count - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j < i) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
//__________________________________________________________

//30. Write a program that assigns any values to the elements of the array A=(A0, A1,...,A10),
//calculates the half sum of the positive elements and the arithmetic mean of the negative elements.

//answer
#include <stdio.h>

int main() {
    int A[11] ;
    int min = -100;
    int max = 100;
    int sum = 0;
    int sumNegative=0;
    int count = 0;
    for (int i = 0; i<sizeof(A)/sizeof(A[0]); i++) {
        A[i] = rand() % (max - min + 1) + min;
    }
    for(int i= 0;i<sizeof(A)/sizeof(A[0]);i++){
        
        printf("A element is %d\n", A[i]);
        if (A[i]>0){
            sum += A[i];
           
        }
        else if(A[i]<0){
            count++;
            sumNegative +=A[i];
        }
        
    }
    printf("half sum of positive numbers = %d\n",sum/2);
    printf("arithmetic mean of negative numbers = %d\n",sumNegative/count);
    

    return 0;
}

//__________________________________________________________

//31. Write a program that assigns the elements of the array B=(B0, B1,...,B13) 
//to odd values starting from one in ascending order 
//and prints the resulting array along with the corresponding histogram.

//answer
#include <stdio.h>

int main() {
    int B[14] ;
    int oddValue = 1;
    
    printf("array of B:\n");
    for(int i= 0;i<sizeof(B)/sizeof(B[0]);i++){
        B[i] = oddValue;
        oddValue += 2;
        printf("B%d = %d\n", i, B[i]);
    }
    printf("Histogram of elements:\n");
    for(int i= 0;i<sizeof(B)/sizeof(B[0]);i++){
        printf("B%d: ",i);
        for(int j=0;j<B[i];j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

//__________________________________________________________

//32. Write a program that will find the element with the largest value among the positive elements of the array A=(A0, A1,...,A19) 
//and the largest element among the elements with a negative value.

//answer
#include <stdio.h>

int main() {
    int A[20] ;
    int min = -100;
    int max = 100;
    
    printf("Array A:\n");
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        A[i] = rand() % (max - min + 1) + min;
        printf("A%d: %d\n", i, A[i]);
    }
    int largest_positive = 1;
    int largest_negative=-1;
    
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++){
        if (A[i] > largest_positive){
            largest_positive = A[i];
        }
    }
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++){
        if (A[i] < largest_negative){
            largest_negative = A[i];
        }    
    }
    if (largest_positive > 0) {
        printf("Largest positive element: %d\n", largest_positive);
    } else {
        printf("No positive elements found in the array.\n");
    }

    if (largest_negative < 0) {
        printf("largest negative element: %d\n", largest_negative);
    } else {
        printf("No negative elements found in the array.\n");
    }
    return 0;
}

//__________________________________________________________

//33.Write a program that calculates the product of the even-indexed elements and 
//the sum of the cubes of the odd-indexed elements of the array M=(M0, M1,...,M12).

//answer
#include <stdio.h>

int main() {
    int M[13] ;
    int min = -100;
    int max = 100;
    int product =1;
    int sum = 0;
    
    printf("Array M:\n");
    for (int i = 0; i < sizeof(M) / sizeof(M[0]); i++) {
        M[i] = rand() % (max - min + 1) + min;
        printf("M%d: %d\t", i, M[i]);
        printf("index: %d\n",i);
        if(i%2 == 0){
            product *= M[i];
        }else if(i%2 == 1){
            sum += M[i];
        }
    }
    printf("Sum of the odd-indexed elements is - %d\n",sum);
    printf("Product of the even-indexed elements is - %d",product);
    
    return 0;
}

//__________________________________________________________

//34.Write a program that calculates the product of the largest and smallest elements
// in module of the array N=(N0, N1,...,N10).

//answer
#include <stdio.h>

int main() {
    int N[11] ;
    int min = -100;
    int max = 100;
    int smallest,highest;
    
    printf("Array N:\n");
    for (int i = 0; i < sizeof(N) / sizeof(N[0]); i++) {
        N[i] = rand() % (max - min + 1) + min;
        printf("M%d: %d\t", i, N[i]);
        printf("index: %d\n",i);
        if(abs(N[i])<abs(N[i-1])){
            highest=abs(N[i-1]);
        }else if(abs(N[i])<abs(N[i-1])){
            smallest = abs(N[i]);
        }
        
    }
    printf("highest %d\t",highest);
    printf("smallest %d\n",smallest);
    printf("multiplication of highest and smallest is %d",highest*smallest);
	
    return 0;
}

//__________________________________________________________

//35. Write a program that calculates the arithmetic mean of the elements of the array 
//C=(C0, C1,...,C14) with even index and at the same time non-negative values.

//answer
#include <stdio.h>

int main() {
    int C[15] ;
    int min = -100;
    int max = 100;
    int sum = 0,count = 0;
    
    printf("Array C:\n");
    for (int i = 0; i < sizeof(C) / sizeof(C[0]); i++) {
        C[i] = rand() % (max - min + 1) + min;
        if(C[i]%2==0 && C[i]>=0 ){
             printf("C%d: %d\n", i, C[i]);
             sum +=C[i];
             count++;
             
        }
        
    }
    printf("The aritmetic average is %d",sum/count);
    return 0;
}

//__________________________________________________________

//36. Two vectors are given: A=(A0, A1,...,A9) and B=(B0, B1,...,B9). 
//Write a program that will find the largest among the elements of the smallest values of these vectors.

//answer
#include <stdio.h>

int main() {
    int A[10] ;
    int B[10] ;
    int min = -100;
    int max = 100;
    int smallestA,smallestB;
    
    printf("Array A:\n");
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        A[i] = rand() % (max - min + 1) + min;
        if(A[i]<A[i-1]){
                smallestA=A[i];
            }
            printf("A%d: %d\n",i,A[i]);
    }
    printf("\nArray B:\n");
    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++) {
        B[i] = rand() % (max - min + 1) + min;
        if(B[i]>B[i-1]){
                smallestB=B[i-1];
            }
            printf("B%d: %d\n",i,B[i]);
    }
    printf("smallest A[i]= %d\t",smallestA);
    printf("smallest B[i]= %d\n",smallestB);
    if (smallestB>smallestA){
        printf("%d is the bigger one.",smallestB);
    }else{
        printf("%d is the bigger one.",smallestA);
    }
    return 0;
}
//__________________________________________________________

//37. write a C program to produce this pattern 
//* * * * * * *
//* * * * * *
//* * * * *
//* * * *
//* * *
//* *
//*

//answer

#include <stdio.h>

int main() {
    int rows = 7; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//__________________________________________________________

//40. Write a C program which counts M10 massive elements amount which is greater that 20

//answer
#include <stdio.h>
#include <time.h>

int main() {
    int M[10];
    int count=0;
    srand(time(0));
    for(int i=0;i<sizeof(M)/sizeof(M[0]);i++){
        M[i] = rand()%30;
        if(M[i]>20){
            count++;
        }
        printf("%d\t",M[i]);
    }
    printf("\nCount of the numbers which are greater that 20 is %d",count);

    return 0;
}

//__________________________________________________________

//41. Write a C program which writes M10 massive elements in N10 massive which are greater that 20

//answer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    int M[10], N[10], j=0;
    srand(time(0));
    for(int i=0;i<sizeof(M)/sizeof(M[0]);i++){
        M[i]=rand()%30;
        if(M[i]>20){
            N[j] = M[i];
            j++;
        }
        printf("%d\t", M[i]);
    }
    printf("\n");
    for (j=0; j<sizeof(N)/sizeof(N[0]); j++){
        printf("%d\t", N[j]);
    }
    return 0;
}

//__________________________________________________________

// 42. pass a one-dimensional array to the function.
//function calculates and returns the product of the elements of an array.

#include <stdio.h>

int main() {
    int product = 1 ;
    int i = 0;
    int array[] = {2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        product *= array[i];
    
    }
    printf("product is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

// 43.Pass a one-dimensional array to the function.
//function calculates and returns the sum of the even elements of an array.

#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        if (array[i] %2 == 0){
            product += array[i];
        }
    }
    printf("sum is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

// 44.Pass a one-dimensional array to the function. 
//function calculates and returns number of odd elements in an array.

#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        if (array[i] %2 == 1){
            product ++;
        }
    }
    printf("quantity is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

// 45.Pass a one-dimensional array to the function. 
//function calculates and returns the sum of the positive elements of the array.

#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11, -5,-9};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        if (array[i] > 0){
            product += array[i];
        }
    }
    printf("sum is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

// 46.Pass a one-dimensional array to the function. function Calculates and returns
//the negative elements of an array quantity.

#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11, -5,-9};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        if (array[i] < 0){
            product ++;
        }
    }
    printf("quantity is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

// 46.Pass a one-dimensional array to the function. function Calculates and 
// returns the nonzero elements of an array quantity.

#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11, -5,-9,0};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        if (array[i] >= 0){
            product ++;
        }
    }
    printf("quantity is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

// 47.Pass a one-dimensional array to the function. 
//function calculates and returns  sum of the elements of an array that is a multiple of 5.

#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11, -5,-9,0, 10};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        if (array[i] % 5 == 0){
            product += array[i];
        }
    }
    printf("sum is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

// 48.Pass a one-dimensional array to the function. The function calculates and 
// returns the arithmetic mean of the array elements.
#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11, -5,-9,0, 10,3};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        
        product += array[i];
        
    }
    float arithmetic = product/i;
    printf("arithmetic mean is : %.2f\n",arithmetic);
    
    return 0;
}

//__________________________________________________________

// 49.Pass a one-dimensional array to the function. Finds the sum of 
//the array elements whose values are not equal to 20.
#include <stdio.h>

int main() {
    int product = 0 ;
    int i = 0;
    int array[] = {2,3,4,5,8,11, -5,-9,0, 10,3,20};
    int size = sizeof(array)/sizeof(array[0]);
    for (i=0; i< size;i++){
        if(array[i] != 20){
            product += array[i];
        }
    }
    printf("sum is : %d\n",product);
    
    return 0;
}

//__________________________________________________________

//50. Pass a two-dimensional array to the function. The function calculates and 
//returns the sum of the array elements.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][3];
    int sum = 0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 100;
            sum += array[i][j];
        }
    }

    
    printf("Random 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n sum is : %d",sum);
    return 0;
}

//__________________________________________________________

//51. Pass a two-dimensional array to the function. The function calculates and 
//returns the product of the array elements.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][3];
    int product = 1;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 100;
            product *= array[i][j];
        }
    }

    
    printf("Random 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n product is : %d",product);
    return 0;
}


//__________________________________________________________

//52. Pass a two-dimensional array to the function. The function calculates and 
//returns the sum of the even elements of an array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][3];
    int sum = 0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 100;
            if (array[i][j] % 2 == 0){
                sum += array[i][j];
            }
        }
    }

    
    printf("Random 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n sum of even elements is : %d",sum);
    return 0;
}

//__________________________________________________________

//53. Pass a two-dimensional array to the function. The function calculates and 
//returns the number of negative elements in an array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][3];
    int count = 0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 100;
            if (array[i][j] < 0){
                count++;
            }
        }
    }

    
    printf("Random 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n number of negative numbers are: %d",count);
    return 0;
}

//__________________________________________________________

//54. Pass a two-dimensional array to the function. The function calculates and 
//returns the number of elements of an array that is a multiple of 7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][3];
    int count = 0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 100;
            if (array[i][j] % 7 == 0){
                count++;
            }
        }
    }
    printf("Random 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n number of elements of an array that is a multiple of 7 are: %d",count);
    return 0;
}

//__________________________________________________________

//55. Pass a two-dimensional array to the function. The function calculates and 
//returns the arithmetic mean of the array elements.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][3];
    int count=0, sum =0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 100;
            count++;
            sum+= array[i][j];
        }
    }
    printf("Random 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n arithmetic mean is : %d",(sum/count));
    return 0;
}

//__________________________________________________________

//56. Pass a two-dimensional array to the function. The function calculates and 
//returns the sum of the array elements whose values are greater than 20.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][3];
    int sum =0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 100;
            if (array[i][j] > 20){
                sum+= array[i][j];
            }
        }
    }
    printf("Random 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n sum of elements whose values are greater than 20 is : %d",sum);
    return 0;
}

//__________________________________________________________

//57. Pass two two-dimensional arrays to the function. function
//Increases the elements of the first array by 10 and writes them to the second array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[2][2];
    int secondArray[2][2];
    int sum =0;
    srand(time(NULL));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            array[i][j] = rand() % 100;
            secondArray[i][j]= array[i][j] + 10;
        }
    }
    printf("First 2x2 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    ///_________
    printf("\n");
    
    printf("Second 2x2 array(elements are increased by 10):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d ", secondArray[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
