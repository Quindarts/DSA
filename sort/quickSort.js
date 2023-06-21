// ONlog(n)
// Chia mảng thành 2 phần bên trái là mảng tăng dần, bên phải là mảng giảm dần
// lọc các cặp giá trị ko đúng quy luật trái phải để đổi vị trí cho nhau. Đệ quy 
// tới hết
var arr = [1, 4, 3, 6, 5, 9, 7];
function QuickSort(arr, l, r) {
    let mid = arr[(l + r) / 2];
    let i = l,
        j = r;
    do {
        while (arr[i] < mid) i++;
        while (arr[j] > mid) j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    } while (i < j);
    if (l < j) QuickSort(arr, l, j);
    if (r > i) QuickSort(arr, i, r);
}
QuickSort(arr,0,arr.length);
console.log(arr);