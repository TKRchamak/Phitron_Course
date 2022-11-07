# Open a file using the open() function.
# Write to the file using the write() method..
# Close the file using the close() method.

import datetime


def id_generator():
    curr = datetime.datetime.now()
    generated_id = curr.strftime("%m%d%y%H%M%S")
    return generated_id


if __name__ == "__main__":
    student_name = input("student_name : ")
    mark = input("mark : ")
    with open("student_sheet.txt", 'a') as f:
        f.write(
            f'student_id: {id_generator()}, student_name: {student_name}, mark: {mark}\n')
        f.close()
