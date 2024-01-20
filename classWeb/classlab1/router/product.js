let todo=[{
    id:1,
    name:'todo1',
    done:false
},{
    id:2,
    name:'todo2',
    done:false
}]
todo.map((item)=>{
    if(item.id==1){
        item.done=!item.done;
    }
})
console.log(todo);