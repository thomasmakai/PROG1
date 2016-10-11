.PHONY: clean All

All:
	@echo "----------Building project:[ Hour13 - Debug ]----------"
	@cd "Hour13" && "$(MAKE)" -f  "Hour13.mk"
clean:
	@echo "----------Cleaning project:[ Hour13 - Debug ]----------"
	@cd "Hour13" && "$(MAKE)" -f  "Hour13.mk" clean
