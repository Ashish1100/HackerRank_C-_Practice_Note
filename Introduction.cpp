//1. Hello World:
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}



//2. Data types:

#include<iostream>
using namespace std;

int main()
{
    int a=3;
    long int x=12345678912345;
    char b='a';
    float c=334.230;
    double y=14049.30493;
    cout<<a<<endl<<x<<endl<<b<<endl<<c<<endl<<y;
    return 0;
}


//3. Pointers:

#include <stdio.h>
#include <cstdlib>
#include<iostream>
using namespace std;

void update(int *a,int *b) 
{

 (*a)=abs(*a + *b);
 (*b)=abs(*a - *b - *b);
 
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

//or 

#include <stdio.h>

void update(int *a,int *b) {
    int temp = *a;   
    *a = *a + *b;
    *b = temp - *b;
    
    if (*b < 0)
    {
        *b = -(*b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
