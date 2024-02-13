# arduino_lcd_movement
This library allows for line changes with the lcd library. The class is called lcdshift; and the funcions are: begin, initialize, print,  update, go, end. variable used are cline & nline. This library is based on pages and lines. Lines are strings that will be displayed on the lcd screen. Pages are certain lines that can be displayed when a line is selected. Pages also have lines that can be view by scrolling up or down with a button. 

Begin - starts the library. 

initialize - sets the initial lines that can be called

print - Prints two lines onto the lcd screen. 

update - chagned the oringial initialized lines. 

go - goes to a seperate page based on the top line. 

cline - variable that keeps track of the top line being displayed on the lcd screen 
nline - the next line after cline that is being displayed. 
