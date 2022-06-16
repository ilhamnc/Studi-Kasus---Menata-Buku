//Muhammad Naufal Labib Ramadhan (2100018378)
//Ilham Nur Cahyo (2100018387)
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct brg{
	int kode;
	char nama[20];
	int stock;
	
};

class sorting {
	public :
		void input();
		void proses();
		void output();
	
	private :
		int n,i,b, cari, ada;
		brg buku[24];
		brg temp;
		int tmp, tmp2;
		int baris, kolom;
		int kode[4][6];
};

void sorting::input() {
	cout<<"=============================================="<<endl;
	cout<<"|                 BUKU ANDI                   |"<<endl;
	cout<<"=============================================="<<endl;
	cout<<"Masukan banyak data = ";
	cin>>n;

 	for(i=0;i<n;i++){
		cout<<endl;
		cout<<"Data ke-"<<(i+1)<<":"<<endl;
		cout<<"Kode Buku : ";
		cin>>buku[i].kode;
		cout<<"Nama Buku: ";
		cin>>buku[i].nama;
		cout<<endl;
	 }
		cout<<"Data buku yang masih berantakan"<<endl;
		cout<<"=================================="<<endl;
		cout<<"|     Kode Buku  |  Nama Buku    |"<<endl;
		cout<<"================================== "<<endl;
		for(i=0;i<n;i++){
        	cout<<"|       "<<buku[i].kode<<"\t\t"<<buku[i].nama<<"     |"<<endl;

        }
        cout<<endl;
		cout<<"==================================================="<<endl;
}

void sorting::proses() {
	for(i = 0; i < n; i++){
        for(b = 0; b < n-1; b++){
			if(buku[b].kode > buku[b+1].kode){
                temp.kode = buku[b].kode;
                buku[b].kode = buku[b+1].kode;
                buku[b+1].kode = temp.kode;

                strcpy(temp.nama, buku[b].nama);
                strcpy(buku[b].nama, buku[b+1].nama);
                strcpy(buku[b+1].nama, temp.nama);
        	}
        }
	}

	cout<<"Masukkan baris : ";
	cin>>baris;
	cout<<"Masukkan kolom : ";
	cin>>kolom;
	int k = 0;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			kode[i][j] = buku[k].kode;
			k++;		
		}
	}
}

void sorting::output() {
	cout<<"Setelah data diurutkan berdasarkan kode buku terkecil : "<<endl;
        cout<<"=================================="<<endl;
		cout<<"|     Kode Buku  |  Nama Buku    |"<<endl;
		cout<<"=================================="<<endl;
		
		int b = 0;
        for(int i = 0; i < baris; i++) {
        	for(int j = 0; j < kolom; j++) {
        		cout<<"|      "<<kode[i][j]<<"\tbuku : "<<buku[b].nama<<"       |"<<endl;
        		b++;
			}
			cout<<endl;
		}

        cout<<"=================================================="<<endl;
        cout<<endl;
}

int main() {
	sorting out;
	
	out.input();
	out.proses();
	out.output();
	
	return 0;
}
