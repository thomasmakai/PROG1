.PHONY: clean All

All:
	@echo "----------Building project:[ Hour16_Q4 - Debug ]----------"
	@cd "Hour16_Q4" && "$(MAKE)" -f  "Hour16_Q4.mk"
clean:
	@echo "----------Cleaning project:[ Hour16_Q4 - Debug ]----------"
	@cd "Hour16_Q4" && "$(MAKE)" -f  "Hour16_Q4.mk" clean
