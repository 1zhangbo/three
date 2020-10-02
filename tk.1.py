import urllib.request

import urllib.parse

url="http://fanyi.youdao.com/translate?smartresult=dict&smartresult=rule"


head={}
head['User-Agent']='Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.100 Safari/537.36'
data = {}

data['type']='AUTO'
data['i']='i love fishc.com!'
data['doctype']='json'
data['xmlVersion']='1.6'
data['keyfrom']='fanyi.web'
data['ue']='utf-8'
data['typoResult']='true'

data=urllib.parse.urlencode(data).encode('utf-8')

req=urllib.request.Request(url,data,head)
response=urllib.request.urlopen(req)

html=response.read().decode('utf-8')

print(html)
