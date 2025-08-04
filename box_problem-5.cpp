 #include<iostream>
    using namespace std;
    int main(){
    int T;
    cin>>T;
     for(int k=1;k<=T;k++){
        int N;
        cin>>N;

    for (int i = 1; i<=N; i++){ //row
        
     for(int j=1;j<=N; j++){ //colum
          cout<<"*";
      }
     cout<<endl;
    }
    }
        return 0;
    }