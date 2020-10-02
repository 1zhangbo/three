from urllib import request

import re

url='http://dzh.mop.com/'

url_response=request.urlopen(url)

data = url_response.read().decode('utf-8')

print(data)

jpglist = re.findall('http.+?.jpg',data)

n=1

for each in jpglist:
    print(each)
    r=request.urlopen(each)
    response = r.read()
    with open(r"C:\Users\asus\新建文件夹 (2)\py.jpg",'wb+')as f:
        f.write(response)
        n+=1
    
 
        
