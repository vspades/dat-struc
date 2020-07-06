from zipfile import ZipFile
from sys import argv

with ZipFile(argv[1], 'r') as zipObj:
	zipObj.extractall(argv[1].split('.')[0] + '_unzipped')
