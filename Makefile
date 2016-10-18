.PHONY: clean All

All:
	@echo "----------Building project:[ CommandLineInput - Debug ]----------"
	@cd "CommandLineInput" && "$(MAKE)" -f  "CommandLineInput.mk"
clean:
	@echo "----------Cleaning project:[ CommandLineInput - Debug ]----------"
	@cd "CommandLineInput" && "$(MAKE)" -f  "CommandLineInput.mk" clean
