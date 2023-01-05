'''
    Flask CRUD operation using Query
'''
from flask import Flask, request, jsonify

app = Flask(__name__)

# data
students = [{'id': 1, 'name': 'rahim'}, {'id': 2, 'name': 'nothing'}]


@app.route('/')
def home():
    return jsonify(students)


# @app.route('/add', methods=['GET', 'POST'])
@app.route('/add', methods=['POST'])
def add():
    # students.append(request.args)
    students.append(request.get_json())
    # return "Student added successfully"
    return "Student added successfully", 200


# @app.route('/update', methods=['GET', 'PUT'])
@app.route('/update', methods=['PUT'])
def update():
    for student in students:
        # if str(student.get('id')) == request.args.get('id'):
        if student.get('id') == request.get_json().get('id'):
            # student.update(request.args)
            student.update(request.get_json())
    return "Student update successfully", 200


# @app.route('/delete', methods=['GET', 'DELETE'])
@app.route('/delete', methods=['DELETE'])
def delete():
    for i in range(len(students)):
        # if str(students[i].get('id')) == request.args.get('id'):
        if students[i].get('id') == request.get_json().get('id'):
            del students[i]
            break
    return "Student deleted successfully"


if __name__ == '__main__':
    app.run(debug=True)
