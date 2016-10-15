.PHONY: clean All

All:
	@echo "----------Building project:[ Hour15_Q3 - Debug ]----------"
	@cd "Hour15_Q3" && "$(MAKE)" -f  "Hour15_Q3.mk"
clean:
	@echo "----------Cleaning project:[ Hour15_Q3 - Debug ]----------"
	@cd "Hour15_Q3" && "$(MAKE)" -f  "Hour15_Q3.mk" clean
