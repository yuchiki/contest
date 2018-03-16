MAIN = main.sh
CLIPBOARD = xsel --clipboard --output

.PHONY: run clean
run: $(MAIN)
	$(CLIPBOARD) |  ./$(MAIN)
