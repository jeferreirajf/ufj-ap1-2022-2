package main

import (
	"fmt"
	"sync"
	"time"
)

var wg sync.WaitGroup

func fibonacci(x int) int {
	if x < 2 {
		return x
	}

	return fibonacci(x-1) + fibonacci(x-2)
}

func fibonacciArray(array []int) {
	// Reserva o espaco de memoria necessario
	// var results []int = make([]int, len(array))

	for i := 0; i < len(array); i++ {
		fmt.Printf("Fib(%d) = %d\n", array[i], fibonacci(array[i]))
	}

	wg.Done()
}

func main() {

	array := []int{45, 32, 25, 48, 11, 18, 20, 39, 48}

	wg.Add(1)

	initialTime := time.Now()

	go fibonacciArray(array)

	fmt.Println(array)

	var doubleArray []int = make([]int, len(array))

	for i := 0; i < len(array); i++ {
		doubleArray[i] = array[i] * 2
	}

	fmt.Print("doubleArray = ")
	fmt.Println(doubleArray)

	wg.Wait()

	timeTotal := time.Since(initialTime)

	fmt.Printf("\nTook %s\n", timeTotal)
}
