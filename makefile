TEMPLATE = $(PWD)/template/template.sh
SANDBOX = sandbox

abc% :
	rm -rf $(SANDBOX)
	mkdir $(SANDBOX)
	cd $(SANDBOX);\
	$(TEMPLATE) $@ A;\
	$(TEMPLATE) $@ B;\
	$(TEMPLATE) $@ C;\
	$(TEMPLATE) $@ D


arc% :
	rm -rf $(SANDBOX)
	mkdir $(SANDBOX)
	cd $(SANDBOX);\
	$(TEMPLATE) $@ C;\
	$(TEMPLATE) $@ D;\
	$(TEMPLATE) $@ E;\
	$(TEMPLATE) $@ F

agc% :
	rm -rf $(SANDBOX)
	mkdir $(SANDBOX)
	cd $(SANDBOX);\
	$(TEMPLATE) $@ A;\
	$(TEMPLATE) $@ B;\
	$(TEMPLATE) $@ C;\
	$(TEMPLATE) $@ D;\
	$(TEMPLATE) $@ E;\
	$(TEMPLATE) $@ F