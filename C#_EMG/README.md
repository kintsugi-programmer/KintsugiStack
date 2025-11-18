# C#_EMG

```cs
// C# 
// - Modern OOP Lang
// - By Microsoft
// - for
//   - Web ASP.NET
//   - Desktop .NET
//   - Mobile MAUI
//   - GameDev Unity
//   - APIs
//   - Cloud Etc
// file extension: .cs
// New Template: dotnet new console 
// Run: dotnet run
// Single Line Comment : //
using System;// System Lib Namespace

class Car{ // Class
    public string model;
    public Car(string n){
        model = n;
    }
    public void Drive(){
        Console.WriteLine(model+" Drive........");
    }
}

class Program // Class // Define Class
{
    static int Sum(int a, int b) // Method
    {
        return a+b;
    }

    static void Greet(string name){
        Console.WriteLine("Hello"+ name);
    }

    static void Main(string[] args) // Method // Main() is entry point
    {   
        #pragma warning disable CS0219 // directive warning disable of CS0219(unused vars) // ESlint type stuff
        // ; : EOL
        // Output
        Console.WriteLine("Hello World"); // Print Output to console // WriteLine = Print + \n new line
        Console.Write(" !!!"); // Print Output to console // Write = Just Print, no new line stuff
        // Data Types
        int age = 10; // int
        bool option = true; // bool
        string name = "bali"; // string, ""
        char grade = 'A'; // char, ''
        float ratings = 555.555F; // float, don't forget to put F suffix
        #pragma warning restore CS0219 // restore warnings 
        double phno = 1234567890; // double
        var character = "A" ; // auto type interference
        // Input
        Console.Write("\nName:");
        string name1 = Console.ReadLine();
        Console.Write("\nNum:");
        int num1 = int.Parse(Console.ReadLine());
        Console.WriteLine(name1+Convert.ToString(num1)); // no string.Parse(), use Convert.ToString
        // Operators
        // + - / % Arith
        // == != >= <= < > Comp
        // && || ! Logical
        // Conditional Statements
        // if else
        if (1>2)
            Console.WriteLine(1);
        else 
            Console.WriteLine(2);
        // switch case
        int day = 1;
        switch(day){
            case 1: Console.WriteLine("Monday");break;
            default : Console.WriteLine("Tuesday");break;
        }
        // Loops 
        // For/While/foreach
        string[] arr = {"a","b","c"};
        foreach (string i in arr){
            Console.WriteLine(i);
        }
        // Arrays
        // int[] nums  = {1,2,3};
        // string[] names = new string[3];
        // name[0] = "bali";
        // Functions/Methods
        Greet("Siddhant");
        Console.WriteLine(Sum(2,4));
        // Classes and Objects
        // Car Ferrari = new Car(); // Obj // When No Constructor
        // Ferrari.model = "SF75";
        // Ferrari.Drive();
        Car RB = new Car("RB2025"); // Right Now
        RB.Drive();
        // OOP
        // Encapsulation	Hide data using private + properties
        // Inheritance	Reuse code from parent class
        // Polymorphism	Same method, different behavior
        // Abstraction	Show only essentials

        }
}

// bali-king@war-machine:~/BaliGit/KintsugiStack/C#_EMG$ dotnet run 
// /home/bali-king/BaliGit/KintsugiStack/C#_EMG/Program.cs(56,24): warning CS8600: Converting null literal or possible null value to non-nullable type. [/home/bali-king/BaliGit/KintsugiStack/C#_EMG/C#_EMG.csproj]
// /home/bali-king/BaliGit/KintsugiStack/C#_EMG/Program.cs(58,30): warning CS8604: Possible null reference argument for parameter 's' in 'int int.Parse(string s)'. [/home/bali-king/BaliGit/KintsugiStack/C#_EMG/C#_EMG.csproj]
// /home/bali-king/BaliGit/KintsugiStack/C#_EMG/Program.cs(67,13): warning CS0162: Unreachable code detected [/home/bali-king/BaliGit/KintsugiStack/C#_EMG/C#_EMG.csproj]
// /home/bali-king/BaliGit/KintsugiStack/C#_EMG/Program.cs(52,16): warning CS0219: The variable 'phno' is assigned but its value is never used [/home/bali-king/BaliGit/KintsugiStack/C#_EMG/C#_EMG.csproj]
// /home/bali-king/BaliGit/KintsugiStack/C#_EMG/Program.cs(53,13): warning CS0219: The variable 'character' is assigned but its value is never used [/home/bali-king/BaliGit/KintsugiStack/C#_EMG/C#_EMG.csproj]
// Hello World
//  !!!
// Name:Siddhant Bali

// Num:100
// Siddhant Bali100
// 2
// Monday
// a
// b
// c
// HelloSiddhant
// 6
// RB2025 Drive........
// bali-king@war-machine:~/BaliGit/KintsugiStack/C#_EMG$ 

```


