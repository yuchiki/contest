MAIN = main
CLIPBOARD = xsel --clipboard --output

.PHONY: run clean
run: build
	$(CLIPBOARD) |  time -p dotnet run --no-build

build: Program.cs
	dotnet build

clean:
	dotnet clean