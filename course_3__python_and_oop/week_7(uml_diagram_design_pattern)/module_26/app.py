''' my cute app '''

from flask import Flask, request

database = {'minhaj': '100'}

app = Flask(__name__)


@app.route('/', methods=['GET'])
def home():
    return 'welcome to me new flask api app'


@app.route('/getdata/', methods=['GET'])
def get_data():
    return database

# url/adddata/?name=id


@app.route('/adddata/', methods=['GET', 'PUT'])
def add_data():
    key, value = list(request.args.items())[0]
    database[key] = value
    return f"{key} added"

# url/deletedata/?username


@app.route('/deletedata/', methods=['GET', 'DELETE'])
def delete_data():
    # key, value = list(request.args.items())[0]
    _, value = list(request.args.items())[0]
    database.pop(value)
    return f"{value} deleted"


if __name__ == "__main__":
    app.run()
