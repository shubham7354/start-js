

// document.getElementById('addmore').addEventListener("click",addMoreInli);
function addMoreInli(){
   let val =document.getElementById('inputbox').value;
    let a= document.createElement("li");
        a.innerText=val;

        document.getElementById('uli').appendChild(a);
        document.getElementById("inputbox").value="";
}