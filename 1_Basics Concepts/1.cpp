/*Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.

        1, if the character is an uppercase alphabet (A - Z).
        0, if the character is a lowercase alphabet (a - z).
        -1, if the character is not an alphabet.
*/
#include<iostream>
using namespace std;
int main(){
    char c;
    
	cin>>c;
    //*******************approach 1***********************************
	// if((int)c>=65 &&(int) c<=92)
	// 	cout<<1;
	// else if((int)c>=95 && (int)c<=122)
	// 	cout<<0;
	// else	
	// 	cout<<-1;
    //*********************approach 2*********************************
	if(c>='A' && c<='Z')
		cout<<1;
	else if(c>='a' && c<='z')
		cout<<0;
	else	
		cout<<-1;
     return 0;
}