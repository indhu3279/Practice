//Que 1: Check if an array is sorted
#include <iostream>
#include<strings>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray = sorted(arr+1,n-1);
    if(arr[0]<arr[1]&& restarray){
        return true;
    }
}
int main(){

}

//Que 2: print numbers till n
void dec(int n){ //n=4 => 4 3 2 1
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){ //n=4 => 1 2 3 4
    if(n==1){
        cout<<1<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

//Que 3 : find the first and last occurence of a number in an array
 //Que 4: Reverse a string
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string sub = s.substr(1);
    reverse(sub);
    cout<<s[0];
}

//Que 5: Replace pi with 3.14 everywhere in the string
void pi(string s){
    if(s.length==0){
        return;
    }
    if(s[0]=='p'&&s[1]=='i'){
            cout<<"3.14";
            subs = s.substr(2)
            pi(subs);
    }
    else{
        cout<<s[0];
        subs = s.substr(1);
        pi(subs);
    }
}

//Que 6: Tower of hanoi
void toh(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    toh(n-1,src,helper,dest);
    cout<<"move from"<<src<<"to"<<dest;//nth ring
    toh(n-1,helper,dest,src);
}
//Que 7: 
