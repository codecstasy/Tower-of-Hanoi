/*
             codEcsTAsy
            SUST  SWE-19
*/
#include <bits/stdc++.h>
#define ll long long
#define s second
#define f first
#define fora(i,n) for(int i=0 ; i<n ; i++)
#define ford(i,n) for(int i=n-1 ; i>=0 ; i--)
#define pb push_back
using namespace std;

void hanoi(int n,int beg,int aux,int end) {
	if(n==1) {
		printf("%d -> %d\n",beg,end);
		return;
	}
	hanoi(n-1,beg,end,aux);
	hanoi(1,beg,aux,end);
	hanoi(n-1,aux,beg,end);
}

int main()
{
    int n,beg,end;
    cin >> n >> beg >> end;
    int aux=6-(beg+end);
    hanoi(n,beg,aux,end);
    return 0;
}
