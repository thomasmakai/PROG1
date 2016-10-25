.PHONY: clean All

All:
	@echo "----------Building project:[ hour23_Q4 - Debug ]----------"
	@cd "hour23_Q4" && "$(MAKE)" -f  "hour23_Q4.mk"
clean:
	@echo "----------Cleaning project:[ hour23_Q4 - Debug ]----------"
	@cd "hour23_Q4" && "$(MAKE)" -f  "hour23_Q4.mk" clean
