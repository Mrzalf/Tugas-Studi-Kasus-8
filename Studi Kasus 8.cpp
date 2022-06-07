#include <iostream>
using namespace std;

class data{
	public:
  	void input(){
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){
          		cout<<"Masukkan data baris ke-"<<i<<" kolom ke-"<<j<<": ";
         		 cin>> a[i][j];
       		}
		}
	}
	
  void proses(){
  	jumlah = 0;
//  Rata-rata Kelulusan Per Tahun dari Semua Prodi
    for(i = 0; i < 3; i++){
    	jumlah = 0;
      for(j = 0; j < 3; j++){
        if(i == 0){
//  Tahun 2015
          jumlah += a[i][j];
          rata[1] = jumlah/3;
        }
        if(i == 1){
//  Tahun 2016
          jumlah += a[i][j];
          rata[2] = jumlah/3;
        }
        if(i == 2){
//  Tahun 2017
          jumlah += a[i][j];
          rata[3] = jumlah/3;
        }
      }
    }
//  Rata-rata per tahun per prodi
    for(j = 0; j < 3; j++){
    	jumlah = 0;
      for(i = 0; i < 3; i++){
        if(j == 0){
//  Teknik Komputer
          jumlah += a[i][j];
          rata[4] = jumlah/3;
        }
        if(j == 1){
//  Teknik Elektro
          jumlah += a[i][j];
          rata[5] = jumlah/3;
        }
        if(j == 2){
//  Teknik Pemesinan
          jumlah += a[i][j];
          rata[6] = jumlah/3;
        }
      }
    }
    
  }

  void output(){
  	cout<<"\nData Kelulusan Mahasiswa\n";
  	for(i = 0; i < 3; i++){
      if(i==0){
  			cout<<"2015 : ";
		  }
		  else if(i==1){
		  	cout<<"2016 : ";
		  }
		  else if(i==2){
		  	cout<<"2017 : "; 
		  }
		for(j = 0; j < 3; j++){
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
        cout<<endl;
	}
	cout<<"Rata-rata Kelulusan Per Tahun dari Semua Prodi\n";
	for(i =1; i<=3; i++){
		cout<<rata[i]<<endl;
    cout<<endl;
	}
	 cout<<"Rata-rata per tahun per prodi\n";
	for(i =4; i<=6; i++){
		cout<<rata[i]<<endl;
    cout<<endl;
	}
  }
  
	private:
		int a[3][3], i, j;
      float jumlah, rata[6]; 
  
};

int main() {
  data d;
  d.input();
  d.proses();
  d.output();
}