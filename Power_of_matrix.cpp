
#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define endl "\n"
 #define mod 1000000007

#define N 10000




int power(int a,int b)
{
    int ans=1;
    while(b)
    {
        if(b&1)
        {
            ans*=a;
        }

        b=b>>1;
        a=a*a;
    }
    return ans;
}

int mat[N][N];
int I[N][N];
 void simple_as_fuck()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void multiply(int A[][N],int B[][N],int dim)
{

    int res[dim+1][dim+1];

    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            res[i][j]=0;
            for(int k=0;k<dim;k++)
            {
                res[i][j]=(res[i][j]+A[i][k]*B[k][j])%mod;
            }

        }
    }

        for(int i=0;i<dim;i++)
        {
            for(int j=0;j<dim;j++)
            {
                A[i][j]=res[i][j];
            }
        }
    

}
void matexpo(int A[][N],int dim,int n)
{
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            if(i==j)
            {
                I[i][j]=1;
            }
            else{
                I[i][j]=0;
            }
        }
    }

/*
    for(int i=0;i<n;i++)
    {
       multiply(I,A,dim);
    }
*/

    while(n)
    {
        if(n%2)
        {
            multiply(I,A,dim);
            n--;

        }
        else{
            multiply(A,A,dim);
            n=n/2;
        }
    }

    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            A[i][j]=I[i][j];
        }
    }

}

int32_t main()

{


    mat[0][0]=1;
    mat[0][1]=1;

    mat[1][0]=1;

    mat[1][1]=0;
    int p;
    p=5;
    matexpo(mat,2,p-1);

    cout<<mat[0][0];
        cout<<endl;

    





}