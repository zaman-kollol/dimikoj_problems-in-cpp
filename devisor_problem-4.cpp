    #include<iostream>
    using namespace std;
    int main(){
        int T;
        cin>>T;

    for(int kase=1;kase<=T;kase++){
        int N;
        cin>>N;
        cout<<"Case "<<kase<<":";
    for(int i = 1; i <= N; i++){ 
        if(N%i==0){
        cout<<" "<<i;
            
        }
    }
    cout<<endl;
    }
        return 0;
    }