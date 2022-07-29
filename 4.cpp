#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, product, sum=0;

    cout << "how many digits = ";
    cin >> n;

    int nums[n], sums[n];

    for(i=0; i<n; i++)
    {
        cout << "enter digit " << i+1 << " = " ;
        cin >> nums[i];
    }

    for(i=0; i<n; i++)
    {
        sums[i] = nums[i];
        product = 1;
        for(j=0; j<n; j++)
        {
            nums[i] = 1;
            product = nums[j]*product;
            nums[i] = sums[i];
        }
        sums[i] = product;
    }

    for(i=0; i<n; i++)
        cout << sums[i] << endl;

    return 0;
}
