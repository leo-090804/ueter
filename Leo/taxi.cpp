/*Viết chương trình tính tiền cước Taxi khi biết chiều dài quãng đường di chuyển.

Giá cước taxi tính như sau: 

giá 1km đầu tiên là 7000đ;
giá của mỗi km tiếp theo là 5000đ;
sau khi đi nhiều hơn 30km, giá mỗi km giảm xuống còn 3000đ.
Đầu vào
Đầu vào từ bàn phím gồm một dòng duy nhất chứa một số nguyên dương có giá trị không vượt quá 1000 là chiều dài quãng đường khách di chuyển bằng Taxi (tính theo km).

Đầu ra
In ra màn hình tổng số tiền mà khách hàng phải trả cho tài xế Taxi.*/

#include <iostream>

using namespace std;

/*double from2Km(double disTance) {
	return (7000 + 5000 * (disTance - 1));
}	
double from30Km(double disTance) {
	return (7000 + 5000 * 29 + 3000 * (disTance-30));
}
int main() {
	double disTance ;
	cin >> disTance;
	if (disTance == 1) {
		cout << "7000" << endl;
	}
	else if (disTance > 1 && disTance <= 30) {
		cout << from2Km(disTance) << endl;
	}
	else if (disTance > 30) {
		cout << from30Km(disTance) << endl;
	}
}*/


int main() {
	for (int i = 0; i < 10; i++) {
		if (i == 4) {
			break;
		}
		cout << i << "\n";
	}
}

