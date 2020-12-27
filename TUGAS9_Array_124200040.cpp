#include <iostream>
using namespace std;
int main ()
{
int jumlah ;

cout<<"Masukan banyak angka : " ;
cin>>jumlah ;

int nilai[jumlah], selisih[jumlah], selisih_maksimal;

float maksimal, minimal, total=0, rata;

for (int a=0; a<jumlah ;a++){
	cout<<"Angka ke-"<<a+1<<" : ";cin>>nilai[a];
	total += nilai[a];
}
	cout<<endl ;
	cout<<endl ;
	cout<<endl ;
	cout<<"_____Hasil_____"<<endl ;
	cout<<"Deret        : " ;
	for (int a=0 ;a<jumlah ;a++){
	cout<<nilai[a]<<" ";
	}
		cout<<endl;
		for(int a=0;a<jumlah ;a++){
		if(nilai[a]>maksimal){
		maksimal=nilai[a];
		}}
			cout<<"Maksimum     : "<<maksimal;
			cout<<endl;
			
		minimal=nilai[0];
		for(int a=0 ;a<jumlah ;a++){
		if(nilai[a]<minimal){
		minimal=nilai[a];
		}}

			cout<<"Minimum      : "<<minimal;
			cout<<endl;

	rata=total/jumlah ;

			cout<<"Rata-Rata    : "<<rata;
			cout<<endl;

for(int a=0 ;a<jumlah ;a++){
	
		selisih[a]=nilai[a]-nilai[a+1];
		if(selisih[a]<0){
		selisih[a]=selisih[a]*-1;
		}else if(jumlah<=1){
		selisih[a]=0;
		}}

		selisih_maksimal=selisih[0];
		for(int a=0 ;a<jumlah-1 ;a++){
		if(selisih_maksimal<selisih[a]){
		selisih_maksimal=selisih[a];
		}}

cout<<"Selisih Max  : "<<selisih_maksimal;
return 0;


}








