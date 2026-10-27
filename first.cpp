#include<iostream>

using namespace std ;

int main(){
    int degree ;
    cout << "enter degree:"<<endl;
    cin >>degree ;

    if(degree>0&&degree<=100){
        if(degree>=90&&degree<=100){
            cout<<"A"<<endl;
        }
        if(degree>=80&&degree<90){
            cout<<"B"<<endl;
        }
        if(degree>=70&&degree<80){
            cout<<"C"<<endl;
        }
        if(degree>=60&&degree<70){
            cout<<"D"<<endl;
        }
        if(degree<60){
            cout<<"F"<<endl;
        }
    
    }
    else{
        cout<<"invalid score"<<endl;
    }
}

