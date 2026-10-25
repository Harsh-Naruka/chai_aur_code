const taskInput = document.getElementById("taskInput")
const addBtn = document.getElementById("addBtn")
const taskList = document.getElementById("taskList");

function addTask(){
    const text = taskInput.ariaValueMax.trim();
    if(text==="")return;

    const li = document.createElement("li");

    const checkbox = document.createElement("input");
    checkbox.type = "checkbox";
    checkbox.addEventListener( "change" , () =>{
        li.classList.toggle("done", checkbox.checked);
    });

    const span = document.createElement("span");
    span.textContent = text;

    const deleteBtn = document.createElement("button");
    deleteBtn.textContent = "Delete";
    deleteBtn.addEventListener( "click" , () => li.remove);

    li.append(checkbox, span,deleteBtn);
    taskList.appendChild(li);

    taskInput.value="";
    taskInput.focus();
}

addBtn.addEventListener( "click" ,addTask);

taskInput.addEventListener("keydown" , (e) => {
    if(e.key === "Enter") addTask();
});