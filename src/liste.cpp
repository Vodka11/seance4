#include<vector>
#include<iostream>

using namespace std;

int main(){

int one;
string name;
int notation;
int i = 0;

vector <string> etudiants(4);
vector <int> note(4);

cout<<"Bienvenue dans le programme de notes"<<endl;

for(i=0; i<2; i++){

cout<<"Voulez vous entrer une nouvelle note ? (1 = oui 0 = non)"<<endl;
cin>> one;
if(one==1){
	cout<<"entrez un prénom"<<endl;
	cin>>name;
	etudiants[i] = name;
	cout<<"entrez une note"<<endl;
	cin>>notation;
	note[i] = notation;
}
}
cout<<etudiants[0]<<" "<<etudiants[1]<<" "<<etudiants[2]<<" "<<etudiants[3]<<" "<<etudiants[4]<<endl;
cout<<note[0]<<" "<<note[1]<<" "<<note[2]<<" "<<note[3]<<" "<<note[4]<<endl;


return 0;
}
