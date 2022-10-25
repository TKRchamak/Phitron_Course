""" Problem:
    Download and change desktop wallpaper automatically
"""

import requests
import json
import PyWallpaper

req_url = 'https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY'


def get_response(req_url):
    return requests.get(req_url)


if __name__ == '__main__':

    # get the json

    response = requests.get(req_url)

    content = response.content.decode('UTF-8')

    # convert json to string
    dict_content = json.loads(content)

    # get the image url
    image_url = dict_content['url']
    # print(image_url)

    # load image by the image_url
    res = requests.get(image_url)

    # save the image in same directory
    with open('apod.png', 'wb') as image:
        image.write(res.content)

    # PyWallpaper.change_wallpaper('apod.png')  # required full path
