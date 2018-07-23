using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Life
{

   // static void birthday(string[] args)
    // Console.ForegroundColor = ConsoleColor.White;    
    class Character
    {
        static string firstname;
        static string lastname;
    }

    class Program
    {
        static void Birthday()
        {
            Random rand = new Random();
            Console.Write("{0}", rand.Next(12) + 1);
            Console.Write("/{0}", rand.Next(29) + 1);
            Console.Write("/{0}", rand.Next(10) + 1991);
        }

        static void Main(string[] args)
        {
            //This block of code if for the character
            string firstname;
            string lastname;
          


            //This block of code is the inrtoduction and
            //character creation
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine("You:");
            Console.Write("Birthday: ");
            Birthday();


        }

       
    }
}
