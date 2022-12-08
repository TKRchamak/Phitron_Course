""" object process """

import glob
import shutil
import os

source_path = '../source/*'
destination_path = '../destination'

while True:
    source_object = glob.glob(source_path)

    if len(source_object) > 0:
        object_path = source_object[0]
        shutil.copy(object_path, '.')

        temp_object_name = object_path.split('\\')
        object_name = '/'.join(temp_object_name)

        object_name = object_name.split('/')[-1].split('.')
        prefix = object_name[0]
        postFix = object_name[1]

        for item in range(len(postFix)):
            fileName = object_name[0] + '_' + str(item) + '.' + object_name[1]
            shutil.copy(object_path, f'{destination_path}/{fileName}')

        os.remove(object_path)
        try:
            os.remove(object_path.split('\\')[-1])
        except:
            os.remove(object_name.split('/')[-1][-1])
