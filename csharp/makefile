MAIN = main
CLIPBOARD = xsel --clipboard --output

.PHONY: run clean
run: input.txt Program.exe
	@ cat input.txt | time -f "elapsed: %e[sec]" ./Program.exe

input.txt : .FORCE
	@ $(CLIPBOARD) > input.txt


Program.exe : Program.cs
	@ echo "compiling..."
	@ csc -nologo Program.cs
	@ chmod 777 Program.exe
	@ echo "compiled."

clean:
	- rm Program.exe input.txt

.FORCE:
