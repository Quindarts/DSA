/**
 * Sắp xếp như bình thường
 * Nghịch thế:  nếu i < j và a[i]  > a[j] thì ta gọi đó là 1 nghịch thế
 * Mảng chưa được sắp xếp sẽ có nghịch thế
 * a[0] ≤ a[1] ≤ … ≤ a[n -1]
 * Nhận xét:
 * Để sắp xếp một dãy số, ta có thể xét các nghịch thế có trong dãy
 * và làm triệt tiêu dần chúng đi
 * O = n^2
 */
// function swap(a, b) {
//     let temp = a;
//     a = b;
//     b = temp;
// }
const a = [1, 4, 3, 6, 5, 9, 7];
function InterChangeSort(a) {
    for (var i = 0; i < a.length - 1; i++) {
        for (var j = i + 1; j < a.length - 2; j++) {
            if (a[i] > a[j]) {
                let temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    console.log(a);
}
InterChangeSort(a);
