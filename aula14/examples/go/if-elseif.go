package main

import "fmt"

func main() {
	fmt.Print("Enter a number: ")

	var n int

	fmt.Scanf("%d", &n)

	if n%2 == 0 {
		fmt.Println("It is an even number.")
	} else {
		fmt.Println("It is an odd number.")
	}
}
