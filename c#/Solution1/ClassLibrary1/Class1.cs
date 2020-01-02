using System;
using System.Xml.Linq;

namespace ClassLibrary1
{
    class Program
    {
        private static void Main(string[] args)
        {
            string id_city = "26063"; // Санкт-Петербург
 
            var t = XDocument.Load(string.Format("http://export.yandex.ru/weather-ng/forecasts/{0}.xml", id_city));  
 
            XNamespace ya = "http://weather.yandex.ru/forecast";
 
 
            var fact = t.Document.Root.Element(ya + "fact");
 
            Console.WriteLine(fact.Element(ya + "station").Value);
            Console.WriteLine(fact.Element(ya + "temperature").Value + " градусов");
            Console.WriteLine(fact.Element(ya + "weather_type").Value);
 
            Console.ReadKey(true);
        }
    }
}