import pandas
from sklearn.linear_model import LinearRegression

data = pandas.read_csv('iphone_price.csv')
model = LinearRegression()
model.fit(data[['version']], data[['price']])
predictPrice = model.predict([[20]])
print(predictPrice)
