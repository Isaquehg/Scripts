var now = new Date();
var h = now.getHours();//Hours
var m = now.getMinutes();//Minutes
var s = now.getSeconds();//Seconds

console.log(`It´s ${h}:${m}:${s} now`);
if(h < 12 && h > 6){
    console.log('Good Morning!');
}
else if(h >= 12 && h <= 16){
    console.log('Good Afternoon!');
}
else if(h > 16 && h <= 19){
    console.log('Good Evening!');
}
else{
    console.log('Good Night!');
}