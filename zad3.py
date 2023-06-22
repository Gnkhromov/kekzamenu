import csv
import time
with open('rows_300.csv', 'w', newline='') as f:
	writer = csv.writer(f)
	headers = ['#', 'Secunda', 'Microsecunda']
	writer.writerow(headers)
	for i in range(1, 301):
		sec = int(time.time())
		microsec = int(time.time() * 1000) % 1000
		time.sleep(0.01)
		row=[i, sec, microsec]
		writer.writerow(row)
