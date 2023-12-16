// Dạng toán: Chuỗi số. So sánh 2 chuỗi đảo ngược.
// B1: tạo 1 array 26 giá trị 0 => tương ứng với 26 kí tự A_Z trong tiếng anh
// B2: chạy 1 for s1 or s2. thêm kí tự đó vào mảng nếu nằm trong s1, trừ kí tự đó nếu nằm trong s2
// B3: return nếu count của array  = 0 thì trả về true
//
let s1 = "abc"
let s2 = "cba"
const isDaoNguoc  = (s1, s2) => {
    
    const charMap  = Array(26).fill(0); // khởi tạo mảng charMap 26 kí tự, set value  = 0 cho 26k.tự

    for(let i = 0;  i  < s1.length ; i++){
        let key  ='a'
        charMap[ s1.charCodeAt(i) - key.charCodeAt(0)] ++ ;
        charMap[ s2.charCodeAt(i) - key.charCodeAt(0)] -- ;
    }
    return charMap.every(count => count === 0);
    // every lấy ra từng giá trị trong phần tử và so sánh với số 0.
    // nếu charMap  không có phần tử nào thay đổi giá trị => 2 chuỗi đảo ngược
}

/// method array.every
const isSubset = (array1, array2) =>
array2.every((element) => array1.includes(element));

console.log(isSubset([1, 2, 3, 4, 5, 6, 7], [5, 7, 6])); // true
console.log(isSubset([1, 2, 3, 4, 5, 6, 7], [5, 8, 7])); // false