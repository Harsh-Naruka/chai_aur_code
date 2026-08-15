const array=["Green tea","Black tea","oolong tea","white tea","Herbal tea"]
console.log(array);

array.push("macha");
console.log(array);

//Remove a element in. javascript//
const index = array.indexOf("white tea");
if(index>-1){
    array.splice(index,2);
}
console.log(array);

//Filter the list only 
