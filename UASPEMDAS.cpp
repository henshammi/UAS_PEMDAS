#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int n;
	
	
	cout << "input jumlah data: ";
	cin >> n;
	
	int x[n], y[n];
	
	for (int i = 0; i < n; i++) {
    	cout << "input data x[" << i << "]: ";
    	cin >> x[i];
    	cout << "input data y[" << i << "]: ";
    	cin >> y[i];
  	}
  	
  	cout << "==========================================================" << endl;

	// xi*yi
	cout << "hasil xi dikali yi" << endl;
	for (int i = 0; i < n; i++) {
		cout << "hasil kali antara x[" << i << "] dan y[" << i << "]: " << x[i] * y[i] << endl;
	}
	
	cout << "==========================================================" << endl;
	
	//	pangkat
	cout << "hasil pangkat" << endl;
	for (int i = 0; i < n; i++) {
		cout << "hasil pangkat x[" << i << "]: " << pow(x[i], 2)<< endl;
		cout << "hasil pangkat y[" << i << "]: " << pow(y[i], 2)<< endl;
	}
	
	cout << "==========================================================" << endl;
	
	float totalx = 0;
	float totaly = 0;
	
	// jumlah data x dan y
	for (int i = 0 ; i < n ; i++){
    	totalx=totalx+x[i];
    	totaly=totaly+y[i];
    }
    
    cout << "total data x: " << totalx << endl;
    cout << "total data y: " << totaly << endl;
    	
    cout << "==========================================================" << endl;
    // jumlah hasil dikali
    float totalkali = 0;
	for (int i = 0; i < n; i++) {
		totalkali=totalkali+x[i] * y[i];
	}
	
	cout << "total hasil kali: " << totalkali << endl;
	
	cout << "==========================================================" << endl;
	// jumlah hasil pangkat
	float totalpangkatx = 0;
	float totalpangkaty = 0;
	for (int i = 0 ; i < n ; i++){
    	totalpangkatx=totalpangkatx+pow(x[i], 2);
		totalpangkaty=totalpangkaty+pow(y[i], 2);
    }
    
    cout << "total hasil pangkat x: " << totalpangkatx << endl;
	cout << "total hasil pangkat y: " << totalpangkaty << endl;
	
	cout << "==========================================================" << endl;
	// rumus atas
	float a1;
	a1=n*totalkali - totalx*totaly;
	
	// rumus bawah
	float hasil1, hasil2, akar1, akar2, a2;
	hasil1=n*totalpangkatx - pow(totalx,2);
	hasil2=n*totalpangkaty - pow(totaly,2);
	
	akar1=sqrt(hasil1);
	akar2=sqrt(hasil2);
	
	a2=akar1*akar2;
	
	// hasil korelasi pearson
	float totalsemua;
	totalsemua=a1/a2;
	cout << "nilai korelasi r: " << totalsemua << endl;
	
	// hasil determinasi
	float det;
	det=pow(totalsemua, 2)*100;
	
	cout << "nilai koefisien determinasi: " << det << endl;
	
	// interpretasi
	if ((totalsemua >= 0.00) & (totalsemua <=0.09)) {
		cout << "Hubungan korelasi diabaikan";
	} 
	else if ((totalsemua >= 0.10) & (totalsemua <=0.29)) {
		cout << "Hubungan korelasi rendah";
	}
	else if ((totalsemua >= 0.30) & (totalsemua <=0.49)) {
		cout << "Hubungan korelasi moderat";
	}
	else if ((totalsemua >= 0.50) & (totalsemua <=0.70)) {
		cout << "Hubungan korelasi sedang";
	}
	else if (totalsemua > 0.70){
		cout << "Hubungan korelasi sangat kuat";
	}
	
	cout << endl;
	
	// hubungan x dan y
	if (totalsemua == 0) {
		cout << "tidak ada hubungan antara variable x dan y";
	} else if (totalsemua > 0) {
		cout << "hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai y pun akan bertambah, dan juga sebaliknya";
	} else if (totalsemua < 0) {
		cout << "hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai y akan mengecil, dan juga sebaliknya";
	}
	
	
	return 0;
}
