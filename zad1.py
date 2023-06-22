import os

def print_docs(directory):
	for dirpath, dirnames, filenames in os.walk(directory):
		print('Soderjimoe papki:', dirpath)
	for filename in filenames:
		print('Soderjimoe podpapok:',os.path.join(dirpath, filename))
print_docs('/home/user/Desktop/zadaniya')
