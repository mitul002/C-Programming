#include<bits/stdc++.h>
using namespace std;
int knapsack(int W, int wt[], int val[], int n) {
   int i, w;
   int knap[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i==0 || w==0)
            knap[i][w] = 0;
         else if (wt[i-1] <= w)
            knap[i][w] = max(val[i-1] + knap[i-1][w-wt[i-1]], knap[i-1][w]);
         else
            knap[i][w] = knap[i-1][w];
      }
   }
   return knap[n][W];
}
int main()
{
    int tc,n,f,fw[105],i,w,wi[105],p[105];
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        long long int sum=0;
        for ( i = 0; i < n; i++)
        {
            cin>>p[i]>>wi[i];
        }
        cin>>f;
        for ( i = 0; i < f; i++)
        {
           cin>>fw[i];
           sum+=knapsack( fw[i], wi, p, n);
        }

        cout<<sum<<endl;

    }

}
