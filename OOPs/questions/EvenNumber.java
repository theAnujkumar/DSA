

import java.util.Scanner; //importing Scanner class for user input
// /----- Defining a class for Addition ----/
class EvenNumberCalculator
{
	int[] numbers;// declaration of array to store numbers
	//Constructor
	public EvenNumberCalculator()
	{
		//initializing number of elements to be stored
		numbers = new int[20];
		
		//Creating object of Scanner class to initialize elements into the array
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter any 20 number : ");
		for(int index = 0;index < numbers.length;index++)
		{
			numbers[index] = sc.nextInt(); //Reading input and storing number at given index in array
		}
		System.out.println("--------------------------------------------");
		sc.close();//closing scanner object to avoid resource leak
	}
	
	//method to Display even numbers elements of the array
	
	//method to display data
	public void displayData()
	{
		//Displaying numbers to the user
		System.out.println("Numbers are : ");
		for(int index = 0 ; index < numbers.length ; index++)
		{ if (numbers[index]%2==0) {
			
		}
			System.out.print(numbers[index] + " , ");
		}
		System.out.println("\n ----------------------------------");
		//method for calculating sum 
		
	}
}

public class EvenNumber {

	public static void main(String[] args) {
		// Creating object
		EvenNumberCalculator obj = new EvenNumberCalculator();
		obj.displayData();

	}

} {
    
}
