// AMEX: 15 digits, starts with 34 or 37.
// MASTERCARD: 16 digits, starts with 51, 52, 53, 54 or 55.
// VISA: 16 or 13 digits, starts with 4.

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);
    int n1 = number  % 10;
    int n2 = (number / 10) % 10;
    int n3 = (number / 100) % 10;
    int n4 = (number / 1000) % 10;
    int n5 = (number / 10000) % 10;
    int n6 = (number / 100000) % 10;
    int n7 = (number / 1000000) % 10;
    int n8 = (number / 10000000) % 10;
    int n9 = (number / 100000000) % 10;
    int n10 = (number / 1000000000) % 10;
    int n11 = (number / 10000000000) % 10;
    int n12 = (number / 100000000000) % 10;
    int n13 = (number / 1000000000000) % 10;
    int n14 = (number / 10000000000000) % 10;
    int n15 = (number / 100000000000000) % 10;
    int n16 = (number / 1000000000000000) % 10;
    long even = (n1 + n3 + n5 + n7 + n9 + n11 + n13 + n15);
    int pair = (((n2  * 2) % 10  + (n2 * 2) / 10) + ((n4  * 2) % 10  + (n4 * 2) / 10)  + ((n6  * 2) % 10  + (n6 * 2) / 10) +
                ((n8  * 2) % 10  + (n8 * 2) / 10) + ((n10  * 2) % 10  + (n10 * 2) / 10) + ((n12  * 2) % 10  + (n12 * 2) / 10) +
                ((n14  * 2) % 10  + (n14 * 2) / 10) + ((n16  * 2) % 10  + (n16 * 2) / 10));
    int sum = pair + even;
    if ((sum % 10 == 0 && n15 == 3 && n14 == 7) || (sum % 10 == 0 && n15 == 3 && n14 == 4))
    {
        printf("AMEX\n");
    }
    else if ((sum % 10 == 0 && n16 == 4) || (sum % 10 == 0 && n13 == 4))
    {
        printf("VISA\n");
    }
    else if ((sum % 10 == 0 && n16 == 5 && n15 == 5) || (sum % 10 == 0 && n16 == 5 && n15 == 4) ||
             (sum % 10 == 0 && n16 == 5 && n15 == 3) || (sum % 10 == 0 && n16 == 5 && n15 == 2) || (sum % 10 == 0 && n16 == 5 && n15 == 1))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}