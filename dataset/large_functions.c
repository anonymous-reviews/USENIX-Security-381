/* 
 ******** File 0 ********
 */

/*
 * Example 0
 * File: oversized_idioms_data_no_ast/data_0000.pkl
 * Shard 0, Index 450
 * Source: Fabio-Kubo/processamento-imagens
 */

/** Decompiled **/
signed long long access_virt_barray(long long a1, long long a2, unsigned int a3, unsigned int a4, int a5)
{
  int v6; // C5.b. Extraneous intermediate variable duplicating another variable
  unsigned int v7; // C5.b. Extraneous intermediate variable duplicating another variable
  unsigned long long n;
  unsigned int v9; // -- Aligns with end_row
  unsigned int v10; // C5. Extraneous variable
  signed long long v11; // -- Aligns with ltemp
  unsigned int v12; // -- Aligns with undef_row
  unsigned int v13; // C5. Extraneous variable
  v7 = a3; // C2.a.i. Extra statement to initialize extraneous variable
  v6 = a5; // C2.a.i. Extra statement to initialize extraneous variable
  v9 = a3 + a4; 
  if ((((a3 + a4) > (*((_DWORD *) (a2 + 8)))) || (a4 > (*((_DWORD *) (a2 + 16))))) || (!(*((_QWORD *) a2)))) // C1.a.i. Pointer arithmetic to access struct members
  {
    *((_DWORD *) ((*((_QWORD *) a1)) + 40LL)) = 23; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macros
    (*(*((void (***)(long long)) a1)))(a1); // Maybe C1.a.iii. Pointer dereference to access array members
  }

  if ((v7 < (*((_DWORD *) (a2 + 28)))) || (v9 > ((*((_DWORD *) (a2 + 28))) + (*((_DWORD *) (a2 + 20)))))) // C1.a.i. Pointer arithmetic to access struct members
  {
    if (!(*((_DWORD *) (a2 + 44)))) // C1.a.i. Pointer arithmetic to access struct members
    {
      *((_DWORD *) ((*((_QWORD *) a1)) + 40LL)) = 71; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macros
      (*(*((void (***)(long long)) a1)))(a1); // Maybe C1.a.iii. Pointer dereference to access array members
    }

    if (*((_DWORD *) (a2 + 40))) // C1.a.i. Pointer arithmetic to access struct members
    {
      do_barray_io(a1, a2, 1); // C9.b. Expanded user-defined macro
      *((_DWORD *) (a2 + 40)) = 0; // C1.a.i. Pointer arithmetic to access struct members
    }

    if (v7 <= (*((_DWORD *) (a2 + 28)))) // C1.a.i. Pointer arithmetic to access struct members
    {
      v11 = v9 - ((unsigned long long) (*((unsigned int *) (a2 + 20)))); // C1.a.i. Pointer arithmetic to access struct members
      if (v11 < 0)
        LODWORD(v11) = 0; // C10. Use of decompiler-specific macro

      *((_DWORD *) (a2 + 28)) = v11; // C1.a.i. Pointer arithmetic to access struct members
    }
    else
    {
      *((_DWORD *) (a2 + 28)) = v7; // C1.a.i. Pointer arithmetic to access struct members
    }

    do_barray_io(a1, a2, 0); // C9.b. Expanded user-defined macro
  }

  if (v9 > (*((_DWORD *) (a2 + 32)))) // C1.a.i. Pointer arithmetic to access struct members
  {
    if (v7 <= (*((_DWORD *) (a2 + 32)))) // C1.a.i. Pointer arithmetic to access struct members
    {
      v12 = *((_DWORD *) (a2 + 32)); // C1.a.i. Pointer arithmetic to access struct members
    }
    else
    {
      if (v6)
      {
        *((_DWORD *) ((*((_QWORD *) a1)) + 40LL)) = 23; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macro.
        (*(*((void (***)(long long, long long)) a1)))(a1, a2); // C4.a.i. Extra argument - in call to function described in function pointer.
      }

      v12 = v7;
    }

    if (v6)
      *((_DWORD *) (a2 + 32)) = v9; // C1.a.i. Pointer arithmetic to access struct members

    if (*((_DWORD *) (a2 + 36))) // C1.a.i. Pointer arithmetic to access struct members
    {
      n = ((unsigned long long) (*((unsigned int *) (a2 + 12)))) << 7; // C1.a.i. Pointer arithmetic to access struct members, C14. Type-dependent nonequivalent expression - << 7
      v13 = v12 - (*((_DWORD *) (a2 + 28))); // C1.a.i. Pointer arithmetic to access struct members
      v10 = v9 - (*((_DWORD *) (a2 + 28))); // C1.a.i. Pointer arithmetic to access struct members
      while (v13 < v10)
        memset(*((void **) ((8LL * (v13++)) + (*((_QWORD *) a2)))), 0, n); // C1.a.i. Pointer arithmetic to access struct members

    }
    else
      if (!v6)
    {
      *((_DWORD *) ((*((_QWORD *) a1)) + 40LL)) = 23; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macro
      (*(*((void (***)(long long, long long)) a1)))(a1, a2); // C4.a.i. Extra argument - in call to function described in function pointer.
    }


  }

  if (v6)
    *((_DWORD *) (a2 + 40)) = 1; // C1.a.i. Pointer arithmetic to access struct members

  return (*((_QWORD *) a2)) + (8LL * (v7 - (*((_DWORD *) (a2 + 28))))); // C1.a.i. Pointer arithmetic to access struct members
}


/** Original **/
static JBLOCKARRAY access_virt_barray(j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)
{
  JDIMENSION end_row = start_row + num_rows;
  JDIMENSION undef_row;
  if (((end_row > ptr->rows_in_array) || (num_rows > ptr->maxaccess)) || (ptr->mem_buffer == 0))
    cinfo->err->msg_code = JERR_BAD_VIRTUAL_ACCESS, (*cinfo->err->error_exit)((j_common_ptr) cinfo);

  if ((start_row < ptr->cur_start_row) || (end_row > (ptr->cur_start_row + ptr->rows_in_mem)))
  {
    if (!ptr->b_s_open)
      cinfo->err->msg_code = JERR_VIRTUAL_BUG, (*cinfo->err->error_exit)((j_common_ptr) cinfo);

    if (ptr->dirty)
    {
      do_barray_io(cinfo, ptr, TRUE);
      ptr->dirty = FALSE;
    }

    if (start_row > ptr->cur_start_row)
    {
      ptr->cur_start_row = start_row;
    }
    else
    {
      long ltemp;
      ltemp = ((long) end_row) - ((long) ptr->rows_in_mem);
      if (ltemp < 0)
        ltemp = 0;

      ptr->cur_start_row = (JDIMENSION) ltemp;
    }

    do_barray_io(cinfo, ptr, FALSE);
  }

  if (ptr->first_undef_row < end_row)
  {
    if (ptr->first_undef_row < start_row)
    {
      if (writable)
        cinfo->err->msg_code = JERR_BAD_VIRTUAL_ACCESS, (*cinfo->err->error_exit)((j_common_ptr) cinfo);

      undef_row = start_row;
    }
    else
    {
      undef_row = ptr->first_undef_row;
    }

    if (writable)
      ptr->first_undef_row = end_row;

    if (ptr->pre_zero)
    {
      size_t bytesperrow = ((size_t) ptr->blocksperrow) * ((size_t) (sizeof(JBLOCK)));
      undef_row -= ptr->cur_start_row;
      end_row -= ptr->cur_start_row;
      while (undef_row < end_row)
      {
        memset((void *) ((void *) ptr->mem_buffer[undef_row]), 0, (size_t) bytesperrow);
        undef_row++;
      }

    }
    else
    {
      if (!writable)
        cinfo->err->msg_code = JERR_BAD_VIRTUAL_ACCESS, (*cinfo->err->error_exit)((j_common_ptr) cinfo);

    }

  }

  if (writable)
    ptr->dirty = TRUE;

  return ptr->mem_buffer + (start_row - ptr->cur_start_row);
}




/*
 * Example 1
 * File: oversized_idioms_data_no_ast/data_0000.pkl
 * Shard 0, Index 2918
 * Source: wangmir/IOPM
 */

/** Decompiled **/
long long init_Partition(int a1)
{
  long long result; // C5. Extraneous variable
  int i;
  int j; // C5. Extraneous variable - (This is a tricky one because one variable is used for both loops in the original, where it's separate here; I'll count this one as extraneous because it comes second.)
  for (i = 0; i < PAGE_PER_PARTITION_32; ++i)
    *((_DWORD *) ((4LL * i) + (*((_QWORD *) (PVB + (72LL * a1)))))) = 0; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members

  *((_DWORD *) ((PVB + (72LL * a1)) + 8)) = -1; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_DWORD *) ((PVB + (72LL * a1)) + 12)) = -1; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_DWORD *) ((PVB + (72LL * a1)) + 16)) = -1; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_DWORD *) ((PVB + (72LL * a1)) + 20)) = 0; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_DWORD *) ((PVB + (72LL * a1)) + 32)) = 0; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_DWORD *) ((PVB + (72LL * a1)) + 36)) = 0; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *(*((_DWORD **) ((PVB + (72LL * a1)) + 40))) = 1; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_DWORD *) ((PVB + (72LL * a1)) + 64)) = 0; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_QWORD *) ((*((_QWORD *) ((PVB + (72LL * a1)) + 48))) + 8LL)) = 0LL; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_QWORD *) ((*((_QWORD *) ((PVB + (72LL * a1)) + 48))) + 16LL)) = 0LL; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_QWORD *) ((*((_QWORD *) ((PVB + (72LL * a1)) + 56))) + 8LL)) = 0LL; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members 
  *((_QWORD *) ((*((_QWORD *) ((PVB + (72LL * a1)) + 56))) + 16LL)) = 0LL; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members
  for (j = 0;; ++j) // C7. Obfuscating control-flow refactorings - for-loop conditional broken out into separate if statement
  {
    result = (unsigned int) BLOCK_PER_PARTITION; // C2.a.i. Extra statement to initialize extraneous variable
    if (j > BLOCK_PER_PARTITION) // C7. Obfuscating control-flow refactorings - for-loop conditional broken out into separate if statement (+ next line)
      break;

    *((_DWORD *) ((4LL * j) + (*((_QWORD *) ((PVB + (72LL * a1)) + 24))))) = -1; // C1.b.ii. Pointer arithmetic to access array members, C1.a.i. Pointer arithmetic to access struct members
  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void init_Partition(int partition)
{
  int j;
  for (j = 0; j < PAGE_PER_PARTITION_32; j++)
  {
    PVB[partition].bitmap[j] = 0;
  }

  PVB[partition].startLPN = -1;
  PVB[partition].startPPN = -1;
  PVB[partition].endPPN = -1;
  PVB[partition].valid = 0;
  PVB[partition].blocknum = 0;
  PVB[partition].active_flag = 0;
  PVB[partition].allocate_free->free_flag = 1;
  PVB[partition].victim_partition_flag = 0;
  PVB[partition].cluster->next = 0;
  PVB[partition].cluster->prev = 0;
  PVB[partition].victim_partition_list->next = 0;
  PVB[partition].victim_partition_list->prev = 0;
  for (j = 0; j < (BLOCK_PER_PARTITION + 1); j++)
  {
    PVB[partition].block[j] = -1;
  }

}




/*
 * Example 2
 * File: oversized_idioms_data_no_ast/data_0000.pkl
 * Shard 0, Index 2992
 * Source: varchar-42/filler
 */

/** Decompiled **/
unsigned long long check_length(_BYTE **a1, long long a2)
{
  unsigned long long result; // C5. Extraneous variable
  if (((((*(*a1)) == 104) || ((*(*a1)) == 108)) || ((*(*a1)) == 106)) || ((*(*a1)) == 122)) // C6.a. Character literal as integer
  {
    if ((*(*a1)) == 104) // C6.a. Character literal as integer
      *((_DWORD *) ((*((_QWORD *) a2)) + 28LL)) = 2; // C1.a.i. Pointer dereference to access struct member

    if ((*(*a1)) == 108) // C6.a. Character literal as integer
      *((_DWORD *) ((*((_QWORD *) a2)) + 28LL)) = 3; // C1.a.i. Pointer dereference to access struct member

    if ((*(*a1)) == 106) // C6.a. Character literal as integer
      *((_DWORD *) ((*((_QWORD *) a2)) + 28LL)) = 5; // C1.a.i. Pointer dereference to access struct member

    if ((*(*a1)) == 122) // C6.a. Character literal as integer
      *((_DWORD *) ((*((_QWORD *) a2)) + 28LL)) = 6; // C1.a.i. Pointer dereference to access struct member

    ++(*a1);
  }

  if (((*(*a1)) == 104) || ((result = (unsigned char) (*(*a1)), ((_BYTE) result) == 108))) // C6.a. Character literal as integer
  {
    if (((*(*a1)) == 104) && ((*((*a1) - 1)) == 104)) // C6.a. Character literal as integer
      *((_DWORD *) ((*((_QWORD *) a2)) + 28LL)) = 1; // C1.a.i. Pointer dereference to access struct member

    if (((*(*a1)) == 108) && ((*((*a1) - 1)) == 108)) // C6.a. Character literal as integer
      *((_DWORD *) ((*((_QWORD *) a2)) + 28LL)) = 4; // C1.a.i. Pointer dereference to access struct member

    result = (unsigned long long) a1; // C2.a.i. Extra statement to intialize extraneous variable
    ++(*a1);
  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void check_length(char **format, t_args **arg)
{
  if (((((*(*format)) == 'h') || ((*(*format)) == 'l')) || ((*(*format)) == 'j')) || ((*(*format)) == 'z'))
  {
    if ((*(*format)) == 'h')
      (*arg)->length = 2;

    if ((*(*format)) == 'l')
      (*arg)->length = 3;

    if ((*(*format)) == 'j')
      (*arg)->length = 5;

    if ((*(*format)) == 'z')
      (*arg)->length = 6;

    *format += 1;
  }

  if (((*(*format)) == 'h') || ((*(*format)) == 'l'))
  {
    if (((*(*format)) == 'h') && ((*((*format) - 1)) == 'h'))
      (*arg)->length = 1;

    if (((*(*format)) == 'l') && ((*((*format) - 1)) == 'l'))
      (*arg)->length = 4;

    *format += 1;
  }

}




/*
 * Example 3
 * File: oversized_idioms_data_no_ast/data_0000.pkl
 * Shard 0, Index 5322
 * Source: teyjus/teyjus
 */

/** Decompiled **/
void cgenOneInstrCatC(const char *a1, int a2)
{
  size_t v2; // C5. Extraneous variable
  size_t v3; // C5. Extraneous variable
  size_t v4; // C5. Extraneous variable
  char *v5; // C5. Extraneous variable
  char *v6; // C5. Extraneous variable
  char *v7; // C5. Extraneous variable
  char *v8; // C5. Extraneous variable
  char *v9; // C5. Extraneous variable
  char *s; // Aligns with myoptypeTab
  s = optypeTab;

  // C7. Deconstructed ternary (next three lines)
  if (optypeTab)
    v2 = strlen(optypeTab) + 8;
  else
    v2 = 8LL;

  v3 = strlen(optypeTabEntry) + v2;
  v4 = strlen(a1);
  optypeTab = (char *) UTIL_mallocStr((v3 + v4) + 20);
  if (s)
  {
    strcpy(optypeTab, s);
    // C7.c. Inline function definition instead of function call (next two lines)
    v5 = &optypeTab[strlen(optypeTab)];
    *((_DWORD *) v5) = 538976288; // C6.b. String literal as single integer
  }
  else
  {
    v5 = optypeTab;
    // C7.c. Inline function definition instead of function call
    *((_DWORD *) optypeTab) = 538976288; // C6.b. String literal as single integer
  }

  v5[4] = 0; // C7.c. Inline function definition instead of function call (actually part of the inlined calls in the if statement prior)
  // C7.c. Inline function definition instead of function call (next three lines)
  v6 = &optypeTab[strlen(optypeTab)];
  *((_WORD *) v6) = 12079; // C6.b. String literal as single integer
  v6[2] = 0;
  // C7.c. Inline function definition instead of function call (next four lines)
  v7 = &optypeTab[strlen(optypeTab)];
  *((_QWORD *) v7) = 4702707243111632457LL; // C6.b. String literal as single integer
  *(((_WORD *) v7) + 4) = 24404; // C6.b. String literal as single integer
  v7[10] = 0;
  strcat(optypeTab, a1);
  *((_WORD *) (&optypeTab[strlen(optypeTab)])) = 10; // C7.c. Inline function definition instead of function call
  // C7.c. Inline function definition instead of function call (next three lines)
  v8 = &optypeTab[strlen(optypeTab)]; 
  *((_DWORD *) v8) = 538976288; // C6.b. String literal as single integer
  v8[4] = 0;
  *((_WORD *) (&optypeTab[strlen(optypeTab)])) = 123; // C6.b. String literal as single integer, C7.c. Inline function definition instead of function call
  strcat(optypeTab, optypeTabEntry);
  if (a2)
  {
    // C7.c. Inline function definition instead of function call (next three lines)
    v9 = &optypeTab[strlen(optypeTab)];
    *((_WORD *) v9) = 2685; // C6.b. String literal as single integer
    v9[2] = 0;
  }
  else
  {
    // C7.c. Inline function definition instead of function call
    *((_DWORD *) (&optypeTab[strlen(optypeTab)])) = 666749; // C6.b. String literal as single integer
  }

  free(optypeTabEntry);
  optypeTabEntry = 0LL;
  if (s)
    free(s);

}


/** Original **/
void cgenOneInstrCatC(char *name, int last)
{
  char *myoptypeTab = optypeTab;
  size_t length = ((((((myoptypeTab) ? (strlen(myoptypeTab)) : (0u)) + (4u * 2)) + strlen(optypeTabEntry)) + strlen(name)) + 10u) + 10u;
  optypeTab = UTIL_mallocStr(length);
  if (myoptypeTab)
  {
    strcpy(optypeTab, myoptypeTab);
    strcat(optypeTab, "    ");
  }
  else
    strcpy(optypeTab, "    ");

  strcat(optypeTab, "//");
  strcat(optypeTab, "INSTR_CAT_");
  strcat(optypeTab, name);
  strcat(optypeTab, "\n");
  strcat(optypeTab, "    ");
  strcat(optypeTab, "{");
  strcat(optypeTab, optypeTabEntry);
  if (last)
    strcat(optypeTab, "}\n");
  else
    strcat(optypeTab, "},\n");

  free(optypeTabEntry);
  optypeTabEntry = 0;
  if (myoptypeTab)
    free(myoptypeTab);

}




/*
 * Example 4
 * File: oversized_idioms_data_no_ast/data_0000.pkl
 * Shard 0, Index 7338
 * Source: statgen/topmed_freeze3_calling
 */

/** Decompiled **/
void filter_destroy(long long a1)
{
  int i;
  for (i = 0; i < (*((_DWORD *) (a1 + 16))); ++i) // C1.a.i. Pointer arithmetic to access struct members
  {
    free(*((void **) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 88))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members
    free(*((void **) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 16))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members
    free(*((void **) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 80))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members
    free(*((void **) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 112))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members
    if (*((_QWORD *) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 64))) // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members
      khash_str2int_destroy_free(*((_QWORD *) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 64))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members

    if (*((_QWORD *) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 72))) // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members
    {
      regfree(*((regex_t **) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 72))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members, C3.a. Extraneous typecast (regex_t **)
      free(*((void **) (((*((_QWORD *) (a1 + 24))) + (136LL * i)) + 72))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer airthmetic to access array members
    }

  }

  free(*((void **) (a1 + 24))); // C1.a.i. Pointer arithmetic to access struct members
  free(*((void **) (a1 + 32))); // C1.a.i. Pointer arithmetic to access struct members
  free(*((void **) (a1 + 8))); // C1.a.i. Pointer arithmetic to access struct members
  free(*((void **) (a1 + 40))); // C1.a.i. Pointer arithmetic to access struct members
  free(*((void **) (a1 + 48))); // C1.a.i. Pointer arithmetic to access struct members
  free((void *) a1); // C3.a. Extraneous typecast
}


/** Original **/
void filter_destroy(filter_t *filter)
{
  int i;
  for (i = 0; i < filter->nfilters; i++)
  {
    free(filter->filters[i].str_value);
    free(filter->filters[i].tag);
    free(filter->filters[i].values);
    free(filter->filters[i].pass_samples);
    if (filter->filters[i].hash)
      khash_str2int_destroy_free(filter->filters[i].hash);

    if (filter->filters[i].regex)
    {
      regfree(filter->filters[i].regex);
      free(filter->filters[i].regex);
    }

  }

  free(filter->filters);
  free(filter->flt_stack);
  free(filter->str);
  free(filter->tmpi);
  free(filter->tmpf);
  free(filter);
}




/*
 * Example 5
 * File: oversized_idioms_data_no_ast/data_0000.pkl
 * Shard 0, Index 8766
 * Source: jparty/PTAM
 */

/** Decompiled **/
long long f2c_dsyr(long long a1, signed long long *a2, double *a3, long long a4, _QWORD *a5, long long a6, long long *a7)
{
  signed long long v7; // C5.a. Extraneous variable - deconstructed ternary
  long long result; // C5.a Extraneous variable
  long long v9; // C5.a. Extraneous variable (Holds the result of a -= a_offset)
  _QWORD *v10; // C5.a.i. Extraneous variable duplicating another variable
  signed long long v11; // C5.a. Extraneous variable (result of --x)
  double *v12; // C5.a.i, Extraneous variable duplicating another variable
  long long v13; // -- aligns with info
  long long v14; // -- aligns with i__2
  double v15; // -- aligns with temp
  long long v16; // -- aligns with i__1
  long long v17; // -- aligns with a_offset
  long long v18; // -- aligns with a_dim1
  long long v19; // -- aligns with kx
  long long v20; // -- aligns with jx
  long long v21; // -- aligns with ix
  long long i; // -- aligns with j
  long long j; // -- aligns with i__
  v12 = a3; // C2.a.i. Extra statement to initialize extraneous variable
  v10 = a5; // C2.a.i. Extra statement to initialize extraneous variable
  v11 = a4 - 8; // -- aligns with --x
  v18 = *a7; // -- aligns with a_dim1 = *lda
  v17 = v18 + 1; // -- aligns with a_offset = 1 + a_dim1
  v9 = ((-8) * (v18 + 1)) + a6; // ??? Maybe C4. Nonequivalent expression? - aligns with "a -= a_offset;" 
  v13 = 0LL;
  if (lsame_(a1, &unk_6B4) || lsame_(a1, &unk_6B6)) // C6.d. String replaced with reference to undeclared or global variable
  {
    if ((*a2) >= 0)
    {
      if (*v10)
      {
        v7 = *a2; // C7.d. Deconstructed ternary (this and next two lines)
        if ((*a2) <= 0)
          v7 = 1LL;

        if ((*a7) < v7)
          v13 = 7LL;

      }
      else
      {
        v13 = 5LL;
      }

    }
    else
    {
      v13 = 2LL;
    }

  }
  else
  {
    v13 = 1LL;
  }

  if (v13)
  {
    xerbla_("DSYR ", &v13);
    result = 0LL;
  }
  else
    if ((*a2) && ((*v12) != 0.0))
  {
    if ((*v10) > 0LL)
    {
      if ((*v10) != 1LL)
        v19 = 1LL;

    }
    else
    {
      v19 = 1 - (((*a2) - 1) * (*v10));
    }

    if (lsame_(a1, &unk_6B4)) // C6.d. String replaced with reference to undeclared or global variable
    {
      if ((*v10) == 1LL)
      {
        v16 = *a2;
        for (i = 1LL; i <= v16; ++i)
        {
          if ((*((double *) ((8 * i) + v11))) != 0.0) // C1.b.ii. Pointer arithmetic to access array members
          {
            v15 = (*((double *) ((8 * i) + v11))) * (*v12); // C1.b.ii. Pointer arithmetic to access array members
            v14 = i;
            for (j = 1LL; j <= v14; ++j)
              *((double *) ((8 * ((v18 * i) + j)) + v9)) = ((*((double *) ((8 * j) + v11))) * v15) + (*((double *) ((8 * ((v18 * i) + j)) + v9))); // C1.b.ii. Pointer arithmetic to access array members

          }

        }

      }
      else
      {
        v20 = v19; // -- occurs in the original code; not extraneous
        v16 = *a2;
        for (i = 1LL; i <= v16; ++i)
        {
          if ((*((double *) ((8 * v20) + v11))) != 0.0) // C1.b.ii. Pointer arithmetic to access array members
          {
            v15 = (*((double *) ((8 * v20) + v11))) * (*v12); // C1.b.ii. Pointer arithmetic to access array members
            v21 = v19; // -- occurs in the original code; not extraneous
            v14 = i;
            for (j = 1LL; j <= v14; ++j)
            {
              *((double *) ((8 * ((v18 * i) + j)) + v9)) = ((*((double *) ((8 * v21) + v11))) * v15) + (*((double *) ((8 * ((v18 * i) + j)) + v9))); // C1.b.ii. Pointer arithmetic to access array members
              v21 += *v10;
            }

          }

          v20 += *v10;
        }

      }

    }
    else
      if ((*v10) == 1LL)
    {
      v16 = *a2;
      for (i = 1LL; i <= v16; ++i)
      {
        if ((*((double *) ((8 * i) + v11))) != 0.0) // C1.b.ii. Pointer arithmetic to access array members
        {
          v15 = (*((double *) ((8 * i) + v11))) * (*v12); // C1.b.ii. Pointer arithmetic to access array members
          v14 = *a2;
          for (j = i; j <= v14; ++j)
            *((double *) ((8 * ((v18 * i) + j)) + v9)) = ((*((double *) ((8 * j) + v11))) * v15) + (*((double *) ((8 * ((v18 * i) + j)) + v9))); // C1.b.ii. Pointer arithmetic to access array members

        }

      }

    }
    else
    {
      v20 = v19;
      v16 = *a2;
      for (i = 1LL; i <= v16; ++i)
      {
        if ((*((double *) ((8 * v20) + v11))) != 0.0) // C1.b.ii. Pointer arithmetic to access array members
        {
          v15 = (*((double *) ((8 * v20) + v11))) * (*v12); // C1.b.ii. Pointer arithmetic to access array members
          v21 = v20;
          v14 = *a2;
          for (j = i; j <= v14; ++j)
          {
            *((double *) ((8 * ((v18 * i) + j)) + v9)) = ((*((double *) ((8 * v21) + v11))) * v15) + (*((double *) ((8 * ((v18 * i) + j)) + v9))); // C1.b.ii. Pointer arithmetic to access array members
            v21 += *v10;
          }

        }

        v20 += *v10;
      }

    }


    result = 0LL;
  }
  else
  {
    result = 0LL;
  }


  return result;
}


/** Original **/
int f2c_dsyr(char *uplo, integer *n, doublereal *alpha, doublereal *x, integer *incx, doublereal *a, integer *lda)
{
  integer a_dim1;
  integer a_offset;
  integer i__1;
  integer i__2;
  integer i__;
  integer j;
  integer ix;
  integer jx;
  integer kx;
  integer info;
  doublereal temp;
  extern logical lsame_(char *, char *);
  extern int xerbla_(char *, integer *);
  --x;
  a_dim1 = *lda;
  a_offset = 1 + a_dim1;
  a -= a_offset;
  info = 0;
  if ((!lsame_(uplo, "U")) && (!lsame_(uplo, "L")))
  {
    info = 1;
  }
  else
    if ((*n) < 0)
  {
    info = 2;
  }
  else
    if ((*incx) == 0)
  {
    info = 5;
  }
  else
    if ((*lda) < ((1 >= (*n)) ? (1) : (*n)))
  {
    info = 7;
  }




  if (info != 0)
  {
    xerbla_("DSYR  ", &info);
    return 0;
  }

  if (((*n) == 0) || ((*alpha) == 0.))
  {
    return 0;
  }

  if ((*incx) <= 0)
  {
    kx = 1 - (((*n) - 1) * (*incx));
  }
  else
    if ((*incx) != 1)
  {
    kx = 1;
  }


  if (lsame_(uplo, "U"))
  {
    if ((*incx) == 1)
    {
      i__1 = *n;
      for (j = 1; j <= i__1; ++j)
      {
        if (x[j] != 0.)
        {
          temp = (*alpha) * x[j];
          i__2 = j;
          for (i__ = 1; i__ <= i__2; ++i__)
          {
            a[i__ + (j * a_dim1)] += x[i__] * temp;
          }

        }

      }

    }
    else
    {
      jx = kx;
      i__1 = *n;
      for (j = 1; j <= i__1; ++j)
      {
        if (x[jx] != 0.)
        {
          temp = (*alpha) * x[jx];
          ix = kx;
          i__2 = j;
          for (i__ = 1; i__ <= i__2; ++i__)
          {
            a[i__ + (j * a_dim1)] += x[ix] * temp;
            ix += *incx;
          }

        }

        jx += *incx;
      }

    }

  }
  else
  {
    if ((*incx) == 1)
    {
      i__1 = *n;
      for (j = 1; j <= i__1; ++j)
      {
        if (x[j] != 0.)
        {
          temp = (*alpha) * x[j];
          i__2 = *n;
          for (i__ = j; i__ <= i__2; ++i__)
          {
            a[i__ + (j * a_dim1)] += x[i__] * temp;
          }

        }

      }

    }
    else
    {
      jx = kx;
      i__1 = *n;
      for (j = 1; j <= i__1; ++j)
      {
        if (x[jx] != 0.)
        {
          temp = (*alpha) * x[jx];
          ix = jx;
          i__2 = *n;
          for (i__ = j; i__ <= i__2; ++i__)
          {
            a[i__ + (j * a_dim1)] += x[ix] * temp;
            ix += *incx;
          }

        }

        jx += *incx;
      }

    }

  }

  return 0;
}




/*
 * Example 6
 * File: oversized_idioms_data_no_ast/data_0001.pkl
 * Shard 1, Index 1265
 * Source: mongrel2/mongrel2
 */

/** Decompiled **/
signed long long bsplitstrcb(long long a1, long long a2, signed int a3, long long (*a4)(long long, _QWORD, signed long long), long long a5)
{
  signed long long result;
  long long v6; // C5.a.i. Extraneous variable duplicating another variable
  long long (*v7)(long long, _QWORD, signed long long); // C5.a. Extraneous variable duplicating another variable
  unsigned int v8; // C5.a. Extraneous variable (could use v9 instead)
  unsigned int v9; // -- aligns with ret
  unsigned int v10; // C5.a. Extraneous variable (could use v9 instead)
  unsigned int v11; // -- aligns with p
  signed int j; // C5.a. Extraneous variable
  int i; // -- aligns with i
  v7 = a4; // C2.a.i. Extra statement to initialize extraneous variable
  v6 = a5; // C2.a.i. Extra statement to initialize extraneous variable
  if ((((((!a4) || (!a1)) || (a3 < 0)) || (a3 > (*((_DWORD *) (a1 + 4))))) || (!a2)) || ((*((_DWORD *) (a2 + 4))) < 0)) // C1.a.i. Pointer arithmetic to access struct members
    return 0xFFFFFFFFLL;

  if (*((_DWORD *) (a2 + 4))) // C1.a.i. Pointer arithmetic to access struct members
  {
    if ((*((_DWORD *) (a2 + 4))) == 1) // C1.a.i. Pointer arithmetic to access struct members
    {
      result = bsplitcb(a1, *(*((_BYTE **) (a2 + 8))), a3, a4, a5); // C1.a.i. Pointer arithmetic to access struct members
    }
    else
    {
      v11 = a3;
      for (i = a3; i <= ((*((_DWORD *) (a1 + 4))) - (*((_DWORD *) (a2 + 4)))); ++i) // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer arithmetic to access array members
      {
        if (!memcmp(*((const void **) (a2 + 8)), (const void *) (i + (*((_QWORD *) (a1 + 8)))), *((signed int *) (a2 + 4)))) // C1.a.i. Pointer arithmetic to access struct members
        {
          v9 = v7(v6, v11, i - v11);
          if ((v9 & 0x80000000) != 0)
            return v9;

          i += *((_DWORD *) (a2 + 4)); // C1.a.i. Pointer arithmetic to access struct members
          v11 = i;
        }

      }

      v10 = v7(v6, v11, (*((_DWORD *) (a1 + 4))) - v11); // C1.a.i. Pointer arithmetic to access struct members
      if ((v10 & 0x80000000) == 0)
        result = 0LL;
      else
        result = v10;

    }

  }
  else
  {
    for (j = a3; j < (*((_DWORD *) (a1 + 4))); ++j) // C1.a.i. Pointer arithmetic to access struct members
    {
      v8 = v7(v6, (unsigned int) j, 1LL); // C3.a. Extraneous typecast
      if ((v8 & 0x80000000) != 0)
        return v8;

    }

    result = 0LL;
  }

  return result;
}


/** Original **/
int bsplitstrcb(const_bstring str, const_bstring splitStr, int pos, int (*cb)(void *parm, int ofs, int len), void *parm)
{
  int i;
  int p;
  int ret;
  if ((((((cb == 0) || (str == 0)) || (pos < 0)) || (pos > str->slen)) || (splitStr == 0)) || (splitStr->slen < 0))
    return -1;

  if (0 == splitStr->slen)
  {
    for (i = pos; i < str->slen; i++)
    {
      if ((ret = cb(parm, i, 1)) < 0)
        return ret;

    }

    return 0;
  }

  if (splitStr->slen == 1)
    return bsplitcb(str, splitStr->data[0], pos, cb, parm);

  for (i = (p = pos); i <= (str->slen - splitStr->slen); i++)
  {
    if (0 == memcmp(splitStr->data, str->data + i, splitStr->slen))
    {
      if ((ret = cb(parm, p, i - p)) < 0)
        return ret;

      i += splitStr->slen;
      p = i;
    }

  }

  if ((ret = cb(parm, p, str->slen - p)) < 0)
    return ret;

  return 0;
}




/*
 * Example 7
 * File: oversized_idioms_data_no_ast/data_0001.pkl
 * Shard 1, Index 2570
 * Source: dracoling/tze
 */

/** Decompiled **/
long long note_attach(long long a1)
{
  long long result; // C5.a. Extraneous variable
  _QWORD *s; // -- aligns with pnote
  result = *((_QWORD *) (a1 + 192)); // C1.a.i. Pointer arithmetic to access struct members
  if (!result)
  {
    if (note_free)
    {
      if (!(*note_free)) // C1.a.iii. Pointer arithmetic to access first struct member
      {
        bug("GET_FREE: freelist head is NOT FREE! Hanging...", 0LL);
        while (1)
          ;

      }

      s = (_QWORD *) note_free; // C3.a. Extraneous typecast
      note_free = *((_QWORD *) (note_free + 8LL)); // C1.a.i. Pointer airthmetic to access struct members
      memset(s, 0, 0x48uLL); // C9.a. Expanded standard symbol
    }
    else
    {
      s = (_QWORD *) getmem(72LL, "act_comm.c:69", 1LL); // C9.a. Expanded standard symbol, Possible C9.b. Uses expanded macro (note lack of _ at start of function call)
    }

    s[1] = 0LL; // C1.a.ii. Array access to access struct members
    s[3] = str_dup(*((_QWORD *) (a1 + 240)), "act_comm.c:72"); // C1.a.ii. Array access to access struct members, C1.a.i Pointer arithmetic to access struct members, Possible C9.b. Uses expanded macro (note lack of _ at start of function call)
    s[4] = str_dup(&unk_AE1D, "act_comm.c:73"); // C1.a.ii. Array access to access struct members, C6.d. String replaced with reference to undeclared or global variable, Possible C9.b. Uses expanded macro (note lack of _ at start of function call)
    s[5] = str_dup(&unk_AE1D, "act_comm.c:74"); // C1.a.ii. Array access to access struct members, C6.d. String replaced with reference to undeclared or global variable, Possible C9.b. Uses expanded macro (note lack of _ at start of function call)
    s[6] = str_dup(&unk_AE1D, "act_comm.c:75"); // C1.a.ii. Array access to access struct members, C6.d. String replaced with reference to undeclared or global variable, Possible C9.b. Uses expanded macro (note lack of _ at start of function call)
    s[7] = str_dup(&unk_AE1D, "act_comm.c:76"); // C1.a.ii. Array access to access struct members, C6.d. String replaced with reference to undeclared or global variable, Possible C9.b. Uses expanded macro (note lack of _ at start of function call)
    result = a1; // C2.a.i. Extraneous code to initialize extraneous variable
    *((_QWORD *) (a1 + 192)) = s; // C1.a.i Pointer arithmetic to access struct members
  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void note_attach(CHAR_DATA *ch)
{
  NOTE_DATA *pnote;
  if (ch->pnote)
    return;

  do
  {
    if (!note_free)
      pnote = _getmem(sizeof(*pnote), "act_comm.c:69", 1);
    else
    {
      if (!note_free->is_free)
      {
        bug("GET_FREE: freelist head is NOT FREE!  Hanging...", 0);
        for (;;)
          ;

      }

      pnote = note_free;
      note_free = pnote->next;
      memset(pnote, 0, sizeof(*pnote));
    }

  }
  while (0);
  pnote->next = 0;
  pnote->sender = _str_dup(ch->name, "act_comm.c:72");
  pnote->date = _str_dup("", "act_comm.c:73");
  pnote->to_list = _str_dup("", "act_comm.c:74");
  pnote->subject = _str_dup("", "act_comm.c:75");
  pnote->text = _str_dup("", "act_comm.c:76");
  ch->pnote = pnote;
  return;
}




/*
 * Example 8
 * File: oversized_idioms_data_no_ast/data_0001.pkl
 * Shard 1, Index 3352
 * Source: darklinden/EasyPurchase
 */

/** Decompiled **/
long long *AES_bi_ige_encrypt(long long *a1, long long *a2, unsigned long long a3, long long a4, long long a5, long long a6, int a7)
{
  long long v7; // C13. Decomposition of a composite variable. -- aligns acts as the storage for v17 = a2 = out, though C2.a.i. extraneous variable duplicating another variable - it is a duplicate of v22.
  long long *result; // C5.a. Extraneous variable. Performs same role as j
  long long v9; // C13. Decomposition of a composite variable. -- aligns acts as the storage for tmp, though C2.a.i. extraneous variable duplicating another variable - it is a duplicate of v28.
  long long v10; // C13. Decomposition of a composite variable. -- aligns acts as the storage for tmp, though C2.a.i. extraneous variable duplicating another variable - it is a duplicate of v28.
  long long v11; // C13. Decomposition of a composite variable. -- aligns acts as the storage for tmp, though C2.a.i. extraneous variable duplicating another variable - it is a duplicate of v26.
  long long v12; // C13. Decomposition of a composite variable. -- aligns acts as the storage for tmp, though C2.a.i. extraneous variable duplicating another variable - it is a duplicate of v28.
  long long v13; // C13. Decomposition of a composite variable. -- aligns acts as the storage for tmp, though C2.a.i. extraneous variable duplicating another variable - it is a duplicate of v26.
  long long v14; // C5.a.i. Extraneous variable duplicating another variable
  long long v15; // C5.a.i. Extraneous variable duplicating another variable
  unsigned long long v16; // C5.a.i. Extraneous variable duplicating another variable
  long long *v17; // C5.a.i. Extraneous variable duplicating another variable
  long long *v18; // C5.a. Extraneous variable
  long long *v19; // C5.a.i. Extraneous variable duplicating another variable
  long long *v20; // C5.a. Extraneous variable
  long long v21; // C13. Decomposition of a composite variable. -- acts as the storage for v17 = a2 = out
  long long v22; // C13. Decomposition of a composite variable. -- acts as the storage for v17 = a2 = out
  long long v23; // C13. Decomposition of a composite variable. -- stores part of a copied array for tmp3
  long long v24; // C13. Decomposition of a composite variable. -- stores part of a copied array for tmp3
  long long v25; // C13. Decomposition of a composite variable. -- stores part of a copied array for tmp2
  long long v26; // C13. Decomposition of a composite variable. -- stores part of a copied array for tmp2
  long long v27; // C13. Decomposition of a composite variable. -- stores part of a copied array for tmp
  long long v28; // C13. Decomposition of a composite variable. -- stores part of a copied array for tmp 
  long long *v29; // -- aligns with iv
  long long *v30; // -- aligns with iv2
  unsigned long long j; // -- aligns with len
  unsigned long long i;
  v19 = a1;
  v17 = a2;
  v16 = a3;
  v15 = a4;
  v14 = a6;
  j = a3;
  // C7.d. Deconstructed ternary (next two lines) (though this version may actually be more readable)
  if ((((!a1) || (!a2)) || (!a4)) || (!a6))
    OpenSSLDie("aes_ige.c", 227LL, "in && out && key && ivec");

  // C7.d. Deconstructed ternary (next two lines) (though this version may actually be more readable)
  if ((a7 != 1) && a7)
    OpenSSLDie("aes_ige.c", 228LL, "(AES_ENCRYPT == enc)||(AES_DECRYPT == enc)");

  // C7.d. Deconstructed ternary (next two lines) (though this version may actually be more readable)
  if (v16 & 0xF)
    OpenSSLDie("aes_ige.c", 229LL, "(length%AES_BLOCK_SIZE) == 0");

  if (a7 == 1)
  {
    v30 = (long long *) v14; // C3.a. Extraneous typecast
    v29 = (long long *) (v14 + 16); // C3.a. Extraneous typecast
    while (j > 0xF)
    {
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) v17) + i) = (*(((_BYTE *) v30) + i)) ^ (*(((_BYTE *) v19) + i)); // C1.b.ii. Pointer arithmetic to access array members

      AES_encrypt(v17, v17, v15);
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) v17) + i) ^= *(((_BYTE *) v29) + i); // C1.b.ii. Pointer arithmetic to access array members

      v30 = v17;
      v7 = v19[1]; // C7.c. Inline function definition instead of function call - memcpy, C2.a.i. Extra code to initialize extraneous variable - this data will be copied over to v21.
      v21 = *v19; // C7.c. Inline function definition instead of function call - memcpy
      v22 = v7;
      v29 = &v21;
      j -= 16LL;
      v19 += 2; // C14. Type-dependent incorrect expression - +2 only works when these are 64 byte integers; the 16 in the original works for the original char types.
      v17 += 2; // C14. Type-dependent incorrect expression - +2 only works when these are 64 byte integers; the 16 in the original works for the original char types.
    }

    v30 = (long long *) (v14 + 32); // C3.a. Extraneous typecast
    v29 = (long long *) (v14 + 48); // C3.a. Extraneous typecast
    result = (long long *) v16; // C3.a. Extraneous typecast
    for (j = v16; j > 0xF; j -= 16LL)
    {
      v17 -= 2; // C14. Type-dependent incorrect expression - -2 only works when these are 64 byte integers; the 16 in the original works for the original char types.
      v9 = v17[1]; // C7.c. Inline function definition instead of function call - memcpy, C2.a.i. Extra code to initialize extraneous variable - this data will be copied over to v28.
      v27 = *v17; // C7.c. Inline function definition instead of function call - memcpy
      v28 = v9;
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) v17) + i) ^= *(((_BYTE *) v30) + i); // C1.b.ii. Pointer arithmetic to access array members

      AES_encrypt(v17, v17, v15);
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) v17) + i) ^= *(((_BYTE *) v29) + i); // C1.b.ii. Pointer arithmetic to access array members

      v30 = v17;
      v21 = v27; // C7.c. Inline function definition instead of function call - memcpy
      v22 = v28; // C7.c. Inline function definition instead of function call - memcpy
      result = &v21; // C4. Nonequivalent expression - aligns with len -= 16. The variable 'return' functions as 'len', but the address of a variable is not equal to -= 16.
      v29 = &v21;
    }

  }
  else
  {
    v30 = (long long *) (v14 + 32); // C3.a. Extraneous typecast
    v29 = (long long *) (v14 + 48); // C3.a. Extraneous typecast
    v20 = (long long *) (((char *) a1) + v16); // C3.a. Extraneous typecast
    v18 = (long long *) (((char *) a2) + v16); // C3.a. Extraneous typecast
    while (j > 0xF)
    {
      v20 -= 2; // C14. Type-dependent incorrect expression - -2 only works when these are 64 byte integers; the 16 in the original works for the original char types.
      v18 -= 2; // C14. Type-dependent incorrect expression - -2 only works when these are 64 byte integers; the 16 in the original works for the original char types.
      v10 = v20[1]; // C7.c. Inline function definition instead of function call - memcpy, C2.a.i. Extra code to initialize extraneous variable - this data will be copied over to v28.
      v27 = *v20; // C7.c. Inline function definition instead of function call - memcpy
      v28 = v10;
      v11 = v20[1]; // C7.c. Inline function definition instead of function call - memcpy, C2.a.i. Extra code to initialize extraneous variable - this data will be copied over to v26.
      v25 = *v20; // C7.c. Inline function definition instead of function call - memcpy
      v26 = v11;
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) (&v27)) + i) ^= *(((_BYTE *) v29) + i); // C1.b.ii. Pointer arithmetic to access array members

      AES_decrypt(&v27, v18, v15);
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) v18) + i) ^= *(((_BYTE *) v30) + i); // C1.b.ii. Pointer arithmetic to access array members

      v23 = v25; // C7.c. Inline function definition instead of function call - memcpy
      v24 = v26; // C7.c. Inline function definition instead of function call - memcpy
      v30 = &v23;
      v29 = v18;
      j -= 16LL;
    }

    v30 = (long long *) v14; // C3.a. Extraneous typecast
    v29 = (long long *) (v14 + 16); // C3.a. Extraneous typecast
    result = (long long *) v16; // C3.a. Extraneous typecast
    j = v16;
    while (j > 0xF)
    {
      v12 = v18[1]; // C7.c. Inline function definition instead of function call - memcpy, C2.a.i. Extra code to initialize extraneous variable - this data will be copied over to v28.
      v27 = *v18; // C7.c. Inline function definition instead of function call - memcpy
      v28 = v12;
      v13 = v18[1]; // C7.c. Inline function definition instead of function call - memcpy, C2.a.i. Extra code to initialize extraneous variable - this data will be copied over to v26.
      v25 = *v18; // C7.c. Inline function definition instead of function call - memcpy
      v26 = v13;
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) (&v27)) + i) ^= *(((_BYTE *) v29) + i); // C1.b.ii. Pointer arithmetic to access array members

      AES_decrypt(&v27, v18, v15);
      for (i = 0LL; i <= 0xF; ++i)
        *(((_BYTE *) v18) + i) ^= *(((_BYTE *) v30) + i); // C1.b.ii. Pointer arithmetic to access array members

      v23 = v25; // C7.c. Inline function definition instead of function call - memcpy
      v24 = v26; // C7.c. Inline function definition instead of function call - memcpy
      v30 = &v23;
      result = v18; // C2.a.i. Extra statement to initialize extraneous variable
      v29 = v18;
      j -= 16LL;
      v20 += 2; // C14. Type-dependent incorrect expression - +2 only works when these are 64 byte integers; the 16 in the original works for the original char types.
      v18 += 2; // C14. Type-dependent incorrect expression - +2 only works when these are 64 byte integers; the 16 in the original works for the original char types.
    }

  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void AES_bi_ige_encrypt(const unsigned char *in, unsigned char *out, size_t length, const AES_KEY *key, const AES_KEY *key2, const unsigned char *ivec, const int enc)
{
  size_t n;
  size_t len = length;
  unsigned char tmp[16];
  unsigned char tmp2[16];
  unsigned char tmp3[16];
  unsigned char prev[16];
  const unsigned char *iv;
  const unsigned char *iv2;
  (void) ((((in && out) && key) && ivec) ? (0) : ((OpenSSLDie("aes_ige.c", 227, "in && out && key && ivec"), 1)));
  (void) (((1 == enc) || (0 == enc)) ? (0) : ((OpenSSLDie("aes_ige.c", 228, "(AES_ENCRYPT == enc)||(AES_DECRYPT == enc)"), 1)));
  (void) (((length % 16) == 0) ? (0) : ((OpenSSLDie("aes_ige.c", 229, "(length%AES_BLOCK_SIZE) == 0"), 1)));
  if (1 == enc)
  {
    iv = ivec;
    iv2 = ivec + 16;
    while (len >= 16)
    {
      for (n = 0; n < 16; ++n)
        out[n] = in[n] ^ iv[n];

      AES_encrypt(out, out, key);
      for (n = 0; n < 16; ++n)
        out[n] ^= iv2[n];

      iv = out;
      memcpy(prev, in, 16);
      iv2 = prev;
      len -= 16;
      in += 16;
      out += 16;
    }

    iv = ivec + (16 * 2);
    iv2 = ivec + (16 * 3);
    len = length;
    while (len >= 16)
    {
      out -= 16;
      memcpy(tmp, out, 16);
      for (n = 0; n < 16; ++n)
        out[n] ^= iv[n];

      AES_encrypt(out, out, key);
      for (n = 0; n < 16; ++n)
        out[n] ^= iv2[n];

      iv = out;
      memcpy(prev, tmp, 16);
      iv2 = prev;
      len -= 16;
    }

  }
  else
  {
    iv = ivec + (16 * 2);
    iv2 = ivec + (16 * 3);
    in += length;
    out += length;
    while (len >= 16)
    {
      in -= 16;
      out -= 16;
      memcpy(tmp, in, 16);
      memcpy(tmp2, in, 16);
      for (n = 0; n < 16; ++n)
        tmp[n] ^= iv2[n];

      AES_decrypt(tmp, out, key);
      for (n = 0; n < 16; ++n)
        out[n] ^= iv[n];

      memcpy(tmp3, tmp2, 16);
      iv = tmp3;
      iv2 = out;
      len -= 16;
    }

    iv = ivec;
    iv2 = ivec + 16;
    len = length;
    while (len >= 16)
    {
      memcpy(tmp, out, 16);
      memcpy(tmp2, out, 16);
      for (n = 0; n < 16; ++n)
        tmp[n] ^= iv2[n];

      AES_decrypt(tmp, out, key);
      for (n = 0; n < 16; ++n)
        out[n] ^= iv[n];

      memcpy(tmp3, tmp2, 16);
      iv = tmp3;
      iv2 = out;
      len -= 16;
      in += 16;
      out += 16;
    }

  }

}




/*
 * Example 9
 * File: oversized_idioms_data_no_ast/data_0001.pkl
 * Shard 1, Index 5893
 * Source: sba1/simplemail
 */

/** Decompiled **/
const char *identify_file(const char *a1)
{
  const char *result; // -- aligns with ctype
  size_t v2; // C5.a. Extraneous variable
  FILE *stream; // -- aligns with fh
  char *s; // -- aligns with ext
  char *sa; // C5.a.i. Extraneous variable duplicating another variable
  stream = fopen(a1, "r");
  if (!stream)
    goto LABEL_63; // C7. Obfuscated control flow - goto
  
  // C5.b. Missing variable - len

  *((&buffer_4159) + ((signed int) fread(&buffer_4159, 1uLL, 0x3FFuLL, stream))) = 0;
  fclose(stream);
  s = strrchr(a1, 46);
  if (s)
    sa = s + 1;
  else
    sa = "--";

  if ((!mystricmp(sa, "htm")) || (!mystricmp(sa, "html")))
    return "text/html";

  if ((!mystrnicmp(&buffer_4159, "@database", 9)) || (!mystricmp(sa, "guide")))
    return "text/x-aguide";

  if ((!mystricmp(sa, "ps")) || (!mystricmp(sa, "eps")))
    return "application/postscript";

  if (!mystricmp(sa, "rtf"))
    return "application/rtf";

  if ((!mystricmp(sa, "lha")) || (!strncmp(byte_22, "-lh5-", 5uLL))) // C4. Nonequivalent expression - byte_22 vs &buffer_4159
    return "application/x-lha";

  if ((!mystricmp(sa, "lzx")) || (!strncmp(&buffer_4159, "LZX", 3uLL)))
    return "application/x-lzx";

  if (!mystricmp(sa, "zip"))
    return "application/x-zip";

  if (!mystricmp(sa, "rexx"))
    return "application/x-rexx";

  v2 = strlen(sa);
  if (!mystricmp(&sa[v2 - 2], "rx"))
    return "application/x-rexx";

  if (!strncmp(byte_26, "JFIF", 4uLL))
    return "image/jpeg";

  if (!strncmp(&buffer_4159, "GIF8", 4uLL))
    return "image/gif";

  if ((!mystrnicmp(sa, "png", 4)) || (!strncmp(&byte_21, "PNG", 3uLL))) // C4. Nonequivalent expression - &byte_21 vs &buffer_4159
    return "image/png";

  if (!mystrnicmp(sa, "tif", 4))
    return "image/tiff";

  if ((!strncmp(&buffer_4159, "FORM", 4uLL)) && (!strncmp(byte_28, "ILBM", 4uLL))) // C4. Nonequivalent expression - byte_28 vs &buffer_4159
    return "image/x-ilbm";

  if ((!mystricmp(sa, "au")) || (!mystricmp(sa, "snd")))
    return "audio/basic";

  if ((!strncmp(&buffer_4159, "FORM", 4uLL)) && (!strncmp(byte_28, "8SVX", 4uLL))) // C4. Nonequivalent expression - byte_28 vs &buffer_4159
    return "audio/x-8svx";

  if (!mystricmp(sa, "wav"))
    return "audio/x-wav";

  if ((!mystricmp(sa, "mpg")) || (!mystricmp(sa, "mpeg")))
    return "video/mpeg";

  if ((!mystricmp(sa, "qt")) || (!mystricmp(sa, "mov")))
    return "video/quicktime";

  if ((!strncmp(&buffer_4159, "FORM", 4uLL)) && (!strncmp(byte_28, "ANIM", 4uLL))) // C4. Nonequivalent expression - byte_28 vs &buffer_4159
    return "video/x-anim";

  if (!mystricmp(sa, "avi"))
    return "video/x-msvideo";

  if (mystristr(&buffer_4159, "\nFrom:"))
    result = "message/rfc822";
  else
    LABEL_63:
  result = "application/octet-stream";


  return result;
}


/** Original **/
const char *identify_file(const char *fname)
{
  const char *ctype = "application/octet-stream";
  FILE *fh;
  if (fh = fopen(fname, "r"))
  {
    int len;
    static char buffer[1024];
    const char *ext;
    len = fread(buffer, 1, 1023, fh);
    buffer[len] = 0;
    fclose(fh);
    if (ext = strrchr(fname, '.'))
      ++ext;
    else
      ext = "--";

    if ((!mystricmp(ext, "htm")) || (!mystricmp(ext, "html")))
      return "text/html";
    else
      if ((!mystrnicmp(buffer, "@database", 9)) || (!mystricmp(ext, "guide")))
      return "text/x-aguide";
    else
      if ((!mystricmp(ext, "ps")) || (!mystricmp(ext, "eps")))
      return "application/postscript";
    else
      if (!mystricmp(ext, "rtf"))
      return "application/rtf";
    else
      if ((!mystricmp(ext, "lha")) || (!strncmp(&buffer[2], "-lh5-", 5)))
      return "application/x-lha";
    else
      if ((!mystricmp(ext, "lzx")) || (!strncmp(buffer, "LZX", 3)))
      return "application/x-lzx";
    else
      if (!mystricmp(ext, "zip"))
      return "application/x-zip";
    else
      if ((!mystricmp(ext, "rexx")) || (!mystricmp((ext + strlen(ext)) - 2, "rx")))
      return "application/x-rexx";
    else
      if (!strncmp(&buffer[6], "JFIF", 4))
      return "image/jpeg";
    else
      if (!strncmp(buffer, "GIF8", 4))
      return "image/gif";
    else
      if ((!mystrnicmp(ext, "png", 4)) || (!strncmp(&buffer[1], "PNG", 3)))
      return "image/png";
    else
      if (!mystrnicmp(ext, "tif", 4))
      return "image/tiff";
    else
      if ((!strncmp(buffer, "FORM", 4)) && (!strncmp(&buffer[8], "ILBM", 4)))
      return "image/x-ilbm";
    else
      if ((!mystricmp(ext, "au")) || (!mystricmp(ext, "snd")))
      return "audio/basic";
    else
      if ((!strncmp(buffer, "FORM", 4)) && (!strncmp(&buffer[8], "8SVX", 4)))
      return "audio/x-8svx";
    else
      if (!mystricmp(ext, "wav"))
      return "audio/x-wav";
    else
      if ((!mystricmp(ext, "mpg")) || (!mystricmp(ext, "mpeg")))
      return "video/mpeg";
    else
      if ((!mystricmp(ext, "qt")) || (!mystricmp(ext, "mov")))
      return "video/quicktime";
    else
      if ((!strncmp(buffer, "FORM", 4)) && (!strncmp(&buffer[8], "ANIM", 4)))
      return "video/x-anim";
    else
      if (!mystricmp(ext, "avi"))
      return "video/x-msvideo";
    else
      if (mystristr(buffer, "\nFrom:"))
      return "message/rfc822";

  }

  return ctype;
}