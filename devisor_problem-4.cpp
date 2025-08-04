         /*input test case
               3
               6
               15
               23 */
                #include<iostream>
                using namespace std;
                int main(){
                    int T;
                    cin>>T; //test_case
            
                for(int kase=1;kase<=T;kase++){ //outer loop
                    int N;
                    cin>>N; //integer_input
                    cout<<"Case "<<kase<<":"; //for test Cases.
                for(int i = 1; i <= N; i++){ //inner_loop //calculate the divisor of each N number.
                    if(N%i==0){  
                    cout<<" "<<i;
                 }
              }
                cout<<endl;
             }
                    return 0;
                }
