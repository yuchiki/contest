
.PHONY:execute


CLIPBOARD = xsel --clipboard --output

.PHONY: run clean
run: main.exe
	$(CLIPBOARD) |  time -p ./main.exe

main.exe:main.fs
	fsharpc --nologo --warnaserror main.fs
