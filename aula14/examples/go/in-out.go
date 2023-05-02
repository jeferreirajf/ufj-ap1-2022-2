package main

import "fmt"

func main() {
	// int n = 0;
	var n int

	fmt.Print("Enter a number: ")

	fmt.Scanf("%d", &n)

	fmt.Printf("O valor informado foi %d\n", n)
}
