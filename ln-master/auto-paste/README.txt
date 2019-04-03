REQUIREMENTS:
* Windows
* NoxPlayer
* ln.nikkis.info account
* have your wardrobe uploaded there (follow their guide)

HOW TO USE:
1. go to ln.nikkis.info and look for the level you're on
2. copy all the items that you need in one go
3. launch suit-master.py
4. press right click to move forward with your suit
5. press space to go backwards
6. press esc to quit

GET THE PROGRAM WORKING:
1. open suit-master.py with an editor (Notepad)
2. scroll down and look for "click(1009,556)", "click(936,463)" and "win32api.SetCursorPos((1127,118))"
3. change those numbers according to your NoxPlayer location
4. use PrintScreen and Paint to find where the cursor should go

COMMON BUGS:
* when those numbers are poorly approximated then the program might quit your level
* when your game is running slow, the program might not have enough time to do everything that it's supposed to do;
  in this case, open suit-master.py with an editor and look for "time.sleep(some number)";
  increase that number for every instance of this instruction
