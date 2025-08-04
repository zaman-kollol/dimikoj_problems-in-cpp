        #include<iostream>
           using namespace std;
           int main(){
           int T;
           cin>>T;  //test_case
            for(int k=1;k<=T;k++){ 
               int N;
               cin>>N; //integer input
       
           for (int i = 1; i<=N; i++){ //outer_loop //rows
       
               for(int j=1;j<=N; j++){ //inner_loop //columns
                 cout<<"*";
             }
            cout<<endl;
          }
         if (k != T) cout << endl;
            }
               return 0;
           }
