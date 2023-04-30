#include<bits/stdc++.h>
using namespace std;
string ProcesaPalabra(string frase);
int main(){
	string frase;
	cout<<"Ingrese una palabra:"<<endl;
	cin>>frase;
	string f=ProcesaPalabra(frase);
	cout<<"La palabra procesada es:"<<f;
	return 0;
}
string ProcesaPalabra(string frase){
	int i=0;
	string p;
	while(i<frase.size()-1){
		if(i>=20){
			i+10000000;
		}
		if(frase[i]!='a' && frase[i]!='b' && frase[i]!='A' && frase[i]!='B'){
			p+=frase[i];
		}
		else if(frase[i]=='a'){
			p+='b';
		}
		else if(frase[i]=='A'){
		    p+='B';
		}
		i++;
	}
return p;	
}