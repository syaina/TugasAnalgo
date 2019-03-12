/*	
	Nama			: Syaina Nur Fauziyah
	NPM				: 140810170025
	Nama Program	: Mencari nilai maksimum
*/


#include<iostream>
using namespace std;
main()
{
	int nilai[100], n,max,min;
	
	cout<<"\nMasukkan Banyak Angka : "; cin>>n;
	cout<<"\n";
	max=-1000;
	min=1000;
	for(int i=0; i<n; i++)
	{
	   cout<<"Angka Ke- "<<i+1<<" : ";
	   cin>>nilai[i];
    }
    
	for(int i=0; i<n; i++)
	{
		if(nilai[i]>max)
	        max=nilai[i];
	
	}
	
	cout<<"\nNilai maksimum = "<<max;
	return 0;
}

