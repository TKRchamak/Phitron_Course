import json
import time
import requests
import pandas as pd

weather_url = 'https://api.weatherapi.com/v1/current.json?key=79a15fa902584305b16165924222510&q=Bangladesh&aqi=no'


def weather_data(url):
    while (True):
        res = requests.get(url)
        content = res.content.decode()
        data = json.loads(content)
        print(data['current'])
        time.sleep(60*30)


weather_data(weather_url)
