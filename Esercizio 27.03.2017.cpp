#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int n_rap=0, cont=0, cont_m=1;
	float f_mese, f_annuo, f_max=0.0;
	string nome, n_max="";

	do	{  
	        n_rap=0;
			cout<<"inserisci il numero di rappresentanti\n";
			cin>>n_rap;
		}while(n_rap <= 0);
    
	while(cont<n_rap){ 
	cout<<"inserisci il nome\n";
	cin>>nome;
	cont_m=1;
	f_annuo=0;
		
		while(cont_m<=12){
		 cout<<"inserisci fatturato del mese: "<<cont_m<<endl;
		 cin>>f_mese;
		 f_annuo+=f_mese;
		 cont_m++;	
		}
		
		//Visualizzo nome e f_anno
		cout<<"il fatturato annuo di "<<nome<<" e': "<<f_annuo<<endl;
	    
	    if(f_max<f_annuo)
	    {
	    f_max=f_annuo;
	    n_max=nome;
		}	
	
    cont++;	
	}
	 
cout<<"il nome del rappresentante col fatturato piu' alto e' "<<n_max<<endl;

system ("pause");
return 0;

	
	
	
	
}
