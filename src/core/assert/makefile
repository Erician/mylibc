ASSERTDIR := core/assert

$(OBJDIR)/mlc_assert.o: $(ASSERTDIR)/mlc_assert.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(INCDIR)/assert.h:	
	@cp mlc_assert.h $(INCDIR)/assert.h


