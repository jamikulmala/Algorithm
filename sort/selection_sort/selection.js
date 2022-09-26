
let sort = document.getElementById("sort");
let reset = document.getElementById("return");

sort.addEventListener("click", function sortArr(){
    let text = document.getElementById("array").value;
    let numbers = text.split(' ').map(Number);
    let sorted_numbers = selection(numbers);
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

function selection(arr){
    for(var i = 0; i < arr.length-1; ++i){
        let min = i;
        for(var j = i+1;j < arr.length; ++j){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr, i, min);
    }
    return arr;
}

