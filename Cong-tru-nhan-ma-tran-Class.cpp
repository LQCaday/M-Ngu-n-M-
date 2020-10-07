#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

class matrix{
	private:
    int a[50][50],b[50][50];
    int n,m,k;
    public:
    matrix( int a1 = 0, int b1 = 0){
    	for(int i = 0; i < 50; i++){
    		for(int j = 0; j < 50; j++){
    			a[i][j] = a1;
    			b[i][j] = b1;
			}
		}
	}
	void nhap(){
		cout << " Nhap matran A: \n";
		cout << " Nhap so hang: "; cin >> m;
		cout << " NHap so cot: ";cin >> n;
		for(int i = 0; i < m ; i ++){
			for(int j = 0;j < n; j++){
				cout << "Nhap a["<<i<<"]["<<j<<"] = ";
				cin >> a[i][j];
				
			}
		}
		cout << " Nhap matran B: \n";
		cout << " Nhap so hang: "; cin >> n;
		cout << " NHap so cot: ";cin >> k;
		for(int i = 0; i < n ; i ++){
			for(int j = 0;j < k; j++){
				cout << "Nhap b["<<i<<"]["<<j<<"] = ";
				cin >> b[i][j];
			}
		}
   }
   void xuat(){
   	cout << " Ma tran A:\n";
   	    for(int i = 0; i < m ; i ++){
			for(int j = 0;j < n; j++){
				cout << a[i][j] << " ";				
			}
			cout << endl;
		}
   
    cout << " Ma tran B:\n";
   	    for(int i = 0; i < n ; i ++){
			for(int j = 0;j < k; j++){
				cout << b[i][j] << " ";			
		 }
			cout << endl;
		}
   }
   void cong_tru_nhan(){
   	int c[50][50],d[50][50],e[50][50];
   	cout << "\n Cong 2 ma tran\n";
   	  	for(int i = 0; i < m ; i ++){
			for(int j = 0;j < n; j++){
			 c[i][j] = a[i][j] + b[i][j];				
			}
		}
   	    for(int i = 0; i < m ; i ++){
			for(int j = 0;j < n; j++){
				cout << c[i][j] << " ";				
			}
			cout << endl;
		}
		
	cout << "\n Tru 2 ma tran\n";
   	  	for(int i = 0; i < m ; i ++){
			for(int j = 0;j < n; j++){
			 d[i][j] = a[i][j] - b[i][j];				
			}
		}
   	    for(int i = 0; i < m ; i ++){
			for(int j = 0;j < n; j++){
				cout << d[i][j] << " ";				
			}
			cout << endl;
		}
	
	cout << "\n Tich 2 ma tran \n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k;j++){
			e[i][j] = 0;
	        for(int d = 0; d < n; d++){
	      	e[i][j]+=a[i][d]*b[d][j];	
           	}
	    }
	}	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k;j++){
			cout << e[i][j] << " ";
		}
		cout << endl;
	}
		
   }
};
main(){
	matrix a;
	a.nhap();
	cout << endl;
	a.xuat();
	a.cong_tru_nhan();
	getch();
}
