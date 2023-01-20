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



//4. Array:

#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
       cin>>n;
    int A[n];
 
    for(int i=1;i<=n;i++)
    {
    cin>>A[i];
    }
    

    for(int j=n;j>=1;j--)
    {
        cout<<A[j]<<" ";
    }
    return 0;
    
}




//5. Dynamic Array:



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    
int x,y,s=0;
cin>>x>>y;
int *arr[x];
while(x--)
{

int n;
cin>>n;
arr[s]=new int[n];
for(int i=0;i<n;i++)
{
    cin>>arr[s][i];
  

}
  s++;
}
while(y--)
{
    int a,b;
    cin>>a>>b;
    cout<<arr[a][b]<<endl;
    
}


  
     
    return 0;
}


int main()
 {
      
    int n;
    int q;
    cin >> n >> q;
    vector<int> a[n];
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        int o;
        for(int j = 0; j < m; j++){
            cin >> o;
            a[i].push_back(o);
        }
    }
    
    int r, s;
    for(int k = 1; k <= q; k++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}

