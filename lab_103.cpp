#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    cin >> a;
    int b = 0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            b=b+1;
        }
        else{
            b=b+0;
        }
    }
    if(a==1){
        cout << "NO";
    }
    else if(a>1){
        if(b>2){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }
    
    return 0;
}