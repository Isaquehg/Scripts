package main

import "fmt"

/*
-Arrays have a FIXED SIZEV and can't grow
-Slices' size can grow or shrimp, but elements have to be the SAME DATA TYPE!
*/
func main(){
	slice := []string{"Card1", "Card2"}//declaring slices
	slice = append(slice, "Card3")//adding elements to it
	
	//iteranting through the slice
	for i, card := range slice{	//Syntax: for INDEX, OBJECT := range SLICES{}
		fmt.Println(i, card)
	}
}