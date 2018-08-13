MAIN = main
CLIPBOARD = xsel --clipboard --output

.PHONY: run clean
run: Program.exe
	$(CLIPBOARD) | time -f "elapsed: %e[sec]" ./Program.exe

Program.exe : Program.cs
	csc Program.cs

clean:
	- rm Program.exe
