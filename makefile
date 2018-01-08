TEMPLATE = $(PWD)/template/template.sh
SANDBOX = sandbox
NEW = $TEMPLATE $CONTEST
ABC = $(wildcard abc*)
AGC = $(wildcard agc*)

$(ABC)% :
	rm -rf $(SANDBOX)
	mkdir $(SANDBOX)
	cd $(SANDBOX);\
	$(TEMPLATE) $@ A;\
	$(TEMPLATE) $@ B;\
	$(TEMPLATE) $@ C;\
	$(TEMPLATE) $@ D

$(AGC)% :
	rm -rf $(SANDBOX)
	mkdir $(SANDBOX)
	cd $(SANDBOX);\
	$(TEMPLATE) $@ C;\
	$(TEMPLATE) $@ D;\
	$(TEMPLATE) $@ E;\
	$(TEMPLATE) $@ F