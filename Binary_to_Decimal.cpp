#include <iostream>
using namespace std;

int main() {
  int n, sum = 0, i = 1;
  cout << "Enter: ";
  cin >> n;

  while (n > 0) {
    sum += i * (n % 10);
    n /= 10;
    i *= 2;
  }

  cout << "Decimal Equivalent: " << sum;

  return 0;
}

Method 2 - using function
/*Contributed by Sirsha*/
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int Binary_to_Decimal(long int);
int main()
{
    long int n;
    system("cls");
    printf("Enter the binary number for coverting it to decimal: ");
//	scanf("%d",&n);
    cin >> n;
    cout << n <<" in decimal: " << Binary_to_Decimal(n);
}
int Binary_to_Decimal(long int n)
{
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
}
