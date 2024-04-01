package main

import (
	"fmt"
	"unicode/utf8"
	"errors"
	"strings"
)

type gasEngine struct{
	kml uint8
	litres uint8
	//ownerInfo owner
	owner
	int
}

type electricEngine struct{
	mpkwh uint8
	kwh uint8
}

type owner struct{
	name string
}


func (e gasEngine) kmsLeft() uint8{
	return e.kml * e.litres
}

func (e electricEngine) kmsLeft() uint8{
	return e.kwh * e.mpkwh
}


//INTERFACE

type engine interface{
	kmsLeft() uint8
}


func canMakeIt(e gasEngine , kms uint8){
	if kms < e.kmsLeft() {
		fmt.Println("Can Make it")
	}else{
		fmt.Println("Can't Make it")
	}
}



func main(){

	printMe("Jai Mahakal")

	var intNum int16 = 32767
	intNum = intNum + 1;
	fmt.Println(intNum)

	var floatNum float64 = 12345.456
	fmt.Println(floatNum)

	// var myString string = "Hello \nWorld"
	var myString1 string = `Hello
	 World`

	fmt.Println(utf8.RuneCountInString(myString1))


	var intNum1 int;
	fmt.Println(intNum1)

	var result, remainder, err = intDivision(10,0)

	if err!=nil {
		fmt.Printf(err.Error())
	}else if remainder == 0{
		fmt.Printf("Hey %v",result)
	}else{
		fmt.Printf("Hey %v and %v",result,remainder)
	}

	switch  {
		case err!=nil:
			fmt.Printf(err.Error())
		case remainder == 0:
			fmt.Printf("Hey %v",result)
		default:
			fmt.Printf("Hey %v and %v",result,remainder)
		
	}
	fmt.Println()


	//array maps and slices

	var arr [3]int
	arr1  := [3]int{1,2,3}

	fmt.Println(arr1)
	fmt.Println(arr)

	var slice []int = []int{1,2,3,4}
	fmt.Println(slice)
	slice = append(slice, 5)
	fmt.Println(slice)

	slice2 := []int{6,7,8}
	
	slice = append(slice, slice2...)
	fmt.Println(slice)

	var slice3 []int = make([]int,3,8)
	fmt.Println(slice3)


	var myMap map[string]int = make(map[string]int)
	fmt.Println(myMap)

	var myMap2 = map[string]int{"Adam":23,"Aryan":19}
	fmt.Println(myMap2)
	fmt.Println(myMap2["Aryan"])
	fmt.Println(myMap2[""])

	var age , present = myMap2["ryan"]

	delete(myMap2, "Adam")

	if present {
		fmt.Println(age)
	}else{
		fmt.Println("Not Found")
	}


	//iterating through ds

	for name := range myMap2{
		fmt.Printf("Name: %v, Age: %v \n",name,myMap2[name])
	}

	for i,v := range arr1{
		fmt.Printf("Index : %v, Value : %v \n",i,v)
	}


	//loops

	i := 0

	for i<5{
		fmt.Println(i)
		i+=1
	}

	for {
		if i>=10{
			break
		}
		fmt.Println(i)
		i+=1
	}

	for i:=10;i<15;i++ {
		fmt.Println(i)
	}


	//stringss

	var myString = []rune("resume")
	var indexed = myString[0]

	fmt.Printf("%v, %T\n",indexed,indexed)

	for i,v := range myString{
		fmt.Printf("%v: %v\n",i,v)
	}

	var myRune = 'a'
	fmt.Printf("\nmyRune = %v",myRune)



	var strSlice = []string{"a","b","c","d","e","f","g"}
	var catStr = ""

	//string builder
	var strBuilder strings.Builder

	for i:= range strSlice{

		strBuilder.WriteString(strSlice[i])

		//inefficient - creates new string everytime
		// catStr += strSlice[i]
	}

	catStr = strBuilder.String()

	fmt.Printf("\n%v\n",catStr)





	//structs

	var myEngine gasEngine = gasEngine{80,5,owner{"Aryan"},11}

	fmt.Println(myEngine.kml , myEngine.litres)

	//anonymous struct
	var myEngine1 = struct{
		kml uint
		litres uint
	}{10,13}
	fmt.Println(myEngine1)





	//POINTERS

	var p *int32 = new(int32)
	var ii int32 = 10
	
	fmt.Printf("\nValue of Pointer - %v\n",*p)
	fmt.Printf("Value of i - %v\n",ii)
	
	p = &ii
	fmt.Printf("\nValue of Pointer - %v\n",*p)



	//generics

	var intSlice = []int{1,2,3,4,5,6,7,8,9,10}
	fmt.Println(sumSlice[int](intSlice))


}

func sumSlice[T int | float32 | float64](slice []T) T{
	var sum T
	for _, v := range slice{
		sum+=v
	}
	return sum
}


func printMe(printValue string){
	fmt.Println(printValue)
}

func intDivision(num int, den int) (int,int,error) {
	var err error

	if den == 0 {
		err = errors.New("Can't Divide By Zero")
		return 0,0,err
	}

	var result int = num/den
	var remainder int = num%den

	return result,remainder,err
}