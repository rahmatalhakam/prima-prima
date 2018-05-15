//created by rahmatalhakam
//rahmatalhakam@gmail.com

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    bool isPrime=true;
    for(int i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  return isPrime;
}

int main(){
    int n[100], N;
    bool cek=false;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> n[i];
    }
    sort(n,n+N);

    if(n[0]!=2){
        cout << "TIDAK ADA" << endl;
    }
    else{
        for(int i=1; i<N; i++){
            cek=checkPrime(2+n[i]);
            if(cek){
                cout << "ADA" << endl;
                break;
            }
            else if(i==N-1 && cek==false){
                cout << "TIDAK ADA" << endl;
            }
        }
    }


}
