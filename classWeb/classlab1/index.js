const express=require("express");
const app=express();
const PORT=4000;

// get get directory
const path=require("path");
// for handle post request body

app.use(express.urlencoded({extended:true}));


app.listen(PORT,
()=>{
//     console.log(`Server is running at port ${PORT}`);
})


// we can also send the file
// first method 
// create a  folder and name  that folder inside folder make indexe.html because it only render index.html
// app.use(express.static(path.join(__dirname+"static")));

// send method
app.get("/file",(req,res,next)=>{

    //   res.sendFile(__dirname+"/index.html"); // it depend upon operating system
res.sendFile(path.join(__dirname,"/index.html"));
      console.log()
    
 })
 app.get("/index.js",(req,res)=>{
    res.sendFile(path.join(__dirname,"/index.js"));
      console.log("file sended");
 })
 app.get("/submit",(req,res)=>{
    console.log(req.query);
    res.send(req.query);
 })

 app.get("")


//************************** */
// app.get("/product",(req,res)=>{
//     console.log(req.query);
//     res.send("query");
// })

//*************************** */

app.get("/product/:id([a-z]{2})/:email",(req,res)=>{
    console.log(req.params);
    // res.send("query");
    res.send(req.params)
})


// ****************

app.get("/",(req,res,next)=>{
   return  res.send("server is running");
})

//nodemon  restart  server if we change in .js ,.json,.cjs,.mjs
// path package
