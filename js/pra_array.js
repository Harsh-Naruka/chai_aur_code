const teas=["Green tea","Blacktea","oolong tea","white tea","Herbal tea","Chamomoli Tea"]

// Remove a particular elemnt using index
const index = teas.indexOf("Chamomoli Tea");
if(index > -1){
    teas.splice(index, 1);
}

//filter the list 
teas.filter((tea) => tea != "Herbal tea");

//Sort the array teas in alphabetical order.
console.log(teas.sort());

//use a loop to count how many teas are caffinated

for(let i=0;i<teas.length;i++){
let ctea = 0;
if(tras[i] != "Herbal tea"){
    ctea++;
}
}

//longest character in array