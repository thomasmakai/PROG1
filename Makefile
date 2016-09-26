.PHONY: clean All

All:
	@echo "----------Building project:[ Hour9 - Debug ]----------"
	@cd "Hour9" && "$(MAKE)" -f  "Hour9.mk"
clean:
	@echo "----------Cleaning project:[ Hour9 - Debug ]----------"
	@cd "Hour9" && "$(MAKE)" -f  "Hour9.mk" clean
