"""
Given a number N reverse the number and print it.

Example 1: Input: N = 123 Output: 321 Explanation: The reverse of 123 is 321

Example 2: Input: N = 234 Output: 432 Explanation: The reverse of 234 is 432

Input Format

123

Constraints

N <= 1000

Output Format

321

Sample Input 0

123
Sample Output 0

321
Sample Input 1

2341
Sample Output 1

1432
"""
#include<stdio.h>

int reverseNumber(int n);

int main(){

    int n;

    scanf("%d",&n);

    int res=reverseNumber(n);

    printf("%d",res);

    return 0;

    }

int reverseNumber(int n){

    int rev=0;

    while(n!=0){

        int h=n%10;

        rev=(rev*10)+h;

        n=n/10;

}

    return rev;

    }
