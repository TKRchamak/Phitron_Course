import auto_download_set_wallpaper


req_url = 'https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY'


def test_get_response():
    res = auto_download_set_wallpaper.get_response(req_url)
    assert res.status_code == 200


def test_sum():
    assert 200 == 200


def test_bum():
    assert 'ok' == 'ok'
