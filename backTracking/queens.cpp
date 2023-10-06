#include<stdio.h>
#include<math.h>
int a[20];


//Hàm Ok()
bool Ok(int I,int y2){
	//Thật ra hàm này để kiểm tra con hậu đặt ở ô hiện với ô kế tiếp có bị ăn nhau hay không
	for(int i = 1; i < I ;i++)
		if(a[i] == y2 || abs(i-I) == abs(a[i] - y2) ){ // 2 hậu không cùng cột dòng -> i#j không nằm đ.chéo => i - I # a[i] -I
			return false;
		}
	//Nếu kiểm tra hết các trường hợp vẫn không sai thì trả về true
	return true;
}

// Hàm này chỉ dùng để in ra kết quả thỏa mãn nếu chạy hết dòng i.
void Xuat(int n){
	//in ra một kết quả
	for(int i=1;i<=n;i++)
		printf("i:::%d,a[i]:::: %d \n",i,a[i]);
	printf("\n");
}

void Try(int i,int n){

	//Đầu tiên, ta chạy các cột  1 -> n. Và vòng for này kết thúc chỉ khi j chạy hết vòng for từ 1->n khi i = n.
	for(int j = 1;j<=n;j++){

		// Bắt đầu chạy j cho tới khi tìm ra vị trí xếp không bị trùng.
		if(Ok(i,j)){ 
			
			a[i] = j; // QUAN TRỌNG !!! nó là key để giải bài toán ni. 
			if(i==n) Xuat(n);
			Try(i+1,n);
/**			a[i] = j nó có nghĩa là lấy vị trí cột đầu tiên thỏa mãn các con hậu không ăn nhau.
 * 	ví dụ:
 * B1 a[1] = 1 -> có nghĩa là dòng 1 cột 1 thỏa mãn và ta lưu vị trí cột thỏa mãn lại.
 * B2	Khi đó i tăng lên 1, vì i < n và i thỏa mãn hàm Ok(). Nên lúc này i =2, ta tìm vị trí a[2]
 * 	Chạy i=2, j->n thì ta thấy j = 3 thỏa mãn nên nó gán a[2] = 3.
 * 
 * B3   Khi đó i tăng lên 1, vì i < n và i thỏa mãn hàm Ok(). Nên lúc này i =3, ta tìm vị trí a[3]
 *  Chạy i=3, j->n thì ta thấy không tìm ra bất kì j nào thỏa mãn hàm Ok(). BÂY GIỜ ĐỆ QUY BẮT
 * 	ĐẦU CHẠY
 * B4	Nó sẽ quay lại vị trí khi I = 2 và a[2] =3, thì nó thấy trường hợp a[2] =4 chưa được chạy 
 *  nên nó sẽ gán a[2] = 4.
 * 	
 * B5: khi a[2] bây giờ = 4 rồi. nó tìm vị trí cho a[3] và nó nhận ra không có j nào thỏa mãn hàm Ok() nữa.
 * 
 * B6: Nó bắt đầu quay lại trường hợp khi a[2] = 4. thì thấy j = n = 4 luôn rồi. Vậy thì BÂY GIỜ ĐỆ QUY BẮT
 * ĐẦU CHẠY nó quay trở lại a[1] và nó nhận ra a[1] =2 vẫn thỏa mãn. Lần này nó chọn cột thứ 2
 *
 * B7: nó xét i =2 thì có j = 4 thỏa => a[2] = 4
 * 
 * B8: nó xét i = 3 thì có j = 1 thỏa => a[3] = 1
 * 
 * B9: nó xét i = 4 thf có j = 3 thỏa => a[4] = 3 
 * 
 * B10: để ý bước 6. Nó đã xét a[1] = 2, nhưng mà a[1] = 3 thì chưa xét. Nên nó sẽ quay lại a[1] =3
 * B...: tương tự nó sẽ dừng việc đệ quy cho đế khi nó xét xong a[1] = 4.
 */

		
		}
	}
}

int main(){
	int n = 8;
	// ở đây mình cho bài toán là 8 quân hậu trên bàn 8*8
	int b[21];
	Try(1,n);
	return 0;
}