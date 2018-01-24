#include<iostream>
using namespace std;
int main(){
    int a[10000];
    int c[3]={0};
    int i,j=0,n,m,p,k=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        cout <<  a[i] << "   " ;
    }
    cout << "enter window size";
    cin >> m;
    c[k]=a[0];
    k++; p=0;
   int  count=0;
            int f=0,value=0;
            for(i=1;i<=m;i++){
                    if(k>=m){
                        break;
                    }
                    f=0;
                for(j=0;j<k;j++){
                    if(a[i]==c[j]){
                            count++;
                        f=1;
                    break;
                    }
                }
                if(f!=1){
                    c[k]=a[i];
                    k++;
                }
                for(p=0;p<k;p++){
                 cout << c[p];
             }
             cout << "\n";
                }
               int k1=0;
    for(i=m+1;i<=n;i++){
            f=0;
            for(j=0;j<k;j++){
                if(a[i]==c[j]){
                    count++;
                    cout << a[i];
                    f=1;
                    break;
                }
            }
            if(f!=1){
                    if(k1<k-1){
                c[k1]=a[i];
                k1++;
                    }
                    else if(k1==k-1){
                        c[k1]=a[i];
                    k1++;
                    k1=0;
                    }
            }
             for(p=0;p<k;p++){
                cout << c[p] ;
             }
             cout << "\n";
    }
    cout << count <<"\n";
int   value3=n-count;
    cout << "page hit ratio\n";
    value3=(count*100)/n;
    cout << value3 <<"\n";
    value3=100-value3;
    cout << " page miss ratio" << value3;

}











