.PHONY: clean All

All:
	@echo "----------Building project:[ Hour10 - Debug ]----------"
	@cd "Hour10" && "$(MAKE)" -f  "Hour10.mk"
clean:
	@echo "----------Cleaning project:[ Hour10 - Debug ]----------"
	@cd "Hour10" && "$(MAKE)" -f  "Hour10.mk" clean
