""" chat bot

    steps: 
    1. input/listen
    2. process/decide
    3. output/talkBack
"""

greed_word = ['hi', 'hello', 'hay', 'yo']
bye_word = ['bye', 'tata']


def listen():
    return input('say something :')


def decide(command):
    command = command.lower()
    word_list = command.split(' ')
    # print(word_list)
    for word in word_list:
        if word in greed_word:
            talkBack('Nice to meet you')

        if word in bye_word:
            talkBack('Bye Bye')


def talkBack(talk):
    print(talk)


command = listen()
decide(command)
