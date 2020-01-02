class WeatherData {
    public WeatherData(string City)
{
    city = City;
}
private string city;
private float temp;
private float tempMax;
private float tempMin;

public void CheckWeather()
{
    WeatherAPI DataAPI = new WeatherAPI(City);
    temp = DataAPI.GetTemp();
}

public string City { get => city; set => city = value; }
public float Temp { get => temp; set => temp = value; }
public float TempMax { get => tempMax; set => tempMax = value; }
public float TempMin { get => tempMin; set => tempMin = value; }
}