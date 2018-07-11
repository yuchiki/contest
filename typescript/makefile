MAIN = main
CLIPBOARD = xsel --clipboard --output

.PHONY: run clean
run: main.js
	node main.js


main.js: main.ts
	tsc main.ts

clean:
	- rm main.js
