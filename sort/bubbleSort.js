/*
Xắp xếp mảng từ cuối xếp lên
Xuất phát từ cuối dãy, đổi chỗ các cặp phần tử kế cận để đưa
phần tử nhỏ hơn trong cặp phần tử đó về vị trí đầu dãy.
O = n^2
*/
const a = [1, 4, 10, 6, 5, 9, 7];
function BubbleSort(a) {
    for (let i = 0; i < a.length; i++) {
        for (let j = a.length - 1; j > i; j--) {
            if(a[j-1] > a[j]){
                let tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
    console.log(a);
}
BubbleSort(a);