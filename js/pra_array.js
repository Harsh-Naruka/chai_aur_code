const teas=("Green tea","Blacktea","oolong tea","white tea","Herbal tea","Chamomoli Tea")

// Remove a particular elemnt using index
const index = teas.indexOf("Chamomoli Tea");
if(index > -1){
    teas.splice(index, 1);
}
console.log(teas)
