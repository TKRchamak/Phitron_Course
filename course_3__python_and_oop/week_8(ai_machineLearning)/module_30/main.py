'''install pandas for ---- file read, '''
'''install matplotlib for draw plot  '''
'''install sklearn for machine learning'''

import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
data = pd.read_csv('HR_comma_sep.csv')

# print(len(data))
# print(data.size)

# step-1: find missing data from any row or any column
# print(data.isnull().values.any())

# step-2: check data type
# print(data.dtypes)

# find salary category form the data
salary_category = data.salary.unique()

# find department category form the data
dept_category = data.Department.unique()
# print(dept_category)


# replace salary category to number
clean_up_values = {
    'salary': {
        'low': 1,
        'medium': 2,
        'high': 3
    }
}

# replace data
data.replace(clean_up_values, inplace=True)
# salary_category = data.salary.unique()
# print(data)

# step-4: get dummies for the department
dummies = pd.get_dummies(data.Department)
# print(dummies)

# step-5: marge dummies
merged = pd.concat([data, dummies], axis='columns')
# print(merged)

# step-6: drop unnecessary columns
final_data = merged.drop(['Department', 'technical'], axis='columns')
# print(list(final_data.columns))


# step-7:plot data relation with final data
# plt.scatter(x=final_data.satisfaction_level, y=final_data.left)
# plt.show()

# step-8: set train data for the sklearn
X = final_data.drop('left', axis='columns')
Y = final_data.left

X_train, X_test, Y_train, Y_test = train_test_split(
    X, Y, test_size=0.2)  # test_size=0.2===20%

model = LogisticRegression()  # create a model for machine learning
model.fit(X_train, Y_train)  # train the model for perform

accuracy = model.score(X_test, Y_test)
print(accuracy)


result = model.predict(
    [[0.89, 0.87, 6, 232, 5, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 0, 0]])
print(result)
