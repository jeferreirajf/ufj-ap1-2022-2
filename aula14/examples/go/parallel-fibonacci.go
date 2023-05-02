package main

import (
	"fmt"
	"sync"
	"time"
)

func fibonacci(x int) int {
	if x < 2 {
		return x
	}

	return fibonacci(x-1) + fibonacci(x-2)
}

var wg sync.WaitGroup

func printFibonacci(x int) {
	fmt.Printf("Fib(%d) = %d\n", x, fibonacci(x))
	wg.Done()
}

func main() {
	array := []int{45, 32, 25, 48, 11, 18, 20, 39, 48}

	initialTime := time.Now()

	for i := 0; i < len(array); i++ {
		wg.Add(1)
		go printFibonacci(array[i])
	}

	wg.Wait()

	timeTotal := time.Since(initialTime)

	fmt.Printf("\nTook %s\n", timeTotal)
}
