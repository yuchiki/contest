MAIN = main
CLIPBOARD = xsel --clipboard --output

.PHONY: run clean
run: $(MAIN)
	$(CLIPBOARD) |  ./$(MAIN)

$(MAIN): main.hs
	ghc main.hs

clean:
	$(RM) $(MAIN)