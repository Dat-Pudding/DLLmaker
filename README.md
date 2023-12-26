# What is this app for?
It's meant to turn your built executable that you made in Qt and can't run without IDE due to missing DLLs into an standalone executable with all the necessary DLLs in the same directory as the executable itself.

## How do I install it?
For now you have to install it manually but a setup is planned
### Either:
1. Click on the green "Code" button
2. "Download Zip" then unpack the zip file where you want the "installation path" to be
3. in the unpacked directory navigate to .\DLLmaker\Release\Current\DLLmaker_Qt_v#.#
  
### Or:
1. Click on "Releases"
2. look for the tag "current" *(it also got the label "Latest")*
3. download DLLmaker_Qt_v#.#.rar
4. unpack the RAR archive where you want the "installation path" to be

### Then
- Either "Drag & Drop" the DLLmaker.exe shortcut file on your Taskbar/Desktop/wherever
	- Or Cut/Paste it wherever wanted

## How do I use it?
> *It is highly advised to put a **copy of your project's executable into a dedicated empty folder** and **use this app on the copy**, this way it will be self-sufficient in that directory and won't clutter your project's build directory.*
1. Start DLLmaker
2. Either choose your program's file via the Button or copy the file path into the first field
3. Same with the second field but for the windeployqt.exe *(usually at .\Qt\#.#.#\mingw_64\bin)*
	- *OPTIONAL:* If you want DLLmaker to simultaneously create a shortcut to your program check the box "Create Shortcut"
	- *OPTIONAL:* If you want to store your entered file paths upon running check the box "Save Paths"
		> ***DLLmaker** will only ever store and reload the most recent file paths and not overwrite them until "Save Paths" gets checked before a new run*
4. Click the "**RUN**" button and wait a second
5. Check if your "deploy directory" got populated
