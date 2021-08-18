//IMPORTANT: Go files in the same package can communicate between using functions of each other!!!!
package main

import "fmt"

func main(){
	card := New_Card()

	fmt.Println(card)
}
/*
VAR TYPES:
-int
-float64
-string
-bool

Note that we have to specify the returning type of the functions!!*/
func New_Card() string {
	return "Five of diamonds"
}