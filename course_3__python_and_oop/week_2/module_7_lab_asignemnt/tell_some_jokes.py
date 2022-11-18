""" tell_some_jokes
    get jokes from this api : 
"""
import pyjokes


def tell_some_jokes():
    listen = True
    while (listen):
        ans = input('Hay are you listen a joke : (yes/no) : ')
        if ans.lower() == 'yes':
            which_Type = input(
                'Which type of joke are you want : (neutral / chuck / all) : ')
            if which_Type.lower() == 'neutral':
                print(pyjokes.get_joke('en', 'neutral'))
            elif which_Type.lower() == 'chuck':
                print(pyjokes.get_joke('en', 'chuck'))
            else:
                print(pyjokes.get_joke('en', 'all'))
        else:
            listen = False
            pass


tell_some_jokes()
