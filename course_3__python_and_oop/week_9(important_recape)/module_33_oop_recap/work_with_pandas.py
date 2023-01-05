import pandas as pd
'''
    akta dictionary k dataframe a convert kora jay 
    pd.DataFrame(dct, index='0')
'''

# index_col --->index position a kondata dekhate chai
dataFrame = pd.read_csv('filename.csv', index_col='Age')
only_five_data = dataFrame.head()  # it gives fast 5 data only

# print(dataFrame.describe()) # this is give all average value
# print(dataFrame.groupby('column_name').mean())
# print(dataFrame['column_name'].value_counts())
# print(dataFrame.loc[1])

# dataFrame.sort_values('age', ascending=True, inplace=True)
# dataFrame.sort_values(['age', 'BMI'], ascending=[True, False], inplace=True)


'''
    data cleaning
    dropna() -----> j row te null value page oi row gulo delete kore dibe
    fillna() -----> j row gulote null pabe oita kono akta value dia fill kore dibe
'''
# print(dataFrame.dropna())
# print(dataFrame.fillna(0))
