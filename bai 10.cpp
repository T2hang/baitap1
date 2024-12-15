#include<iostream>
using namespace std;

//bai 10
int tinhSoMu(int coSo, int soMu) {
	if (coSo == 0 && soMu == 0) return 0;
    if (soMu == 0 && coSo != 0 ) return 1;
    if (coSo == 0 && soMu != 0 ) return 0;
	int result = 1;
	for(int i = 1; i <= soMu; i++){
		result *= coSo;
	}
	return result;
}

//bai 11
int bai11(int so){
	int ketqua11;
	for(int i = 1;i  <= so; i++){
	int phanTuNhan = 1;
	 for(int j = 1; j <= i; j++) {
            phanTuNhan *= j;    
        }
           ketqua11 += phanTuNhan;
}
return ketqua11;
}
//12
int bai12(int coso, int soMu) {
    int ketqua12 = 0;
    if (coso == 0 && soMu == 0) return 0;
    if (soMu == 0) return 1;
    if (coso == 0) return 0;
    for (int i = 1; i <= soMu; i++) {
        int result = 1;
        for (int j = 0; j < i; j++) {
            result *= coso;
        }
        ketqua12 += result;
    }
    return ketqua12;
}
//Bài 29: Tìm u?c s? l? l?n nh?t c?a s? nguyên duong n. Ví d? n = 100 u?c l? l?n nh?t là 2
int bai29 (int number){
	int le = 0;
	int oUcsoLelonNhat = 0;
	for (int i = 1; i <= number; i++) {
		if(number % i == 0){
			if(i % 2 == 0){
			}else{
				if(i > 0){
						oUcsoLelonNhat = i;
				}
			}
		}
	}
	return 0;
}
//Bài 26: Tính tích t?t c? các “u?c s? l?” c?a s? nguyên duong n
int bai26 (int numBer){
	if(numBer = 0){
		cout<<"uoc cua 0 la 0";
	}
   for(int i = 1; i <= numBer; i++){
   		if(numBer > 0){
		if(numBer % 2 == 0){
		}else{
		numBer *= i;
		cout<<"ket qua bai 26 la"<<numBer;	
		}
   }
	}	
	return 0;
}
// bai 16Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
int bai16 (int coSo,int soMu){
	int ketQua16 = 0;
	int cong = 0;
	for(int i = 1;i <= soMu;i++){
		cong += i;
		 ketQua16 += Math.pow(coSo, i) / cong;
		 cout<<"ket qua bai 16 la"<<ketQua16;
	}
	return 0;
}
int main() {
    int test = bai26(30);
    cout << test;
    return 0;
}

