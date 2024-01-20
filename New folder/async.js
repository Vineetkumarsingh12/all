let async=new Promise(function (complete,reject){
    setTimeout(function(){console.log("inside first promise");
    // complete(33);
},3000);
complete(1);
});
//inside then passing two arror function
// async.then((value)=>{console.log("completed1");},(error)=>{console.log("error-1");});


async.then((value)=>{
 let b=new Promise(function (com,rej){
        setTimeout(function(){console.log("inside second promise");
        rej(2);
    },3000);
    
    }).then((value)=>{console.log("completed 2");},(error)=>{console.log("error in 2");})
},(error)=>console.log("error in 1"));
