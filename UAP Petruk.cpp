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
void print(queue <string> song){
cout<<"\n Playlist music :"<<endl;

if(song.empty()){
cout<<" Music Kosong ";
}
while(!song.empty()){

cout<<">"<<song.front()<<endl;

song.pop();
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
	
	switch(pilM){
		case 1 : cout<<" Pilih Music : ";cin>>save;
		    if(save>7){
		    	cout<< " Lagu tidak Tersedia "<<endl;
			}else{
			song.push(list[save-1]); 
			cout<<song.front()<<" Telah Ditambahkan "<<endl;
		}
			break;
		case 2 : print(song); ;
			 break;
		case 3 : cout<<" Jumlah music : "<<song.size()<<endl ;
			 break;
		case 4 : cout<<song.front()<<" Dimainkan "; song.pop();
			break;
		}
		
		cout<<endl;
		
		system("pause");
		system("cls");
		
	}while(pilM != 5);
}
