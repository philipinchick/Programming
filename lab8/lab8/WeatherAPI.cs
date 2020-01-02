using System;
using System.Net;
using System.Xml;


namespace lab8
{
    public class WeatherApi {
        public WeatherApi(string city) {
            SetCurrentUrl(city);
            xmlDocument = GetXML(_currentUrl);
        }

        public float GetTemp() {
            XmlNode tempNode = xmlDocument.SelectSingleNode("//temperature");
            XmlAttribute tempValue = tempNode.Attributes["value"];
            string tempString = tempValue.Value;
            return float.Parse(tempString);
        }

        private const string Apikey = "ec5f89cc691ebe21b53cfbc1e4165663";
        private string _currentUrl;
        private XmlDocument xmlDocument;

        private void SetCurrentUrl(string location) {
            
            _currentUrl = "http://api.openweathermap.org/data/2.5/weather?q="
                         + location + "&mode=xml&units=metric&APPID=" + Apikey;
        }

        private XmlDocument GetXML(string CurrentURL) {
            using (WebClient client = new WebClient()) {
                string xmlContent = client.DownloadString(CurrentURL);
                XmlDocument xmlDocument = new XmlDocument();
                xmlDocument.LoadXml(xmlContent);
                return xmlDocument;
            }
        }
        static void Main()
        {
            Console.WriteLine("Введите столицу");
            String city = Console.ReadLine();
            try
            {
                WeatherData weather = new WeatherData(city);
                weather.CheckWeather();
                System.Console.WriteLine(weather.Temp);
            }
            catch
            {
                Console.WriteLine("Цэ не столица либо ты дебил, пиши без ошибок ");
            }
        }
    }
    
}