package main

import "fmt"

func sumNumbers(number1 float32, number2 float32) float32 {
	//sum := number1 + number2
	var sum float32 = number1 + number2
	return sum
}

func minusNumbers(number1 float32, number2 float32) float32 {
	return number1 - number2
}

func timesNumbers(number1 float32, number2 float32) float32 {
	return number1 * number2
}

func divisionNumbers(number1 float32, number2 float32) float32 {
	return number1 / number2
}

func readInt(msg string) int {
	fmt.Printf("%s: ", msg)
	var number int

	fmt.Scanf("%d", &number)
	return number
}

func printMenu() {
	fmt.Println("1 - Sum")
	fmt.Println("2 - Subtraction")
	fmt.Println("3 - Multiplication")
	fmt.Println("4 - Division")
	fmt.Println("5 - Exit")
	fmt.Println()
}

func main() {
	var number1 float32
	var number2 float32
	var option int = 0

	printMenu()
	option = readInt("Choose your option: ")

	for option != 5 {

		fmt.Printf("Enter two numbers: ")

		fmt.Scanf("%f", &number1)
		fmt.Scanf("%f", &number2)

		var result float32 = 0.0

		if option == 1 {
			result = sumNumbers(number1, number2)
		} else if option == 2 {
			result = minusNumbers(number1, number2)
		} else if option == 3 {
			result = timesNumbers(number1, number2)
		} else if option == 4 {
			result = divisionNumbers(number1, number2)
		}

		fmt.Printf("The resulting sum is %f\n", result)

		fmt.Println()

		printMenu()
		option = readInt("Choose your option: ")
	}
}
