// csharp.cs
using System;

public class csharp
{
	public static void Main()
	{
		Console.WriteLine("How many times should we print Cameron? ");
		int intTemp = Convert.ToInt32(Console.ReadLine());
		
		for (int i = 1; i<= intTemp; i++){
			Console.WriteLine("Cameron");
			System.Threading.Thread.Sleep(1000);
		}
	}
}
