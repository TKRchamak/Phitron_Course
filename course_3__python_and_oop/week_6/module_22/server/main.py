""" object process """

import glob
import shutil
import os

source_path = '../source/*'
destination_path = '../destination'

# while True:
source_object = glob.glob(source_path)

if len(source_object) > 0:
    object_path = source_object[0]
    shutil.copy(object_path, '.')

    temp_object_name = object_path.split('\\')
    object_name = '/'.join(temp_object_name)

    object_name = object_name.split('/')[-1].split('.')
    prefix = object_name[0]
    postFix = object_name[1]

    os.makedirs('./tempFOlder', mode=0o777)
    with open(temp_object_name[1], 'r')as file:
        lines = file.readlines()

    for item in range(len(postFix)):
        val = (item+1)*10

        fileName = object_name[0] + '_' + str(item) + '.' + object_name[1]

        with open('temp.txt', 'a')as writeFile:
            for line in lines[0:val]:
                writeFile.writelines(line)

        # shutil.copy('temp.txt', f'{destination_path}/{fileName}')
        shutil.copy('temp.txt', f'./tempFOlder/{fileName}')
        os.remove('temp.txt')

    os.remove(object_path)
    file.close()
    writeFile.close()

    shutil.copy('tempFOlder', f'{destination_path}')
    try:
        os.remove(object_path.split('\\')[-1])
    except:
        os.remove(object_name.split('/')[-1][-1])
