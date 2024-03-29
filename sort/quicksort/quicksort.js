
let sort = document.getElementById("sort");
let reset = document.getElementById("return");

sort.addEventListener("click", function sortArr(){
    let text = document.getElementById("array").value;
    let numbers = text.split(' ').map(Number);
    let sorted_numbers = quickSort(numbers, 0, numbers.length-1);
    document.getElementById("result").innerText = sorted_numbers;
    });

reset.addEventListener("click", function resetArr(){
    let text = document.getElementById("array").value;
    let numbers = text.split(' ').map(Number);
    document.getElementById("array").value = text;
    document.getElementById("result").innerText = numbers;
});

function swap(items, left, right){
    var temp = items[left];
    items[left] = items[right];
    items[right] = temp;
}

function partition(arr, left, right) {
    var pivot = right;
    var ptr = left-1;
    for(i=left;i <= right;++i){
        if(arr[i] <= pivot){
            ptr += 1;
            swap(arr, ptr, i);
        }
    }
    swap(arr, ptr+1, right);
    return ptr+1;
}

function quickSort(arr, left, right) {
    var pivot;
    if(arr.length == 1){
        return arr;
    }
    if(left < right){
        pivot = partition(arr, left, right);
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }
    return arr;
}