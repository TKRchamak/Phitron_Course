# if __name__ == "__main__":
list_of_pera = []
count = 0
flag = True
with open('book.txt', 'r') as book:
    text = book.read()
    list_of_pera = text.split('--')

while (flag):
    print(list_of_pera[count])

    if count >= len(list_of_pera)-1:
        print('Book finished')
        flag = False

    else:
        input_data = input(
            '[enter or input page no - read more , press q to quit] : ')

        try:
            if int(input_data) > 0:
                temp = count + int(input_data)+1
                if temp < len(list_of_pera):
                    count = temp
                else:
                    count += 1
            else:
                int(input_data) < 0
                temp = count + int(input_data)-1
                if temp >= 0:
                    count = temp
                else:
                    print('No page found')
        except:
            if input_data == 'q':
                flag = False
                pass
            elif input_data == '':
                count += 1

        if count == len(list_of_pera):
            flag = False
