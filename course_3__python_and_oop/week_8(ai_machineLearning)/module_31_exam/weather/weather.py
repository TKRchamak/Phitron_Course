import csv
import math


def weatherUpdate(rows):
    fieldnames = ['date', 'rainfall']

    with open('weekly_weather_data.csv', 'w', encoding='UTF8', newline='') as file:
        # writer = csv.writer(file)
        writer = csv.DictWriter(file, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(rows)

    file.close()


def getMean(data):
    sum = 0
    for item in data:
        sum += int(item['rainfall'])
    return sum/len(data)


def getStandardDeviation(data, mean):
    sum = 0
    for item in data:
        sqr = int(item['rainfall'])**2
        # sqr = pow(int(item['rainfall']),2)
        sum += sqr
    temp = sum/len(data)
    sqrtAbleData = temp - (mean**2)
    res = math.sqrt(sqrtAbleData)
    return res


if __name__ == '__main__':
    lowest = 1000000
    hight = -10000000
    # data = []

    data = [{'date': '01/02/22', 'rainfall': 11},
            {'date': '02/02/22', 'rainfall': 12},
            {'date': '03/02/22', 'rainfall': 13},
            {'date': '04/02/22', 'rainfall': 14},
            {'date': '05/02/22', 'rainfall': 13},
            {'date': '06/02/22', 'rainfall': 12},
            {'date': '07/02/22', 'rainfall': 11}]

    for i in range(1, 8):
        date = input('Date : ')
        rainfall = input('Average rainfall at that day in celsius : ')
        if int(rainfall) < lowest:
            lowest = int(rainfall)
        if int(rainfall) > hight:
            hight = int(rainfall)
        rowData = {
            'date': date,
            'rainfall': int(rainfall)
        }
        data.append(rowData)

    weatherUpdate(data)

    print(f'Maximum rainfall in the week : {hight}')
    print(f'Minimum rainfall in the week : {lowest}')
    for item in data:
        print('Date :', item['date'], '======> rainfall : ', item['rainfall'])

    mean = getMean(data)
    print('The mean is :', mean)

    res = getStandardDeviation(data, mean)
    print('The standard deviation is :', res)
