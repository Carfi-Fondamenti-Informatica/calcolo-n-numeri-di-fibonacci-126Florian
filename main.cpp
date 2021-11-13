#include <iostream>
using namespace std;

int main() {
    int n=0; 
    cin>>n;
    if(n<2){
    cout<< "errore" <<endl;
    }else{
        cout<<1<<endl;
        int a=0, b=1, c=a+b;
        for(int i=0; i<(n-1); i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    }
    
    
    return 0;
}
