 #include<iostream>
 #include<string>
 using namespace std;

 int main(){
    string response;

    do{
    cout <<"do you want more tea (yes/no): " <<endl;
    cin >> response;
   }while (response != "no");
   


    return 0;
 }