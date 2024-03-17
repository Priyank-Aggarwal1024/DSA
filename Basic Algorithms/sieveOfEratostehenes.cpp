#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  It is a basic algorithm to find a prime numbers in a range of(1 to n);
    // Approach :- 1. In this first we remove 1 ans 0 because they are not a prime number and take all rest number as
    //                a Prime.
    //             2. The smallest prime number is (2) and mark it as a prime number and Marked(Not Prime) allnumbers
    //                that are divisible by 2.
    //             3.  And further go to the next Prime Number or (unmarked number) and the rest numbers tht are a
    //                 multiple of this number marked as a (Not Prime) Number.
    //              4. Now in last Count or print all the prime numbers.
    //
    int n;
    cout << "Enter the range : ";
    cin >> n;
    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;
    for (int i = 0; i < n + 1; i++)
    {
        if (v[i] == true)
        {
            for (int j = 2 * i; j < n + 1; j += i)
            {
                v[j] = false;
            }
        }
    }
    int ct = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (v[i])
        {
            cout << i << " ";
            ct++;
        }
    }
    cout << endl
         << "The total prime numbers in range 1 to " << n << " Inclusively is : " << ct;
    return 0;
}

//  Internal IP : 10.142.0.2
//  External IP : 335.237.172.196
//  Password : EBGKYde1Gmmv
//  ID :blog-db
//  35.237.79.235