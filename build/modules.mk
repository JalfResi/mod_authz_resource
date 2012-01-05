mod_provider_test.la: mod_provider_test.slo
	$(SH_LINK) -rpath $(libexecdir) -module -avoid-version  mod_provider_test.lo
DISTCLEAN_TARGETS = modules.mk
shared =  mod_provider_test.la
