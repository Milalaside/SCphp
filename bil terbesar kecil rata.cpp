/*program menghitung nilai terbesar 
 menghitung nilai terkecil 
 menghitung nilai rata rata dari masukan user*/
 

 #include <iostream>
 using namespace std;
 
 
 int main ()
 {
 
 	float bil, total, terbesar, rata, terkecil,n,j;
    total=0;
    j=1;
 cout<<"masukkan banyaknya bilangan : ";
 	cin>>n;
 	 
 	while(j<=n)
 	{
		 cout<<"masukkan bilangan :";
 	     cin>>bil;
 	     
 		if(j==1){
 			terbesar=bil;
 			terkecil=bil;
		 }
		 else if(terkecil>bil){
		 	terkecil=bil;
		 }
		 else if(terbesar<bil){
		 	terbesar=bil;
		 }
		 
		 
	total=total+bil;
	j++;
 	}	
 		
 		rata=total/n;

	 cout<<endl<<endl<<endl;
	 cout<<"Jumlah Bilangan = "<<total<<endl;
	 cout<<"Rata-rata = "<<rata<<endl;
	 cout<<"Bilangan Terbesar ="<<terbesar<<endl;
cout<<"Bilangan Terkecil = "<<terkecil<<endl;
	 
	 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
