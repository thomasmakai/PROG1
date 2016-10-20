.PHONY: clean All

All:
	@echo "----------Building project:[ Hour21 - Debug ]----------"
	@cd "Hour21" && "$(MAKE)" -f  "Hour21.mk"
clean:
	@echo "----------Cleaning project:[ Hour21 - Debug ]----------"
	@cd "Hour21" && "$(MAKE)" -f  "Hour21.mk" clean
