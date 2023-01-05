import requests
import re
import csv
from bs4 import BeautifulSoup

source_url = 'https://en.wikipedia.org/wiki/IPhone'
text = requests.get(source_url).text.encode('UTF-8').decode('ascii', 'ignore')
soup = BeautifulSoup(text, 'lxml')
# table = soup.find('table', class_='wikitable')[1]
table = soup.find_all('table', class_='wikitable')
# print(len(table))
# print(table[1])
rows = table[1].find_all('tr')[1:]


iphone_price_dict = {}


for row in rows:
    data = row.find_all(['th', 'td'])
    try:
        version_text = data[0].a.text.split(' ')[1]
        # print(version_text)
        version = re.sub(r"\D", "", version_text)

        price_text = data[-1].text.split('/')[-1]
        price = re.sub(r"\D", "", price_text)
        if version and int(price) > 100:
            # print(version, "--------", price)
            iphone_price_dict[version] = price
    except:
        pass

csvFields = ['version', 'price']
with open('iphone_price.csv', 'w', newline='') as csvFile:
    csvWriter = csv.writer(csvFile)
    csvWriter.writerow(csvFields)
    for key, value in iphone_price_dict.items():
        # print(key, value)
        csvWriter.writerow([key, value])

# print(iphone_price_dict)
