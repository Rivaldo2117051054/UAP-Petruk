#include <iostream>>
#include <queue.h>

using namespace std;

void Pilihan (string list[]){
	cout << "\n ========================================\n";
	cout << "| 1. Masukan music      4. Play music  | \n";
	cout << "| 2. Tampilkan music    5. Exit     | \n";
	cout << "| 3. Jumlah Music                      | \n";
	cout << " ========================================\n";
	
	cout<<" Song List "<<endl;
	
	for(int i=0; i<7; i++){
		cout<<" "<<i+1<<"."<<list[i]<<endl;
	}
}

int main(){

	int pilihan,save,pilM;
	string list[7]={" Bigbang - BaeBae"," Bigbang - Blue"," Bigbang - stil life"," Itzy - Loco"," itzy - not shy"," Twice - TT"," itzy - icy"};
	queue<string> song;
	
	do{
	Pilihan(list);
	
	cout<<"\n Pilih : ";
	cin>>pilM;
	
	
		
	}while(pilM != 5);
}
