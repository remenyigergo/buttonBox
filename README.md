# buttonBox

To reproduce the working state:

1. Ahhoz, hogy az ESP8266 mikrovezérlőket használni tudjuk, először is néhány beállítást végre kell hajtanunk az Arduino IDE-ben.

File → Preferences → Additional Board Manager URLs: ide írjuk be ezt: http://arduino.esp8266.com/stable/package_esp8266com_index.json, majd OK.
Tools → Board → Boards Manager… → itt keressünk arra rá, hogy esp8266 (by ESP8266 Community), és telepítsük fel.
A lépés eredménye: a Tools → Board alatt megjelent számos új programozható lapka.

A boardok közül a Lolin(WeMos) D1 R1-et válasszuk ki.

A device managerben megtudjuk nézni a port számot, azt is a board után a megfelelőre lőjük be.

2. Beállítani a serial monitort

Ehhez a baud 115200at használjuk a monitorban, és a kódban a Serial.begin(115200)-at kell beállítani. + Both NL & CR

3. Upload code