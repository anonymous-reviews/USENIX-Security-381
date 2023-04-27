/* 
 ******** File 1 ********
 */

/*
 * Example 100
 * File: idioms_data_copy/data_0018.pkl
 * Shard 18, Index 3286
 * Source: j4r0g/Projet_Labyrinthe
 */

/** Decompiled **/
char *sC5b(const char *a1, const char *a2, const char *a3, const char *a4, const char *a5)
{
  const char *v5; //C5.a.i. Extraneous intermediate variable duplicating another variable.
  char *v6; //C5.a Extraneous variable
  v5 = a5; // C2.a.i. Extra statement to initialize extraneous variable
  v6 = sC4b(a1, a2, a3, a4);
  return sC2b(v6, v5);
}


/** Original **/
char *sC5b(char *sA, char *sB, char *sC, char *sD, char *sE)
{
  char *sAccu = sC2b(sC4b(sA, sB, sC, sD), sE);
  return sAccu;
}




/*
 * Example 101
 * File: idioms_data_copy/data_0018.pkl
 * Shard 18, Index 3426
 * Source: OS2World/GAME-ADVENTURE-Omega
 */

/** Decompiled **/
long long sleep_player(int a1)
{
  long long result; // C5.a. Extraneous variable.
  result = (unsigned int) Player[59]; // C1. Non-idiomatic dereference
  if (!((_DWORD) result))
  {
    mprint("You feel sleepy...");
    if ((unsigned int) p_immune(8LL)) //C3.a. Extraneous typecast
    {
      result = mprint("but you shrug off the momentary lassitude.");
    }
    else
    {
      result = (((unsigned int) random_range((unsigned int) (2 * a1))) + 2) + Player[59]; //C1.a.ii., C3.a.
      Player[59] = result; //C1.a.ii. Array access to access struct members
    }

  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void sleep_player(amount)
int amount;
{
  if (Player.status[4] == 0)
  {
    mprint("You feel sleepy...");
    if (!p_immune(8))
    {
      Player.status[4] += random_range(amount * 2) + 2;
    }
    else
      mprint("but you shrug off the momentary lassitude.");

  }

}




/*
 * Example 102
 * File: idioms_data_copy/data_0018.pkl
 * Shard 18, Index 4961
 * Source: aramiscd/satk
 */

/** Decompiled **/
long long _VS1BUILTIN_INSTS(long long a1)
{
  long long v1; //C5.a.i. Extraneous intermediate variable duplicating another variable.
  long long result; //C5.a. Extraneous variable
  v1 = a1; // C2.a.i. Extra statement to initialize extraneous variable
  (*((&VS1MAP) + (*(*((signed int **) (a1 + 16))))))(*((_QWORD *) (a1 + 16))); //C1.a.i. Pointer arithmetic to access struct members
  (*((&VS1MAP) + (*(*((signed int **) (v1 + 24))))))(*((_QWORD *) (v1 + 24))); //C1.a.i. Pointer arithemtic to access struct members
  // C4.c. Extra & when accessing global variables
  // C1.a.i. Pointer arithmetic to access struct members
  // C4.a.ii. Missing arguments (This call to NewTreeNodeRhs_2_0 has only 3, as opposed to 5 in the original).
  result = NewTreeNodeRhs_2_0(v1 + 32, &MkBUILTIN_INSTS_2, *((_QWORD *) ((*((_QWORD *) (v1 + 16))) + 8LL)));
  *((_QWORD *) (a1 + 8)) = result; //C1.a.i Pointer arithmetic to access struct members
  return result; // C12.a. Return value for void function
}


/** Original **/
void _VS1BUILTIN_INSTS(_TPPBUILTIN_INSTS _currn)
{
  ;
  (*((void (*)(NODEPTR)) VS1MAP[_currn->_desc1->_prod]))((NODEPTR) _currn->_desc1);
  (*((void (*)(NODEPTR)) VS1MAP[_currn->_desc2->_prod]))((NODEPTR) _currn->_desc2);
  _currn->_ATtree = NewTreeNodeRhs_2_0(&_currn->_AT_pos, MkBUILTIN_INSTS_2, _currn->_desc1->_ATtree, _AVBuiltin_instruction_tree, (DefTableKey) 0);
  ;
}




/*
 * Example 103
 * File: idioms_data_copy/data_0018.pkl
 * Shard 18, Index 7341
 * Source: briandbl/btle-test
 */

/** Decompiled **/
void btstack_memory_l2cap_service_free() // C4.a.iii. Unused missing arguments
{
  ;
}


/** Original **/
void btstack_memory_l2cap_service_free(void *l2cap_service)
{
}




/*
 * Example 104
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 898
 * Source: r-type/sdl-libretro
 */

/** Decompiled **/
void lds_free()
{
  free(soundbank);
  soundbank = 0LL;
  free(positions);
  positions = 0LL;
  free(patterns);
  patterns = 0LL;
}


/** Original **/
void lds_free(void)
{
  free(soundbank);
  soundbank = 0;
  free(positions);
  positions = 0;
  free(patterns);
  patterns = 0;
}




/*
 * Example 105
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 1037
 * Source: ochaochaocha3/polytech-2014-algorithm-exam
 */

/** Decompiled **/
_BOOL8 confirm_delete()
{
  int v1;
  do
  {
    printf(&byte_405FB0); // C6.d. String replaced with reference to undeclared or global variable.
    __isoc99_scanf(); // C4.a.ii. Missing arguments
  }
  while (v1 && (v1 != 1));
  return v1 == 0;
}


/** Original **/
int confirm_delete(void)
{
  int answer;
  do
  {
    printf("削除しますか? (Yes: 0 / No: 1) > ");
    scanf("%d", &answer);
  }
  while ((answer != 0) && (answer != 1));
  return answer == 0;
}




/*
 * Example 106
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 2104
 * Source: libretro/blueMSX-libretro
 */

/** Decompiled **/
long long actionPropShowDisk()
{
  return archShowPropertiesDialog(5LL); //C9.b. Expanded user-defined macro, C12.a. Return value for void function
}


/** Original **/
void actionPropShowDisk()
{
  archShowPropertiesDialog(PROP_DISK);
}




/*
 * Example 107
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 2333
 * Source: libretro/blueMSX-libretro
 */

/** Decompiled **/
_DWORD *harddiskIdeCreate(int a1)
{
  _DWORD *v1;
  _DWORD *v2; // C5.a.i. Extraneous intermediate variable duplicating another variable.
  v1 = malloc(0x20020uLL); // C9.a. Expanded standard macro
  v2 = v1; // C2.a.i. Extra statement to initialize extraneous variable
  v1[32775] = a1; // C1.a.ii. Array access to access struct members
  v1[2] = 0; // C1.a.ii. Array access to access struct members
  v1[3] = 0; // C1.a.ii. Array access to access struct members
  harddiskIdeReset((long long) v1); // C3.a. Extraneous typecast
  return v2;
}


/** Original **/
HarddiskIde *harddiskIdeCreate(int diskId)
{
  HarddiskIde *hd = malloc(sizeof(HarddiskIde));
  hd->diskId = diskId;
  hd->transferRead = 0;
  hd->transferWrite = 0;
  harddiskIdeReset(hd);
  return hd;
}




/*
 * Example 108
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 3880
 * Source: libretro/blueMSX-libretro
 */

/** Decompiled **/
long long or_a(long long a1)
{
  return OR(a1, *((_BYTE *) (a1 + 11))); // C1.a.i. Pointer arithmetic to access struct members, C12.a. Return value for void function
}


/** Original **/
static void or_a(R800 *r800)
{
  OR(r800, r800->regs.AF.B.h);
}




/*
 * Example 109
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 7696
 * Source: hallgeirl/cse272-raytracer
 */

/** Decompiled **/
long long mng_special_ipng(long long a1) // C4.a.iii. Unused missing arguments
{
  long long result; //C5.a. Extraneous variable
  unsigned int v2;
  v2 = mng_create_ani_ipng(a1);
  if (!v2)
    v2 = mng_process_display_ipng(a1);

  if (v2)
    result = v2;
  else
    result = 0LL;

  return result;
}


/** Original **/
mng_retcode mng_special_ipng(mng_datap pData, mng_chunkp pChunk)
{
  mng_retcode iRetcode = mng_create_ani_ipng(pData);
  if (!iRetcode)
    iRetcode = mng_process_display_ipng(pData);

  if (iRetcode)
    return iRetcode;

  return (mng_retcode) 0;
}




/*
 * Example 110
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 7803
 * Source: hallgeirl/cse272-raytracer
 */

/** Decompiled **/
long long mng_scale_g1_g8(long long a1)
{
  int i;
  _BYTE *v3;
  v3 = *((_BYTE **) (a1 + 872)); // C1.a.i Pointer arithmetic to access struct references
  for (i = 0; i < (*((_DWORD *) (a1 + 804))); ++i) // C1.a.i. Pointer arithmetic to access struct references
    *(v3++) <<= 7;

  return 0LL;
}


/** Original **/
mng_retcode mng_scale_g1_g8(mng_datap pData)
{
  mng_uint8p pWorkrow = pData->pRGBArow;
  mng_int32 iX;
  for (iX = 0; iX < pData->iRowsamples; iX++)
  {
    *pWorkrow = (mng_uint8) ((*pWorkrow) << 7);
    pWorkrow++;
  }

  return (mng_retcode) 0;
}




/*
 * Example 111
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 336
 * Source: amthompson42010/Infix-Expression-Calculator
 */

/** Decompiled **/
long long getCDA(long long a1, int a2)
{
  if ((a2 < 0) || (a2 >= (*((_DWORD *) (a1 + 20))))) // C.a.i Pointer arithmetic to access struct members
    _assert_fail("index >= 0 && index < items->filledIndices", "cda.c", 0xE4u, "getCDA"); // C9.a. Expanded standard macro

  return *((_QWORD *) ((*((_QWORD *) (a1 + 24))) + (8LL * ((*((_DWORD *) (a1 + 8))) + a2)))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer arithmetic to access array members
}


/** Original **/
void *getCDA(CDA *items, int index)
{
  assert((index >= 0) && (index < items->filledIndices));
  return items->array[items->frontIndex + index];
}




/*
 * Example 112
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 907
 * Source: freshpassport/utils
 */

/** Decompiled **/
void usage(long long a1)
{
  fprintf(_bss_start, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", a1); // C4. Nonequivalent expression - _bss_start is not stdout
  exit(0);
}


/** Original **/
void usage(const char *prog)
{
  fprintf(stdout, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", prog);
  exit(0);
}




/*
 * Example 113
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 3452
 * Source: surajhes/MultiThreading--Token-Bucket
 */

/** Decompiled **/
long long My402ListNext(long long a1, long long a2)
{
  long long result; // C5.a. Extraneous variable
  if ((*((_QWORD *) (a2 + 8))) == (a1 + 8)) // C1.a.i. Pointer arithmetic to access struct members
    result = 0LL;
  else
    result = *((_QWORD *) (a2 + 8)); // C1.a.i. Pointer arithmetic to access struct members

  return result;
}


/** Original **/
My402ListElem *My402ListNext(My402List *list, My402ListElem *elem)
{
  if (elem->next == (&list->anchor))
  {
    return 0;
  }
  else
  {
    return elem->next;
  }

}




/*
 * Example 114
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 5257
 * Source: xth1/lwr
 */

/** Decompiled **/
void destroy_mat_int2d(void **a1, int a2)
{
  int i;
  for (i = a2 - 1; i >= 0; --i)
    free(a1[i]);

  free(a1);
}


/** Original **/
void destroy_mat_int2d(int **mat, int nr)
{
  int i;
  for (i = nr - 1; i >= 0; i--)
  {
    free((void *) mat[i]);
  }

  free((void *) mat);
}




/*
 * Example 115
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 7093
 * Source: pribault/Lem_in
 */

/** Decompiled **/
_QWORD *ft_lstnew(long long a1, size_t a2)
{
  _QWORD *v3;
  v3 = malloc(0x18uLL); // C9.a. Expanded standard macro
  if (!v3)
    return 0LL;

  if (a2 && a1)
  {
    *v3 = malloc(a2); // C1.a.iii. Pointer dereference to access first struct member
    if (!(*v3))
      return 0LL;

    *v3 = ft_memmove(*v3, a1, a2); // C1.a.iii. Pointer dereference to access first struct member
  }

  v3[1] = a2; // C1.a.ii. Array access to access struct members
  if (!a1)
  {
    *v3 = 0LL; // C1.a.iii. Pointer dereference to access first struct member
    v3[1] = 0LL; // C1.a.ii. Array access to access struct members
  }

  v3[2] = 0LL; // C1.a.ii. Array access to access struct members
  return v3;
}


/** Original **/
t_list *ft_lstnew(const void *content, size_t content_size)
{
  t_list *new;
  new = (t_list *) malloc(sizeof(t_list));
  if (new == 0)
    return 0;

  if ((content_size != 0) && (content != 0))
  {
    if (!(new->content = (void *) malloc(content_size)))
      return 0;

    new->content = ft_memmove(new->content, content, content_size);
  }

  new->content_size = content_size;
  if (content == 0)
  {
    new->content = 0;
    new->content_size = 0;
  }

  new->next = 0;
  return new;
}




/*
 * Example 116
 * File: idioms_data_copy/data_0021.pkl
 * Shard 21, Index 1337
 * Source: SunDoge/kilo
 */

/** Decompiled **/
signed long long initEditor()
{
  signed long long result; // C5.a. Extraneous variable
  E = 0; // C8. Global variable issues, C13. Decomposition of a composite variable into multiple variables (this and next three lines)
  dword_4040E4 = 0;
  dword_4040F0 = 0;
  result = getWindowSize(&dword_4040E8, &dword_4040EC);
  if (((_DWORD) result) == (-1))
    die("getWindowSize");

  return result; // C12.a. Return value for void function
}


/** Original **/
void initEditor()
{
  E.cx = 0;
  E.cy = 0;
  E.numrows = 0;
  if (getWindowSize(&E.screenrows, &E.screencols) == (-1))
    die("getWindowSize");

}




/*
 * Example 117
 * File: idioms_data_copy/data_0021.pkl
 * Shard 21, Index 8620
 * Source: calacademy-research/blatq
 */

/** Decompiled **/
signed long long gfDnaTile(long long a1, int a2)
{
  int v3; // -- aligns with c
  int i; // -- aligns with i
  unsigned int v5; // -- aligns with v5
  int v6; // C5.a. Extraneous variables
  v5 = 0;
  for (i = 0; i < a2; ++i)
  {
    v6 = 4 * v5;
    v3 = ntLookup[*((char *) (i + a1))]; // C1.b.ii. Pointer arithmetic to access array members
    if (v3 < 0)
      return 0xFFFFFFFFLL;

    v5 = v3 + v6;
  }

  return v5;
}


/** Original **/
int gfDnaTile(DNA *dna, int n)
{
  int tile = 0;
  int i;
  int c;
  for (i = 0; i < n; ++i)
  {
    tile <<= 2;
    if ((c = ntLookup[(int) dna[i]]) < 0)
      return -1;

    tile += c;
  }

  return tile;
}




/*
 * Example 118
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 138
 * Source: y0uCeF/Ronda
 */

/** Decompiled **/
_BOOL8 stack_empty(long long a1)
{
  return a1 == 0;
}


/** Original **/
bool stack_empty(stack s)
{
  return s == 0;
}




/*
 * Example 119
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 2811
 * Source: ljdursi/mpi-tutorial
 */

/** Decompiled **/
_QWORD *alloc2d_int(int a1, int a2)
{
  _QWORD *v3;
  char *v4;
  int i;
  v4 = (char *) malloc((4LL * a2) * a1); // C9.a. Expanded standard macro
  if (!v4)
    return 0LL;

  v3 = malloc(8LL * a1); // C9.a. Expanded standard macro
  for (i = 0; i < a1; ++i)
    v3[i] = &v4[(4 * a2) * i]; // C14. Type-dependent incorrect expression (v4 is accessed as if it is a char array.)

  return v3;
}


/** Original **/
int **alloc2d_int(int n, int m)
{
  int *data = malloc((n * m) * (sizeof(int)));
  if (!data)
    return 0;

  int **array = (int **) malloc(n * (sizeof(int *)));
  for (int i = 0; i < n; i++)
  {
    array[i] = &data[i * m];
  }

  return array;
}




/*
 * Example 120
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 3000
 * Source: dwelch67/avriss
 */

/** Decompiled **/
long long set_ibit()
{
  long long result; // C5.a. Extraneous variable
  result = (unsigned int) sreg; // C2.a.i. Extra statement to initialize extraneous variable
  LOBYTE(result) = sreg | 0x80; // C10.a. Bitwise operators replaced with decompiler-specific macros
  sreg = result;
  return result; // C12.a. Return value for void function
}


/** Original **/
void set_ibit(void)
{
  sreg |= 1 << 7;
}




/*
 * Example 121
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 3757
 * Source: shiquan/bcfanno
 */

/** Decompiled **/
long long isprint_c(unsigned char a1)
{
  return (*_ctype_b_loc())[a1] & 0x4000; // C7.c. Inline function definition instead of function call
}


/** Original **/
inline static int isprint_c(char c)
{
  return isprint((unsigned char) c);
}




/*
 * Example 122
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 4646
 * Source: ParkerM/531Pascal
 */

/** Decompiled **/
long long b_push_const_string(long long a1)
{
  long long v1;
  emit((unsigned long long) "\t\t\t\t# b_push_const_string (\"%s\")"); // C3.a., C4.a.ii. Missing argument
  if (asm_section != 1) // C9.b. Expanded user-defined macro
    bug("non-text assembler section in b_push_const_string", a1); // C4.a.i. Extra argument

  emit((unsigned long long) "\t.section\t.rodata"); // C3.a. Extraneous typecasts
  v1 = new_symbol("\t.section\t.rodata", a1); // C4.a.i. Extra argument
  b_label(v1, a1); // C4.a.i. Extra argument
  emit((unsigned long long) ".string\t\"%s\""); // C3.a. Extra typecasts, C4.a.ii. Missing arguments
  emit((unsigned long long) "\t.text"); // C3.a. Extraneous typecasts
  return b_push_ext_addr(); // C4.a.ii. Missing arguments, C12.a. Return value for void function
}


/** Original **/
void b_push_const_string(char *string)
{
  char *label;
  emit("\t\t\t\t# b_push_const_string (\"%s\")", string);
  if (asm_section != SEC_TEXT)
    bug("non-text assembler section in b_push_const_string");

  emit("\t.section\t.rodata");
  b_label(label = new_symbol());
  emit(".string\t\"%s\"", string);
  emit("\t.text");
  b_push_ext_addr(label);
}




/*
 * Example 123
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 4819
 * Source: nivox/GRAPES
 */

/** Decompiled **/
long long fifo_queue_get_head(long long a1)
{
  if (!a1)
    return 0LL;

  if (*((_DWORD *) (a1 + 12))) // C1.a.i. Pointer arithmetic to access struct members
    return *((_QWORD *) ((*((_QWORD *) a1)) + (8LL * (*((signed int *) (a1 + 16)))))); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer arithmetic to access array members

  return 0LL;
}


/** Original **/
void *fifo_queue_get_head(fifo_queue_p queue)
{
  if (!queue)
    return 0;

  if (queue->current_size == 0)
    return 0;

  return queue->store[queue->head_ptr];
}




/*
 * Example 124
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 6191
 * Source: shengjh/pa2v.1
 */

/** Decompiled **/
long long exec_test() // C4.a.iii. Unused missing arguments
{
  interpret_rtl_and(&t0, (_DWORD *) 0x994, ((_DWORD *) (&operand_write)) + 1); // C1.a.i, C8. Global variable issues, C3.a. Extraneous typecast
  rtl_update_ZFSF(&t0, decoding[19]); // C1.a.ii. Array access to access struct members
  interpret_rtl_li(&t1, 0);
  rtl_set_CF(&t1);
  return rtl_set_OF(&t1); // C12.a. Return value for void function
}


/** Original **/
void exec_test(vaddr_t *eip)
{
  interpret_rtl_and(&t0, &(&decoding.dest)->val, &(&decoding.src)->val);
  rtl_update_ZFSF(&t0, (&decoding.dest)->width);
  interpret_rtl_li(&t1, 0);
  rtl_set_CF(&t1);
  rtl_set_OF(&t1);
  ;
}




/*
 * Example 125
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 375
 * Source: vivanraaj/Neuro_Agent_FInal
 */

/** Decompiled **/
long long read_string(unsigned int a1, _BYTE *a2)
{
  long long result; // -- aligns with 'key'
  *a2 = 0; // C1.b.i. Pointer dereference to access first array member
  do
    result = stream_read_input(a1, a2, 0LL, 0LL, 0LL, 0LL);
  while (((_BYTE) result) != 13); // C3.a. Extraneous typecast
  return result; // C12.a. Return value for void function
}


/** Original **/
void read_string(int max, zchar *buffer)
{
  zchar key;
  buffer[0] = 0;
  do
  {
    key = stream_read_input(max, buffer, 0, 0, 0, 0);
  }
  while (key != 0x0d);
}




/*
 * Example 126
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 4093
 * Source: lpabon/qemu
 */

/** Decompiled **/
unsigned long long qemu_co_queue_wait_insert_head(long long *a1)
{
  long long v2;
  unsigned long long v3; // C5.a. Extraneous variable
  v3 = __readfsqword(0x28u); // C2.a.i. Extra statement to initialize extraneous variable
  v2 = qemu_coroutine_self();
  *((_QWORD *) (v2 + 32)) = *a1; // C1.a.i. Pointer arithmetic to access struct members
  if (*((_QWORD *) (v2 + 32))) // C1.a.i. Pointer arithmetic to access struct members
    *((_QWORD *) ((*a1) + 40)) = v2 + 32; // C1.a.i. Pointer arithmetic to access struct members
  else
    a1[1] = v2 + 32; // C1.a.ii., C1.a.i.

  *a1 = v2; // C1.a.iii. Pointer dereference to access first struct member
  *((_QWORD *) (v2 + 40)) = a1; // C1.a.i. Pointer arithmetic to access struct members, C11. Abuse of memory layout - uses the coincidence of the desired struct members' address being the address of the overall struct.
  qemu_coroutine_yield();
  if (!((unsigned char) qemu_in_coroutine())) // C9.a. Expanded standard macro (this and next line), C3.a. Extraneous typecast
    _assert_fail("qemu_in_coroutine()", "qemu-coroutine-lock.c", 0x4Du, "qemu_co_queue_wait_insert_head");

  return __readfsqword(0x28u) ^ v3; // C12.a. Return value for void function
}


/** Original **/
void qemu_co_queue_wait_insert_head(CoQueue *queue)
{
  Coroutine *self = qemu_coroutine_self();
  do
  {
    if ((self->co_queue_next.tqe_next = (&queue->entries)->tqh_first) != 0)
      (&queue->entries)->tqh_first->co_queue_next.tqe_prev = &self->co_queue_next.tqe_next;
    else
      (&queue->entries)->tqh_last = &self->co_queue_next.tqe_next;

    (&queue->entries)->tqh_first = self;
    self->co_queue_next.tqe_prev = &(&queue->entries)->tqh_first;
  }
  while (0);
  qemu_coroutine_yield();
  assert(qemu_in_coroutine());
}




/*
 * Example 127
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 4786
 * Source: alexandermerritt/dragonfly
 */

/** Decompiled **/
long long take_from_pack(long long a1, long long a2)
{
  long long result; // C5.a. Extraneous variable
  long long i; // C5.a. Extraneous variable
  for (i = a2; a1 != (*((_QWORD *) (i + 64))); i = *((_QWORD *) (i + 64))) // C1.a.i., C7.a. While loop as non-canonical for loop
    ;

  result = i; // C2.a.i. Extra statement to initialize extraneous variable
  *((_QWORD *) (i + 64)) = *((_QWORD *) ((*((_QWORD *) (i + 64))) + 64LL)); // C1.a.i. Pointer arithmetic to access struct members
  return result; // C12.a. Return value for void function
}


/** Original **/
void take_from_pack(object *obj, object *pack)
{
  while (pack->next_object != obj)
  {
    pack = pack->next_object;
  }

  pack->next_object = pack->next_object->next_object;
}




/*
 * Example 128
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 6118
 * Source: megamarc/Tilengine
 */

/** Decompiled **/
signed long long TLN_AddSequenceToPack(long long a1, long long a2)
{
  // C3.a. Extraneous typecasts
  // C9.b. Expanded user-defined macros
  // C4.b. Equivalence depends on behavior of external code - (!=1 vs. ! on the return value of CheckBaseObject)
  if ((((unsigned char) CheckBaseObject(a1, 7LL)) != 1) || (((unsigned char) CheckBaseObject(a2, 6LL)) != 1))
    return 0LL;

  if (*((_QWORD *) (a1 + 24))) // C1.a.1. Pointer arithmetic to access struct members
    *((_QWORD *) ((*((_QWORD *) (a1 + 32))) + 64LL)) = a2; // C1.a.1. Pointer arithmetic to access struct members
  else
    *((_QWORD *) (a1 + 24)) = a2; // C1.a.1. Pointer arithmetic to access struct members

  *((_QWORD *) (a1 + 32)) = a2; // C1.a.1. Pointer arithmetic to access struct members
  *((_QWORD *) ((*((_QWORD *) (a1 + 32))) + 64LL)) = 0LL; // C1.a.1. Pointer arithmetic to access struct members
  ++(*((_DWORD *) (a1 + 16))); // C1.a.1. Pointer arithmetic to access struct members
  TLN_SetLastError(0LL); // C9.b. Expanded user-defined macros
  return 1LL;
}


/** Original **/
bool TLN_AddSequenceToPack(TLN_SequencePack sp, TLN_Sequence sequence)
{
  if ((!CheckBaseObject(sp, OT_SEQPACK)) || (!CheckBaseObject(sequence, OT_SEQUENCE)))
    return 0;

  if (sp->sequences == 0)
    sp->sequences = sequence;
  else
    sp->last->next = sequence;

  sp->last = sequence;
  sp->last->next = 0;
  sp->num_sequences++;
  TLN_SetLastError(TLN_ERR_OK);
  return 1;
}




/*
 * Example 129
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 6904
 * Source: olikraus/m2tklib
 */

/** Decompiled **/
long long mr_SetListElement(long long a1, int a2, int a3, long long a4)
{
  long long result; // Not an extraneous variable because it aligns with 'list' in the original code.
  result = a4;
  *((_QWORD *) ((*((_QWORD *) ((8LL * a2) + (*((_QWORD *) ((*((_QWORD *) (a1 + 8))) + 8LL)))))) + (8LL * a3))) = a4; // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer arithmetic to access array members
  return result; // C12.a. Return value for void function
}


/** Original **/
void mr_SetListElement(mr_type mr, int pos, int el_idx, void *element)
{
  void **list;
  list = (void **) mr->m2_list_list->list[pos];
  list[el_idx] = element;
}




/*
 * Example 130
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 7181
 * Source: nimengyu2/ti-a8-uboot-04.06.00.03
 */

/** Decompiled **/
long long RasterIntEnable(int a1, unsigned int a2)
{
  long long result; // -- aligns with version, but it's also used to break up expressions.
  result = LCDVersionGet();
  if (((_DWORD) result) == 2)
  {
    // These two comments apply to the block
    // This is NOT a non-idiomatic dereference - the original code intends pointer arithmetic. There is no underlying composite data type.
    // C3.a. Extraneous typecast - (unsigned int). The (_DWORD *) typecast aligns with the (volatile unsigned int *) typecast.
    result = a2 | (*((_DWORD *) ((unsigned int) (a1 + 96))));
    *((_DWORD *) ((unsigned int) (a1 + 96))) = result;
  }
  else
    if (((_DWORD) result) == 1)
  {
    // These two comments apply to the block
    // This is NOT a non-idiomatic dereference - the original code intends pointer arithmetic. There is no underlying composite data type.
    // C3.a. Extraneous typecast - (unsigned int). The (_DWORD *) typecast aligns with the (volatile unsigned int *) typecast.
    result = a2 | (*((_DWORD *) ((unsigned int) (a1 + 40))));
    *((_DWORD *) ((unsigned int) (a1 + 40))) = result;
  }


  return result; // C12.a. Return value for void function
}


/** Original **/
void RasterIntEnable(unsigned int baseAddr, unsigned int flag)
{
  unsigned int version = 0;
  version = LCDVersionGet();
  if (2u == version)
  {
    *((volatile unsigned int *) (baseAddr + 0x60)) |= flag;
  }
  else
    if (1u == version)
  {
    *((volatile unsigned int *) (baseAddr + 0x28)) |= flag;
  }
  else
  {
    ;
  }


}




/*
 * Example 131
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 7616
 * Source: fleutot/genpool
 */

/** Decompiled **/
int main(int argc, const char **argv, const char **envp) // C4.a.i. Extra arguments
{
  test_machine_init(*((_QWORD *) (&argc)), argv, envp); // C4.a.i. Extra arguments, C3.a. Extraneous typecast
  test_machine_command_create();
  test_machine_command_with_clamp();
  test_machine_command_valid_check();
  puts("All tests passed.");
  return 0; // No code for incorrect return behavior here because original code is 'int main'
}


/** Original **/
int main(void)
{
  test_machine_init();
  test_machine_command_create();
  test_machine_command_with_clamp();
  test_machine_command_valid_check();
  printf("All tests passed.\n");
}




/*
 * Example 132
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 7869
 * Source: captain-mayhem/captainsengine
 */

/** Decompiled **/
void antlr3StackFree(_QWORD *a1)
{
  (*((void (**)(_QWORD)) ((*a1) + 280LL)))(*a1); // C1.a.i. Pointer arithmetic to access struct members, C1.a.iii. Pointer dereference to access first struct member
  *((_OWORD *) a1) = 0uLL; // C11. Abuse of memory layout, C1.a.iii. Pointer dereference to access first struct member
  free(a1);
}


/** Original **/
static void antlr3StackFree(pANTLR3_STACK stack)
{
  stack->vector->free(stack->vector);
  stack->vector = 0;
  stack->top = 0;
  free((void *) stack);
}




/*
 * Example 133
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 7971
 * Source: captain-mayhem/captainsengine
 */

/** Decompiled **/
signed long long sockSend(int a1, char *a2, int a3)
{
  char *buf; // C5.a.i. Extraneous intermediate variable duplicating another variable
  int v5; // C5.a.i. Extraneous intermediate variable duplicating another variable
  int v6; // -- aligns with thisSend
  int i; // -- aligns with sent
  buf = a2; // C2.a.i. Extra statement to initialize extraneous variable
  v5 = a3; // C2.a.i. Extra statement to initialize extraneous variable
  for (i = 0; i < v5; i += v6) // C7.a. While loop as non-cannonical for loop - i += v6 is not idiomatic
  {
    v6 = send(a1, buf, v5 - i, 0);
    if (v6 == (-1))
      return 0LL;

    buf += v6;
  }

  return 1LL;
}


/** Original **/
static int sockSend(SOCKET sock, const char *ptr, int len)
{
  int sent;
  int thisSend;
  sent = 0;
  while (sent < len)
  {
    thisSend = send(sock, ptr, len - sent, 0);
    if (thisSend == (-1))
    {
      return 0;
    }

    ptr += thisSend;
    sent += thisSend;
  }

  return 1;
}




/*
 * Example 134
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 9038
 * Source: abbeyj/ti99basic
 */

/** Decompiled **/
long long vdp_data_read()
{
  unsigned char v0;
  vdp_cmd_write_2 = 0;
  v0 = vdp_data_read_latch;
  vdp_data_read_ahead();
  return v0;
}


/** Original **/
inline static uint8_t vdp_data_read()
{
  uint8_t ret;
  vdp_cmd_write_2 = 0;
  ret = vdp_data_read_latch;
  vdp_data_read_ahead();
  return ret;
}




/*
 * Example 135
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 466
 * Source: twinleaf/tio-tools
 */

/** Decompiled **/
long long io_serial_close(long long a1, unsigned int a2)
{
  void **ptr;
  ptr = *((void ***) (a1 + 8)); // C1.a.i. Pointer arithmetic as struct dereference
  free(ptr[1]); // C1.a.ii. Array access to access struct members
  tl_serial_destroy_deserializer(ptr[3]); // C1.a.ii. Array access to access struct members
  free(ptr);
  return a2;
}


/** Original **/
static int io_serial_close(fd_overlay_t *fdo, int fd)
{
  serial_state *state = (serial_state *) fdo->state;
  free(state->buf);
  tl_serial_destroy_deserializer(state->des);
  free(state);
  return fd;
}




/*
 * Example 136
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 892
 * Source: anastop/util
 */

/** Decompiled **/
int test_all_bits(long long a1, unsigned long long a2)
{
  unsigned long long i;
  printf("Set bits: ");
  for (i = 0LL; i < a2; ++i)
  {
    if (((unsigned int) bit_test(a1, i)) == 1) // C3.a.i. Extraneous typecast
      printf("%lu ", i);

  }

  // C6.a. Character literals as integers
  // C12.a. Return value for void function
  return putchar(10);
}


/** Original **/
void test_all_bits(unsigned long *base, unsigned long nbits)
{
  unsigned long b;
  printf("Set bits: ");
  for (b = 0; b < nbits; b++)
  {
    if (bit_test(base, b) == 1)
      printf("%lu ", b);

  }

  printf("\n");
}




/*
 * Example 137
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 3957
 * Source: klamonte/qodem
 */

/** Decompiled **/
signed long long sanityCheck(_DWORD *a1)
{
  // C2.b. Missing statement - (assert statement)

  if ((a1[4] <= 7) || (a1[4] > 128)) // C1.a.ii. Array access to access struct members
    return 0LL;

  if ((a1[5] < 0) || (a1[5] > a1[4])) // C1.a.ii. Array access to access struct members
    return 0LL;

  if (a1[6] >= 0) // C1.a.ii. Array access to access struct members
    return 1LL;

  return 0LL;
}


/** Original **/
static BOOLEAN sanityCheck(const SCOREBOARD_INFO *scoreboardInfo)
{
  assert((scoreboardInfo != 0) && ((sizeof(SCOREBOARD_INFO)) > 0));
  if ((scoreboardInfo->noEntries < 8) || (scoreboardInfo->noEntries > 128))
    return 0;

  if ((scoreboardInfo->lastEntry < 0) || (scoreboardInfo->lastEntry > scoreboardInfo->noEntries))
    return 0;

  if (scoreboardInfo->uniqueID < 0)
    return 0;

  return !0;
}




/*
 * Example 138
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 4057
 * Source: klamonte/qodem
 */

/** Decompiled **/
signed long long exitErrorNotFound(long long a1, unsigned int a2)
{
  // C2.b. Missing statement

  signed long long result; // C5.a. Extraneous variable
  if ((a2 && (a2 <= 0x1B5D)) || ((a2 > 0x1F40) && (a2 <= 0x1F85)))  // C9.b. Expanded user-defined macros
    result = exitError(a1, a2, 3u, 0xFFFFFFD5); // C9.b. Expanded user-defined macros
  else
    // C2.b. Missing statement

    result = 4294967280LL; // C6.c. Very large positive integers for negative integers

  return result;
}


/** Original **/
static int exitErrorNotFound(USER_INFO *userInfoPtr, const CRYPT_ATTRIBUTE_TYPE errorLocus)
{
  assert((userInfoPtr != 0) && ((sizeof(USER_INFO)) > 0));
  if (!(((errorLocus > CRYPT_ATTRIBUTE_NONE) && (errorLocus < CRYPT_ATTRIBUTE_LAST)) || ((errorLocus > CRYPT_IATTRIBUTE_FIRST) && (errorLocus < CRYPT_IATTRIBUTE_LAST))))
  {
    assert(0);
    return -16;
  }

  ;
  return exitError(userInfoPtr, errorLocus, CRYPT_ERRTYPE_ATTR_ABSENT, -43);
}




/*
 * Example 139
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 5151
 * Source: JefferySchons/coms327
 */

/** Decompiled **/
int main(int argc, const char **argv, const char **envp) // C4.a.i. Extra arguments
{
  times_table(*((_QWORD *) (&argc)), argv, envp); // C4.a.i. Extra arguments
  return 0;
}


/** Original **/
int main(int argc, char *argv[])
{
  times_table();
  return 0;
}




/*
 * Example 140
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 8062
 * Source: AntoineAugusti/correcteur-orthographique
 */

/** Decompiled **/
long long ListeDeMot_longueur(long long a1, unsigned int a2) // C4.a.i. Extra argument, C13. Decomposition of a composite variable into multiple variables
{
  return a2;
}


/** Original **/
unsigned int ListeDeMot_longueur(ListeDeMot liste)
{
  return liste.longueur;
}




/*
 * Example 141
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 9516
 * Source: sonoro1234/mirror-im
 */

/** Decompiled **/
long long exif_mnote_data_unref(long long *a1)
{
  long long result; // C5.a. Extraneous variable
  if (a1)
  {
    result = *a1; // C1.a.iii. Pointer dereference to access first struct member, C2.a.i. Extra statement to initialize extraneous variable
    if (*a1) // C1.a.iii. Pointer dereference to access first struct member
    {
      if (*((_DWORD *) (*a1))) // C1.a.iii. Pointer dereference to access first struct member
        --(*((_DWORD *) (*a1)));  // C1.a.iii. Pointer dereference to access first struct member

      result = *((unsigned int *) (*a1)); // C1.a.iii. Pointer dereference to access first struct member
      if (!((_DWORD) result)) // C4. Nonequivalent expression - a struct pointer does not have the same truth value as that struct's first member
        result = exif_mnote_data_free((long long) a1); // C3.a. Extraneous typecast

    }

  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void exif_mnote_data_unref(ExifMnoteData *d)
{
  if ((!d) || (!d->priv))
    return;

  if (d->priv->ref_count > 0)
    d->priv->ref_count--;

  if (!d->priv->ref_count)
    exif_mnote_data_free(d);

}




/*
 * Example 142
 * File: idioms_data_copy/data_0025.pkl
 * Shard 25, Index 315
 * Source: dhmunro/yorick
 */

/** Decompiled **/
long long FreeTextStream(long long a1)
{
  // C5.b. Missing variable - ios

  long long v2;
  v2 = *((_QWORD *) (a1 + 16)); // C1.a.i. Pointer arithmetic to access struct members
  if (v2)
    p_fclose(v2);

  p_free(*((_QWORD *) (a1 + 24))); // C1.a.i. Pointer arithmetic to access struct members
  RemoveIOLink(yTextFiles, a1);
  return y_FreeUnit(&txtsBlock, a1); // C12.a. Return value for void function
}


/** Original **/
void FreeTextStream(void *ios)
{
  TextStream *io = ios;
  p_file *stream = io->stream;
  if (stream)
    p_fclose(stream);

  p_free(io->fullname);
  RemoveIOLink(yTextFiles, io);
  y_FreeUnit(&txtsBlock, io);
}




/*
 * Example 143
 * File: idioms_data_copy/data_0025.pkl
 * Shard 25, Index 1813
 * Source: lromeraj/escapist-game
 */

/** Decompiled **/
long long inventory_get_bag(long long *a1)
{
  long long result; // C5.a. Extraneous variable
  if (a1)
    result = *a1; // C1.a.iii. Pointer dereference to access first struct member
  else
    result = 0LL;

  return result;
}


/** Original **/
Set *inventory_get_bag(Inventory *inv)
{
  if (!inv)
    return 0;

  return inv->bag;
}




/*
 * Example 144
 * File: idioms_data_copy/data_0025.pkl
 * Shard 25, Index 2740
 * Source: NotYourRobot/ArmageddonRPI
 */

/** Decompiled **/
long long get_obj_encumberance(long long a1, long long a2)
{
  signed int v3;
  unsigned int v4; // C5.a. Extraneous variable
  v3 = (signed int) calc_object_weight(a1); // C3.a. Extraneous typecast
  if ((*((_QWORD *) (a2 + 584))) & 0x4000000LL) // C1.a.i. Pointer arithmetic to access struct members
    v3 /= 3;

  if (unk_2F912[3 * ((signed int) get_char_str(a2))]) // C4. Nonequivalent expression, C8. Issue in representing global variable
    v4 = (10 * v3) / unk_2F912[3 * ((signed int) get_char_str(a2))]; // C4. Nonequivalent expression, C8. Issue in representing global variable
  else
    v4 = 10 * v3;

  return v4;
}


/** Original **/
int get_obj_encumberance(OBJ_DATA *obj, CHAR_DATA *ch)
{
  int enc = 0;
  enc = calc_object_weight(obj);
  if (ch->specials.act & (1 << 26))
    enc /= 3;

  if (str_app[get_char_str(ch)].carry_w)
    enc = (10 * enc) / str_app[get_char_str(ch)].carry_w;
  else
    enc *= 10;

  return enc;
}




/*
 * Example 145
 * File: idioms_data_copy/data_0025.pkl
 * Shard 25, Index 7526
 * Source: wothke/webDS
 */

/** Decompiled **/
signed long long SNDStateInit(_QWORD *a1, int a2)
{
  signed long long result; // C5.a. Extraneous variable
  a1[796] = malloc(4LL * a2); // C1.a.ii. Array access to access struct members, C9.a. Expanded standard macro
  a1[797] = 0LL; // C1.a.ii. Array access to access struct members
  a1[798] = a2; // C1.a.ii. Array access to access struct members
  if (a1[796]) // C1.a.ii. Array access to access struct members, C7.d. Deconstructed ternary - (whole if-else statement)
    result = 0LL;
  else
    result = 0xFFFFFFFFLL;

  return result;
}


/** Original **/
static int SNDStateInit(NDS_state *state, int buffersize)
{
  state->sample_buffer = (s16 *) malloc((buffersize * (sizeof(s16))) * 2);
  state->sample_pointer = 0;
  state->sample_size = buffersize;
  return (state->sample_buffer == 0) ? (-1) : (0);
}




/*
 * Example 146
 * File: idioms_data_copy/data_0026.pkl
 * Shard 26, Index 1496
 * Source: panwangc/EECS-22L
 */

/** Decompiled **/
_QWORD *newMap()
{
  _QWORD *v0;
  _QWORD *v1; // C5.a.i. Extraneous intermediate variable duplicating another variable
  v0 = malloc(0x78uLL); // C9.a. Expanded standard macro
  v1 = v0; // C2.a.i. Extra statement to initialize extraneous variable
  v0[11] = 0LL; // C1.a.ii. Array access to access struct members
  v0[12] = 0LL; // C1.a.ii. Array access to access struct members
  v0[13] = newArray(104LL); // C1.a.ii.; C9.a. Expanded standard macros
  v1[14] = newArray(92LL); // C1.a.ii.; C9.a. Expanded standard macros
  return v1;
}


/** Original **/
Map *newMap()
{
  Map *map = malloc(sizeof(Map));
  map->rowNames = 0;
  map->colNames = 0;
  map->landmarks = newArray(sizeof(Landmark));
  map->stands = newArray(sizeof(TaxiStand));
  return map;
}




/*
 * Example 147
 * File: idioms_data_copy/data_0026.pkl
 * Shard 26, Index 9275
 * Source: z4yx/SimpleRecorder
 */

/** Decompiled **/
signed long long mk_write_float(long long a1, int a2, float a3)
{
  if (((signed int) mk_write_id(a1, a2)) < 0)
    return 0xFFFFFFFFLL;

  if (((signed int) mk_write_size(a1, 4u)) < 0)
    return 0xFFFFFFFFLL;

  if (((signed int) mk_write_float_raw(a1, COERCE_FLOAT(_mm_cvtsi32_si128(LODWORD(a3))))) >= 0) // C10. Use of decompiler-specific macros
    return 0LL;

  return 0xFFFFFFFFLL;
}


/** Original **/
static int mk_write_float(mk_context *c, unsigned id, float f)
{
  do
  {
    if (mk_write_id(c, id) < 0)
      return -1;

  }
  while (0);
  do
  {
    if (mk_write_size(c, 4) < 0)
      return -1;

  }
  while (0);
  do
  {
    if (mk_write_float_raw(c, f) < 0)
      return -1;

  }
  while (0);
  return 0;
}




/*
 * Example 148
 * File: idioms_data_copy/data_0026.pkl
 * Shard 26, Index 9966
 * Source: h3poteto/sagisame
 */

/** Decompiled **/
long long battle_calc_drain_value(int a1, int a2, unsigned int a3)
{
  int v4; // C5.a. Extraneous variable
  unsigned int v5; // C5.a.i. Extraneous intermediate variable duplicating another variable
  unsigned int v6;
  v5 = a3; // C2.a.i. Extra statement to initialize extraneous variable
  v6 = 0;
  if ((a1 <= 0) || (a2 <= 0))
    return 0LL;

  if (a3)
  {
    v4 = rand();
    if (a2 > (((rand() >> 8) ^ v4) % 100))
      v6 = v5;

  }

  return v6;
}


/** Original **/
static int battle_calc_drain_value(int damage, int rate, int value)
{
  int diff = 0;
  if ((damage <= 0) || (rate <= 0))
    return 0;

  if (value && (((rand() ^ (rand() >> 8)) % 100) < rate))
  {
    diff = value;
  }

  return diff;
}




/*
 * Example 149
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 215
 * Source: 2ndcouteau/lem_in
 */

/** Decompiled **/
long long ft_free_tab(void **a1)
{
  int v2;
  v2 = 0;
  if (a1)
  {
    while (a1[v2])
    {
      free(a1[v2]);
      a1[v2++] = 0LL;
    }

    free(a1);
  }

  return 0LL;
}


/** Original **/
char **ft_free_tab(char **mytab)
{
  int i;
  i = 0;
  if (mytab != 0)
  {
    while (mytab[i] != 0)
    {
      free(mytab[i]);
      mytab[i] = 0;
      i++;
    }

    free(mytab);
  }

  return 0;
}




/*
 * Example 150
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 1175
 * Source: majstar/RevisedSDCCLinker-n
 */

/** Decompiled **/
int File_writeHex(long long *a1, long long a2, unsigned char a3)
{
  int result; // Not extraneous - aligns with the variable 'precondition'
  unsigned char v4; // C5.a.i. Extraneous intermediate variable duplicating another variable
  long long v5;
  v4 = a3; // C2.a.i. Extra statement to initialize extraneous variable
  v5 = *a1;
  result = File__checkValidityPRE(*a1, (long long) "File_writeHex"); // C3.a. Extraneous typecast
  if (result)
    result = fprintf(*((FILE **) (v5 + 8)), "%.*x", v4, a2); // C1.a.i. Pointer arithmetic to access struct members

  return result; // C12.a. Return value for void function
}


/** Original **/
void File_writeHex(File_Type *file, UINT32 value, UINT8 digitCount)
{
  char *procName = "File_writeHex";
  File_Type currentFile = *file;
  Boolean precondition = File__checkValidityPRE(currentFile, procName);
  if (precondition)
  {
    fprintf(currentFile->filePointer, "%.*x", digitCount, value);
  }

}




/*
 * Example 151
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 3036
 * Source: St4rk/snsPlayer
 */

/** Decompiled **/
long long rol_a()
{
  long long result; // C5.a. Extraneous variable
  if (P & 1)
  {
    if (A >= 0)
      P &= 0xFEu;
    else
      P |= 1u;

    A = (2 * A) | 1;
  }
  else
  {
    if (A >= 0)
      P &= 0xFEu;
    else
      P |= 1u;

    A *= 2;
  }

  if (A)
    P &= 0xFDu;
  else
    P |= 2u;

  if (A >= 0)
    P &= 0x7Fu;
  else
    P |= 0x80u;

  result = (unsigned int) (tick_count + 2); // C2.a.i. Extra statement to initialize extraneous variable
  tick_count += 2;
  return result; // C12.a. Return value for void function
}


/** Original **/
void rol_a()
{
  if (P & 0x1)
  {
    if (A & 0x80)
    {
      P |= 0x1;
    }
    else
    {
      P &= ~0x1;
    }

    A = (A << 1) | 0x1;
  }
  else
  {
    if (A & 0x80)
    {
      P |= 0x1;
    }
    else
    {
      P &= ~0x1;
    }

    A <<= 1;
  }

  if (A)
  {
    P &= ~0x2;
  }
  else
  {
    P |= 0x2;
  }

  if (A & 0x80)
  {
    P |= 0x80;
  }
  else
  {
    P &= ~0x80;
  }

  tick_count += 2;
}




/*
 * Example 152
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 6751
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
signed long long opASRf_B_AA(long long a1, long long a2, long long a3, long long a4, long long a5, long long a6) // C4.a.i. Extra arguments
{
  logerror((long long) "UNFINISHED: %s\n", (long long) "opASRf 2\n", a3, a4, a5, a6); // C4.a.i. Extra arguments, C3.a. Extraneous typecast
  return 1LL; // C9.b. Expanded user-defined macro
}


/** Original **/
CINESTATE opASRf_B_AA(int opcode)
{
  {
    logerror("UNFINISHED: %s\n", "opASRf 2\n");
  }
  ;
  return state_AA;
}




/*
 * Example 153
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 6984
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
int *d4_mm(double a1) // C4.a.i. Extra argument
{
  int v2;
  // C2.b. Missing code - should assign to a variable
  // C3.a. Extraneous typecast
  // C8. Issue is representing global variable - instance of C13
  // C13. Decomposition of a composite variable into multiple variables
  dau_read_pi_double_1st(((unsigned int) dword_9368) >> 14, 1);

  // C2.b. Missing code - should assign to a variable
  // C3.a. Extraneous typecast
  // C4.a.ii. Missing argument
  // C8. Issue in representing global variable - instance of C13
  // C13. Decomposition of a composite variable into multiple variables
  dau_read_pi_double_2nd(((unsigned int) dword_9368) >> 7, 0);
  // C5.b. Missing variable - res

  v2 = dword_9368 & 0x7F; // C8. Global variable issues, C13. Decomposition of a composite variable into multiple variables
  if (v2 != 7)
    dau_write_pi_double(v2, a1); // C4. Nonequivalent expression - uses the wrong variable a1 (should be the return value of the second function call above).

  // C12.a. Return value for void function
  // C4. Nonequivalent expressions - (-a1) - a1 should be the return values of the function calls above, not a1.
  // C3.a. Extraneous typecast
  return dau_set_val_flags((((unsigned int) dword_9368) >> 21) & 3, (-a1) - a1);
}


/** Original **/
static void d4_mm(void)
{
  double xval = dau_read_pi_double_1st(dsp32.op >> 14, 1);
  double yval = dau_read_pi_double_2nd(dsp32.op >> 7, 0, xval);
  double res = (-yval) - xval;
  int zpi = (dsp32.op >> 0) & 0x7f;
  if (zpi != 7)
    dau_write_pi_double(zpi, yval);

  dau_set_val_flags((dsp32.op >> 21) & 3, res);
}




/*
 * Example 154
 * File: idioms_data_copy/data_0028.pkl
 * Shard 28, Index 2752
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
void nop_reg()
{
  ;
}


/** Original **/
static void nop_reg(void)
{
}




/*
 * Example 155
 * File: idioms_data_copy/data_0028.pkl
 * Shard 28, Index 5729
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
long long fd_16()
{
  illegal_1();
  return op_16(); // C12.a. Return value for void function
}


/** Original **/
inline static void fd_16(void)
{
  illegal_1();
  op_16();
}




/*
 * Example 156
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 720
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
signed long long s2650_data_r() // C4.a.iii. Unused missing argument
{
  usrintf_showmessage("S2650 data port read");
  return 0xFFFFFFFFLL;
}


/** Original **/
static data8_t s2650_data_r(offs_t offset)
{
  usrintf_showmessage("S2650 data port read");
  return 0xff;
}




/*
 * Example 157
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 2624
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
long long io32_r() // C4.a.iii. Unused missing arguments
{
  unsigned int v0; // C5.a. Extraneous variable
  v0 = ((unsigned int) readinputport(0LL)) << 16; // C3.a. Extraneous typecasts
  return v0 | ((unsigned int) readinputport(1LL)); // C3.a. Extraneous typecasts
}


/** Original **/
static data32_t io32_r(offs_t offset, data32_t mem_mask)
{
  return (readinputport(0) << 16) | (readinputport(1) << 0);
}




/*
 * Example 158
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 2939
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
signed long long esb_setopbase(unsigned int a1)
{
  signed long long result; // C5.a. Extraneous variable
  int v2;
  v2 = activecpu_get_reg(0xFFFFFFFFLL); // C9.b. Expanded user-defined macros
  if ((a1 & 0xE000) == 0x8000)
  {
    esb_slapstic_r(a1 & 0x1FFF);
    opcode_entry = -1;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ((((((v2 & 0xE000) == 0x8000) && (v2 != 32896)) && (v2 != 32912)) && (v2 != 32928)) && (v2 != 32944))
      esb_slapstic_r(v2 & 0x1FFF);

    result = a1; // C2.a.i. Extra statement to initialize extraneous variable
  }

  return result;
}


/** Original **/
offs_t esb_setopbase(offs_t address)
{
  int prevpc = activecpu_get_reg(REG_PREVIOUSPC);
  if ((address & 0xe000) == 0x8000)
  {
    esb_slapstic_r(address & 0x1fff);
    opcode_entry = 0xff;
    return -1;
  }
  else
    if ((prevpc & 0xe000) == 0x8000)
  {
    if ((((prevpc != 0x8080) && (prevpc != 0x8090)) && (prevpc != 0x80a0)) && (prevpc != 0x80b0))
      esb_slapstic_r(prevpc & 0x1fff);

  }


  return address;
}




/*
 * Example 159
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 6099
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
long long namcos2_sound_bankselect_w(long long a1, unsigned char a2)
{
  long long v2;
  long long result; // C5.a. Extraneous variable
  unsigned int v4; // C5.a. Extraneous variable
  v2 = memory_region(131LL); // C9.b. Expanded user-defined macro
  // C5.b. Missing variable: max
  // Not coding the missing if ((6 >= 1) && (6 <= (25 - 1))) because it does not add any functionality to this function.

  // Not coding C3.a. here - the typecasts are necessary as part of the inlining, and do reflect the types of the variables involved in the original two expressions.
  cpu_bankbase[6] = v2 + ((signed int) ((((a2 >> 4) % (((unsigned long long) (memory_region_length(131LL) - 0x10000)) >> 14)) + 4) << 14)); // C1.b. Non-idiomatic array dereference, C9.b. Expanded user-defined macro.
  result = opcode_entry;
  if (opcode_entry == 6)
  {
    result = cpu_getactivecpu();
    if (((signed int) result) >= 0) // C3.a. Extraneous typecast
    {
      opcode_entry = -1;
      v4 = activecpu_get_pc_byte();
      result = activecpu_set_op_base(v4);
    }

  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void namcos2_sound_bankselect_w(offs_t offset, data8_t data)
{
  unsigned char *RAM = memory_region(REGION_CPU3);
  unsigned long max = (memory_region_length(REGION_CPU3) - 0x10000) / 0x4000;
  int bank = (data >> 4) % max;
  do
  {
    if ((6 >= 1) && (6 <= (25 - 1)))
    {
      cpu_bankbase[6] = (UINT8 *) (&RAM[0x10000 + (0x4000 * bank)]);
      if ((opcode_entry == 6) && (cpu_getactivecpu() >= 0))
      {
        opcode_entry = 0xff;
        activecpu_set_op_base(activecpu_get_pc_byte());
      }

    }

  }
  while (0);
}




/*
 * Example 160
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 6626
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
long long toypop_sound_clear_w() // C4.a.iii. Missing unused arguments
{
  return cpunum_set_reset_line(1LL, 0LL); // C9.b. Expanded user-defined macros, C12.a. Return value for void function
}


/** Original **/
void toypop_sound_clear_w(offs_t offset, data8_t data)
{
  cpunum_set_reset_line(1, CLEAR_LINE);
}




/*
 * Example 161
 * File: idioms_data_copy/data_0030.pkl
 * Shard 30, Index 196
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
_WORD *kaneko16_layers_1_regs_w(unsigned int a1, short a2, short a3)
{
  _WORD *result; // C5.a. Extraneous variable
  result = (_WORD *) ((2LL * a1) + kaneko16_layers_1_regs); // C1.b.ii. Pointer arithmetic to access array members
  *result = ((~a3) & a2) | (a3 & (*result));
  return result; // C12.a. Return value for void function
}


/** Original **/
void kaneko16_layers_1_regs_w(offs_t offset, data16_t data, data16_t mem_mask)
{
  *(&kaneko16_layers_1_regs[offset]) = ((*(&kaneko16_layers_1_regs[offset])) & mem_mask) | (data & (~mem_mask));
}




/*
 * Example 162
 * File: idioms_data_copy/data_0030.pkl
 * Shard 30, Index 929
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
signed long long video_start_msisaac()
{
  background = tilemap_create(get_bg_tile_info, &tilemap_scan_rows, 0LL, 8LL, 8LL, 32LL, 32LL); // C4.c. Extra & when accessing global variables
  background2 = tilemap_create(get_bg2_tile_info, &tilemap_scan_rows, 1LL, 8LL, 8LL, 32LL, 32LL); // C4.c. Extra & when accessing global variables
  foreground = tilemap_create(get_fg_tile_info, &tilemap_scan_rows, 1LL, 8LL, 8LL, 32LL, 32LL); // C4.c. Extra & when accessing global variables
  if ((!background) || (!foreground))
    return 1LL;

  tilemap_set_transparent_pen(background2, 0LL);
  tilemap_set_transparent_pen(foreground, 0LL);
  return 0LL;
}


/** Original **/
int video_start_msisaac(void)
{
  background = tilemap_create(get_bg_tile_info, tilemap_scan_rows, 0x00, 8, 8, 32, 32);
  background2 = tilemap_create(get_bg2_tile_info, tilemap_scan_rows, 0x01, 8, 8, 32, 32);
  foreground = tilemap_create(get_fg_tile_info, tilemap_scan_rows, 0x01, 8, 8, 32, 32);
  if ((!background) || (!foreground))
    return 1;

  tilemap_set_transparent_pen(background2, 0);
  tilemap_set_transparent_pen(foreground, 0);
  return 0;
}




/*
 * Example 163
 * File: idioms_data_copy/data_0030.pkl
 * Shard 30, Index 2163
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
long long skns_tilemapA_w(unsigned int a1, int a2, int a3)
{
  *((_DWORD *) ((4LL * a1) + skns_tilemapA_ram)) = (a3 & (*((_DWORD *) ((4LL * a1) + skns_tilemapA_ram)))) | (a2 & (~a3)); // C1.b.ii. Pointer arithmetic to access array members
  return tilemap_mark_tile_dirty(skns_tilemap_A, a1); // C12.a. Return value for void function
}


/** Original **/
void skns_tilemapA_w(offs_t offset, data32_t data, data32_t mem_mask)
{
  *(&skns_tilemapA_ram[offset]) = ((*(&skns_tilemapA_ram[offset])) & mem_mask) | (data & (~mem_mask));
  tilemap_mark_tile_dirty(skns_tilemap_A, offset);
}




/*
 * Example 164
 * File: idioms_data_copy/data_0030.pkl
 * Shard 30, Index 2824
 * Source: libretro/mame2003-libretro
 */

/** Decompiled **/
long long ttmahjng_sharedram_r(unsigned int a1)
{
  return *((unsigned char *) (ttmahjng_sharedram + a1)); // C1.b.ii. Pointer arithmetic to access array members
}


/** Original **/
data8_t ttmahjng_sharedram_r(offs_t offset)
{
  return ttmahjng_sharedram[offset];
}




/*
 * Example 165
 * File: idioms_data_copy/data_0030.pkl
 * Shard 30, Index 3659
 * Source: stefanludlow/Argila
 */

/** Decompiled **/
_BOOL8 resisted(long long a1, _DWORD *a2) // C4.a.iii. Unused missing arguments
{
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  // C1.a.ii. Array access to access struct members
  return ((signed int) ((((((unsigned long long) number(1LL, 20LL)) + (*((_DWORD *) (a1 + 20)))) - a2[5]) + (*((_DWORD *) (a1 + 152)))) - a2[38])) > a2[45];
}


/** Original **/
int resisted(CHAR_DATA *ch, CHAR_DATA *enemy, int spell)
{
  if (((number(1, 20) + (ch->circle - enemy->circle)) + (ch->wil - enemy->wil)) <= enemy->tmp_wil)
    return 0;

  return 1;
}




/*
 * Example 166
 * File: idioms_data_copy/data_0030.pkl
 * Shard 30, Index 5794
 * Source: orangeduck/Corange
 */

/** Decompiled **/
long long ui_listbox_clear(long long a1)
{
  long long result; // C5.a. Extraneous variable
  int i;
  for (i = 0; i < (*((_DWORD *) (a1 + 12))); ++i) // C1.a.i. Pointer arithmetic to access struct members
    ui_text_delete(*((_QWORD *) ((8LL * i) + (*((_QWORD *) (a1 + 16)))))); // C1.a.i.; C1.b.ii. Pointer arithmetic to access array members

  free(*((void **) (a1 + 16))); // C1.a.i. Pointer arithmetic to access struct members
  *((_DWORD *) (a1 + 12)) = 0; // C1.a.i. Pointer arithmetic to access struct members
  result = a1; // C2.a.i. Extra statement to initialize extraneous variable
  *((_QWORD *) (a1 + 16)) = 0LL; // C1.a.i. Pointer arithmetic to access struct members
  return result; // C12.a. Return value for void function
}


/** Original **/
void ui_listbox_clear(ui_listbox *lb)
{
  for (int i = 0; i < lb->num_items; i++)
  {
    ui_text_delete(lb->items[i]);
  }

  free(lb->items);
  lb->num_items = 0;
  lb->items = 0;
}




/*
 * Example 167
 * File: idioms_data_copy/data_0030.pkl
 * Shard 30, Index 6027
 * Source: raynebc/editor-on-fire
 */

/** Decompiled **/
void aalg_shutdown()
{
  ;
}


/** Original **/
void aalg_shutdown(void)
{
}




/*
 * Example 168
 * File: idioms_data_copy/data_0031.pkl
 * Shard 31, Index 3155
 * Source: niksaak/aie
 */

/** Decompiled **/
signed long long aie_nextfib(long long a1)
{
  long long v2;
  signed int v3;
  v3 = 0;
  while (++v3)
  {
    v2 = aie_fib_localalias(v3); // C4. Nonequivalent experssions. aie_fib != aie_fib_localalias, and aie_fib is not a macro.
    if (v2 > a1)
      return v2;

  }

  return -1LL;
}


/** Original **/
long aie_nextfib(long n)
{
  int i = 0;
  while (++i)
  {
    long f = aie_fib(i);
    if (f > n)
      return f;

  }

  return -1;
}




/*
 * Example 169
 * File: idioms_data_copy/data_0031.pkl
 * Shard 31, Index 8038
 * Source: sparckix/FileSystem
 */

/** Decompiled **/
signed long long extraer_camino(_BYTE *a1, long long a2, char *a3)
{
  signed int i;
  if (((*a1) != 47) || (!a1[1])) // C6.a. Character literals as integers
    return 0xFFFFFFFFLL;

  for (i = 1; (a1[i] != 47) && a1[i]; ++i) // C6.a. Character literals as integers
    *((_BYTE *) ((i - 1LL) + a2)) = a1[i]; // C1.b.ii. Pointer arithmetic to access array members

  *((_BYTE *) ((i - 1LL) + a2)) = 0; // C1.b.ii. Pointer arithmetic to access array members, C6.a. Character literals as integers
  strcpy(a3, &a1[i]);
  return a1[i] == 47; // C6.a. Character literals as integers
}


/** Original **/
int extraer_camino(const char *camino, char *inicial, char *final)
{
  int i;
  int longitud;
  int cont;
  if ((camino[0] != '/') || (camino[1] == '\0'))
    return -1;

  for (i = 1; (camino[i] != '/') && (camino[i] != '\0'); i++)
    inicial[i - 1] = camino[i];

  inicial[i - 1] = '\0';
  (void) strcpy(final, camino + i);
  if (camino[i] == '/')
  {
    return 1;
  }
  else
  {
    return 0;
  }

}




/*
 * Example 170
 * File: idioms_data_copy/data_0031.pkl
 * Shard 31, Index 8498
 * Source: VioletHill/Tinix
 */

/** Decompiled **/
void task_tty()
{
  char *i;
  char *j; // C5.a. Extraneous variable - (the variable i is reused in the original function in the second for loop)
  init_keyboard();
  // C3.a. Extraneous typecast
  // C4.c. Extra & when accessing global variables
  // C4. Nonequivalent expressions - Loop max is 8448, which is not equivalent to tty_table + 4
  for (i = (char *) (&tty_table); ((unsigned long long) i) < 0x2100; i += 1576)
    init_tty(i);

  select_console(0LL);
  while (1)
  {
    // C3.a. Extraneous typecast
    // C4.c. Extra & when accessing global variables
    // C4. Nonequivalent expressions - Loop max is 8448, which is not equivalent to tty_table + 4
    for (j = (char *) (&tty_table); ((unsigned long long) j) < 0x2100; j += 1576)
    {
      tty_do_read(j);
      tty_do_write(j);
    }

  }

}


/** Original **/
void task_tty()
{
  TTY *p_tty;
  init_keyboard();
  for (p_tty = tty_table; p_tty < (tty_table + 4); p_tty++)
  {
    init_tty(p_tty);
  }

  select_console(0);
  while (1)
  {
    for (p_tty = tty_table; p_tty < (tty_table + 4); p_tty++)
    {
      tty_do_read(p_tty);
      tty_do_write(p_tty);
    }

  }

}




/*
 * Example 171
 * File: idioms_data_copy/data_0031.pkl
 * Shard 31, Index 9254
 * Source: HugoTian/SimpleScalar
 */

/** Decompiled **/
int main(int argc, const char **argv, const char **envp) // C4.a.iii. Unused missing arguments
{
  const char *v3; // C5.a. Extraneous variable
  const char *v4; // C5.a. Extraneous variable
  if (argc != 2)
    usage(argc, argv); // C4.a.i. Extra arguments

  v3 = argv[1];
  if (!strcmp(v3, "-7"))
  {
    to7bit(v3, "-7"); // C4.a.i. Extra arguments
  }
  else
  {
    v4 = argv[1];
    if (strcmp(v4, "-8"))
      usage(v4, "-8"); // C4.a.i. Extra arguments, C4.b. Equivalence depends on behavior of external code - control flow is only equivalent if 'usage' terminates the program

    to8bit(v4, "-8"); // C4.a.i. Extra arguments
  }

  return 0;
}


/** Original **/
int main(argc, argv)
int argc;
char *argv[];
{
  if (argc != 2)
    usage();

  if (strcmp(argv[1], "-7") == 0)
    to7bit();
  else
    if (strcmp(argv[1], "-8") == 0)
    to8bit();
  else
    usage();


  return 0;
}




/*
 * Example 172
 * File: idioms_data_copy/data_0031.pkl
 * Shard 31, Index 9579
 * Source: toyandong/Nirvana
 */

/** Decompiled **/
long long xen_pif_set_mac(long long a1, long long a2, long long a3)
{
  // C13. Decomposition of a composite variable into multiple variables (next four lines; next eight including initialization)
  _QWORD *v4;
  long long v5;
  _QWORD *v6;
  long long v7;
  v4 = abstract_type_string; // C4. Nonequivalent expression - missing & on abstract_type_string
  v5 = a2;
  v6 = abstract_type_string; // C4. Nonequivalent expression - missing & on abstract_type_string
  v7 = a3;
  xen_call_(a1, "PIF.set_MAC", &v4, 2LL, 0LL, 0LL); // C11. Abuse of memory layout - using scalar variable as if it is a composite variable in function call
  return *((unsigned char *) (a1 + 24)); // C1.a.i. Pointer arithmetic to access struct members
}


/** Original **/
bool xen_pif_set_mac(xen_session *session, xen_pif pif, char *mac)
{
  abstract_value param_values[] = {{.type = &abstract_type_string, .u.string_val = pif}, {.type = &abstract_type_string, .u.string_val = mac}};
  xen_call_(session, "PIF.set_MAC", param_values, 2, 0, 0);
  return session->ok;
}




/*
 * Example 173
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 1264
 * Source: kippandrew/winbolo
 */

/** Decompiled **/
long long bdVersion()
{
  return mpVersion();
}


/** Original **/
int bdVersion(void)
{
  return mpVersion();
}




/*
 * Example 174
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 1959
 * Source: sirjofri/9pexec
 */

/** Decompiled **/
long long srv_stop()
{
  // C5.b. Missing variable - n (though in this case it seems perfectly fine).

  if (close(newsockfd) < 0)
    error("Error closing socket");
  
  if (close(sockfd) < 0)
    error("Error closing socket");

  return 0LL;
}


/** Original **/
unsigned int srv_stop()
{
  int n = close(newsockfd);
  if (n < 0)
    error("Error closing socket");

  n = close(sockfd);
  if (n < 0)
    error("Error closing socket");

  return 0;
}




/*
 * Example 175
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 2082
 * Source: lgblgblgb/reCPM
 */

/** Decompiled **/
long long op_0x0d()
{
  char v0; // C5.a. Extraneous variable
  signed int v1; // C5.a. Extraneous variable
  long long result; // C5.a. Extraneous variable
  if ((*((_BYTE *) ((&z80ex) + 1))) & 0xF) // C1.a.i. Pointer arithmetic to access struct members, C7.d. Deconstructed ternary (whole if-else statement)
    v0 = 0;
  else
    v0 = 16;

  LOBYTE(z80ex) = ((z80ex & 1) | v0) | 2; // C1.a.i., C10.a. Bitwise operators used with decompiler-specific macros
  if ((--(*(((_BYTE *) (&z80ex)) + 2))) == 127) // C1.a.i. Pointer arithmetic to access struct members, C7.d. Deconstructed ternary (whole if-else statement)
    v1 = 4;
  else
    v1 = 0;

  result = (((unsigned char) z80ex) | v1) | ((unsigned int) ((unsigned char) sz53_table[*(((unsigned char *) (&z80ex)) + 2)])); // C1.a.i., C2.a.i. Extra statement to initialize extraneous variable
  LOBYTE(z80ex) = (z80ex | v1) | sz53_table[*(((unsigned char *) (&z80ex)) + 2)]; // C1.a.i., C10.a. Bitwise operators used with decompiler-specific macros
  *(((_QWORD *) (&z80ex)) + 6) = 4LL; // C1.a.i. Pointer arithmetic to access struct members
  *(((_BYTE *) (&z80ex)) + 56) = 4; // C1.a.i. Pointer arithmetic to access struct members
  return result; // C12.a. Return value for void function
}


/** Original **/
static void op_0x0d(void)
{
  {
    z80ex.af.b.l = ((z80ex.af.b.l & 0x01) | ((z80ex.bc.b.l & 0x0f) ? (0) : (0x10))) | 0x02;
    z80ex.bc.b.l--;
    z80ex.af.b.l |= ((z80ex.bc.b.l == 0x7f) ? (0x04) : (0)) | sz53_table[z80ex.bc.b.l];
  }
  ;
  {
    z80ex.tstate = 4;
    z80ex.op_tstate = 4;
  }
  ;
  return;
}




/*
 * Example 176
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 4278
 * Source: connorwstein/GINI_Cloud
 */

/** Decompiled **/
double *addRED(long long a1, double a2, double a3, double a4)
{
  double *result; // C5.a. Extraneous variable
  int v5;
  v5 = lookupQDisc(a1, "red");
  if (v5 < 0)
    v5 = (*((_DWORD *) (a1 + 4480)))++; // C1.a.i. Pointer arithmetic to access struct members

  // C1.a.i. Pointer arithmetic to access struct members 
  // C1.b.ii. Pointer arithmetic to access array members
  // C6.b. String literal as single integer
  // C7.c. Inline function definition instead of function call
  *((_DWORD *) ((280LL * v5) + a1)) = 6579570;
  *((double *) ((a1 + (280LL * v5)) + 264)) = a2; // C1.a.i, C1.b.ii.
  *((double *) ((a1 + (280LL * v5)) + 272)) = a3; // C1.a.i., C1.b.ii.
  result = (double *) ((a1 + (280LL * v5)) + 256); // C1.a.i., C1.b.ii., C2.a.i. Extra statement to initialize extraneous variable
  *result = a4; // C2.a.i. Extra statement to initialize extraneous variable
  return result; // C12.a. Return value for void function
}


/** Original **/
void addRED(qdisctable_t *qdiscs, double minl, double maxl, double pmax)
{
  int indx;
  if ((indx = lookupQDisc(qdiscs, "red")) < 0)
  {
    indx = qdiscs->qdiscnums;
    qdiscs->qdiscnums++;
  }

  strcpy(qdiscs->qentry[indx].name, "red");
  qdiscs->qentry[indx].minval = minl;
  qdiscs->qentry[indx].maxval = maxl;
  qdiscs->qentry[indx].pmaxval = pmax;
}




/*
 * Example 177
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 7652
 * Source: jmcnamara/libxlsxwriter
 */

/** Decompiled **/
long long _write_dc_creator(_QWORD *a1)
{
  long long result; // C5.a. Extraneous variable.
  if (*((_QWORD *) (a1[1] + 16LL))) // C1.a.i. Pointer arithmetic to access struct members, C1.a.ii. Array access to access struct members
    result = lxw_xml_data_element(*a1, "dc:creator", *((_QWORD *) (a1[1] + 16LL)), 0LL); // C1.a.i., C1.a.ii. C1.a.iii. Pointer dereference to access first struct member
  else
    result = lxw_xml_data_element(*a1, "dc:creator", &unk_8F9, 0LL); // C1.a.iii., C6.d. String replaced with reference to undeclared or global variable

  return result; // C12.a. Return value for void function
}


/** Original **/
static void _write_dc_creator(lxw_core *self)
{
  if (self->properties->author)
  {
    lxw_xml_data_element(self->file, "dc:creator", self->properties->author, 0);
  }
  else
  {
    lxw_xml_data_element(self->file, "dc:creator", "", 0);
  }

}




/*
 * Example 178
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 7762
 * Source: jmcnamara/libxlsxwriter
 */

/** Decompiled **/
long long worksheet_select(long long a1)
{
  long long result; // C5.a. Extraneous variable
  *((_BYTE *) (a1 + 133)) = 1; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macros
  result = a1; // C2.a.i. Extra statement to initialize extraneous variable
  *((_BYTE *) (a1 + 134)) = 0; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macros
  return result; // C12.a. Return value for void function
}


/** Original **/
void worksheet_select(lxw_worksheet *self)
{
  self->selected = LXW_TRUE;
  self->hidden = LXW_FALSE;
}




/*
 * Example 179
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 7915
 * Source: eressea/server
 */

/** Decompiled **/
long long strtolh(const char *a1, int a2)
{
  char *endptr;
  long long v4;
  if (!a1) // C9.a. Expanded standard macros (this and next line)
    _assert_fail("nptr", "strutil.c", 0xDu, "strtolh");

  v4 = strtol(a1, &endptr, a2);
  if (*endptr)
  {
    switch (*endptr)
    {
      case 107: // C6.a. Character literals as integers
        v4 *= 1000LL;
        break;

      case 109: // C6.a. Character literals as integers
        v4 *= 1000000LL;
        break;

      case 103: // C6.a. Character literals as integers
        v4 *= 1000000000LL;
        break;

      default:
        switch (*endptr)
      {
        case 75: // C6.a. Character literals as integers
          v4 <<= 10;
          break;

        case 77: // C6.a. Character literals as integers
          v4 <<= 20;
          break;

        case 103: // C6.a. Character literals as integers
          v4 <<= 30;
          break;

      }

        break;

    }

  }

  return v4;
}


/** Original **/
long strtolh(const char *nptr, int base)
{
  char *end;
  long result;
  assert(nptr);
  result = strtol(nptr, &end, base);
  if (*end)
  {
    if ((*end) == 'k')
      result *= 1000;
    else
      if ((*end) == 'm')
      result *= 1000000;
    else
      if ((*end) == 'g')
      result *= 1000000000;
    else
      if ((*end) == 'K')
      result *= 0x400;
    else
      if ((*end) == 'M')
      result *= 0x100000;
    else
      if ((*end) == 'g')
      result *= 0x40000000;






  }

  return result;
}




/*
 * Example 180
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 8010
 * Source: webispy/mulberry
 */

/** Decompiled **/
long long coap_get_payload(long long a1, _QWORD *a2)
{
  // C5.b. Missing variable - coap_pkt (though the lack of extra variable does not seem to affect readability here.)

  long long result; // C5.a. Extraneous variable
  if (*((_QWORD *) (a1 + 240))) // C1.a.i. Pointer arithmetic to access struct members
  {
    *a2 = *((_QWORD *) (a1 + 240)); // C1.a.i. Pointer arithmetic to access struct members
    result = *((unsigned int *) (a1 + 236)); // C1.a.i. Pointer arithmetic to access struct members
  }
  else
  {
    *a2 = 0LL;
    result = 0LL;
  }

  return result;
}


/** Original **/
int coap_get_payload(void *packet, const uint8_t **payload)
{
  coap_packet_t * const coap_pkt = (coap_packet_t *) packet;
  if (coap_pkt->payload)
  {
    *payload = coap_pkt->payload;
    return coap_pkt->payload_len;
  }
  else
  {
    *payload = 0;
    return 0;
  }

}




/*
 * Example 181
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 9917
 * Source: ddag/mylib
 */

/** Decompiled **/
long long last_insert_rowid(long long a1) // C4.a.iii. Unused missing arguments
{
  long long v1;
  unsigned int v2; // C5.a. Extraneous variable 
  v1 = sqlite_user_data(a1);
  v2 = sqlite_last_insert_rowid(v1);
  return sqlite_set_result_int(a1, v2); // C12.a. Return value for void function
}


/** Original **/
static void last_insert_rowid(sqlite_func *context, int arg, const char **argv)
{
  sqlite *db = sqlite_user_data(context);
  sqlite_set_result_int(context, sqlite_last_insert_rowid(db));
}




/*
 * Example 182
 * File: idioms_data_copy/data_0033.pkl
 * Shard 33, Index 583
 * Source: Neopallium/nixio
 */

/** Decompiled **/
signed long long nixio_bit_shr(long long a1)
{
  double v1;
  unsigned long long v2; // C5.a. Extraneous variable
  double v3; // C5.a. Extraneous variable
  unsigned long long v5; // C5.a. Extraneous variable.
  v1 = luaL_checknumber(a1, 1LL);
  if (v1 >= 9.223372036854776e18) // C2.a. Extraneous statement (whole if-else statement)
    v5 = ((unsigned int) ((signed int) (v1 - 9.223372036854776e18))) ^ 0x8000000000000000LL;
  else
    v5 = (unsigned int) ((signed int) v1);

  v2 = v5 >> luaL_checkinteger(a1, 2LL);
  if ((v2 & 0x8000000000000000LL) != 0LL) // C2.a. Extraneous statement (whole if-else statement)
    v3 = ((double) ((signed int) ((v2 & 1) | (v2 >> 1)))) + ((double) ((signed int) ((v2 & 1) | (v2 >> 1))));
  else
    v3 = (double) ((signed int) v2);

  lua_pushnumber(a1, v3);
  return 1LL;
}


/** Original **/
static int nixio_bit_shr(lua_State *L)
{
  uint64_t oper = luaL_checknumber(L, 1);
  lua_pushnumber(L, oper >> luaL_checkinteger(L, 2));
  return 1;
}




/*
 * Example 183
 * File: idioms_data_copy/data_0033.pkl
 * Shard 33, Index 1808
 * Source: infoburp/splittorrent
 */

/** Decompiled **/
long long bts_create_filestream_fp(long long a1, int a2)
{
  long long result; // -- aligns with bts
  result = btcalloc(1LL, 56LL); // C9.a. Expanded standard macro
  *((_DWORD *) result) = 1; // C1.a.i. Pointer arithmetic to access struct members
  *((_DWORD *) (result + 4)) = a2; // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (result + 8)) = bts_filestream_read; // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (result + 16)) = bts_filestream_write; // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (result + 24)) = bts_filestream_peek; // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (result + 40)) = bts_filestream_destroy; // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (result + 32)) = bts_filestream_rewind; // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (result + 48)) = a1; // C1.a.i. Pointer arithmetic to access struct members
  return result; // C11. Abuse of memory layout - relies on bts being the first member of the bts struct.
}


/** Original **/
btStream *bts_create_filestream_fp(FILE *fp, btsIo iodir)
{
  btFileStream *bts = btcalloc(1, sizeof(btFileStream));
  bts->bts.type = 1;
  bts->bts.iodir = iodir;
  bts->bts.read = bts_filestream_read;
  bts->bts.write = bts_filestream_write;
  bts->bts.peek = bts_filestream_peek;
  bts->bts.destroy = bts_filestream_destroy;
  bts->bts.rewind = bts_filestream_rewind;
  bts->fp = fp;
  return &bts->bts;
}




/*
 * Example 184
 * File: idioms_data_copy/data_0033.pkl
 * Shard 33, Index 3694
 * Source: wintonliuwen/libuyan
 */

/** Decompiled **/
_BOOL8 is_digit(signed int a1)
{
  return (a1 > 47) && (a1 <= 57); // C6.a. Character literals as integers
}


/** Original **/
int is_digit(const int ch)
{
  return (ch >= '0') && (ch <= '9');
}




/*
 * Example 185
 * File: idioms_data_copy/data_0033.pkl
 * Shard 33, Index 4046
 * Source: oracle/python-cx_Oracle
 */

/** Decompiled **/
long long dpiDeqOptions_setMode(long long a1, int a2)
{
  int v3; // C5.a.i. Extraneous intermediate variable duplicating another variable.
  long long v4; // C5.a.i. Extraneous intermediate variable duplicating another variable.
  v4 = a1; // C2.a.i. Extra statement to initialize extraneous variable
  v3 = a2; // C2.a.i. Extra statement to initialize extraneous variable
  // C9.a. Expanded standard macros
  // C3.a. Extraneous typecasts
  return dpiDeqOptions__setAttrValue(a1, 0x33u, (long long) "dpiDeqOptions_setMode", (long long) (&v3), 0);
}


/** Original **/
int dpiDeqOptions_setMode(dpiDeqOptions *options, dpiDeqMode value)
{
  return dpiDeqOptions__setAttrValue(options, 51, __func__, &value, 0);
}




/*
 * Example 186
 * File: idioms_data_copy/data_0033.pkl
 * Shard 33, Index 6893
 * Source: zhoubug/znet
 */

/** Decompiled **/
void *start_threads(void *a1, double a2) // C4.a.i. Extra arguments
{
  pthread_t newthread; // -- aligns with td
  void *arg; // -- aligns with nc
  arg = a1;
  if ((unsigned int) log_loggable(*(((_QWORD *) a1) + 16), 3LL)) // C1.a.i. Pointer arithmetic to access struct members, C3.a. Extraneous typecast 
  {
    // C4. Nonequivalent expressions (next two lines)
    syscall(186LL, 3LL); // C4.a.i. Extra arguments
    log(a2);
  }

  pthread_create(&newthread, 0LL, (void *(*)(void *)) event_loop, arg); // C3.a. Extraneous typecast
  *(((_QWORD *) arg) + 10) = newthread; // C1.a.i. Pointer arithmetic to access struct members
  pthread_join(*(((_QWORD *) arg) + 10), 0LL); // C1.a.i. Pointer arithmetic to access struct members
  return 0LL;
}


/** Original **/
static void *start_threads(void *arg)
{
  net_client_t *nc = (net_client_t *) arg;
  do
  {
    if (log_loggable((log_t *) nc->log, 3) != 0)
    {
      _log((log_t *) nc->log, "src/znet_client.c", 39, "nc start_thread id:%ld!", syscall(186));
    }

  }
  while (0);
  pthread_t td;
  pthread_create(&td, 0, event_loop, nc);
  nc->td_evloop = td;
  pthread_join(nc->td_evloop, 0);
  return 0;
}




/*
 * Example 187
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 1625
 * Source: akuxcw/ics2015
 */

/** Decompiled **/
long long ret_n_b(int a1)
{
  // C3.a. Extraneous typecasts
  // C4.c. Extra & when accessing global variable
  return idex(a1, (long long (*)(_QWORD)) (&decode_n_b), (void (*)(void)) do_ret_b);
}


/** Original **/
int ret_n_b(swaddr_t eip)
{
  return idex(eip, decode_n_b, do_ret_b);
}




/*
 * Example 188
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 3664
 * Source: qazyn951230/qbe
 */

/** Decompiled **/
signed int rslot(unsigned int a1, long long a2)
{
  signed int result; // C5.a. Extraneous variable
  if ((unsigned int) rtype(a1)) // C3.a. Extraneous typecast, C4.b. Only equivalent if RTmp = 0.
    result = -1;
  else
    result = *((signed short *) (((*((_QWORD *) (a2 + 8))) + (120LL * (a1 >> 3))) + 52)); // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer dereference to access array members

  return result;
}


/** Original **/
static int rslot(Ref r, Fn *fn)
{
  if (rtype(r) != RTmp)
    return -1;

  return fn->tmp[r.val].slot;
}




/*
 * Example 189
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 5951
 * Source: ac000/libflate
 */

/** Decompiled **/
int tempcompname(const char *a1, const char **a2)
{
  return strcmp(a1, *a2); // C1.a.iii. Pointer dereference to access first struct member
}


/** Original **/
static int tempcompname(const void *a, const void *b)
{
  return strcmp((char *) a, ((st_ptr *) b)->name);
}




/*
 * Example 190
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 6956
 * Source: ygarrot/21sh
 */

/** Decompiled **/
void ft_errorlog(long long a1)
{
  int fd;
  if (a1)
  {
    fd = open("/tmp/.sh_errorlog", 1089, 448LL); // C9.a. Expanded standard macros
    if (fd >= 0)
    {
      ft_putendl_fd(a1, (unsigned int) fd); // C3.a. Extraneous typecast
      close(fd);
    }

  }

}


/** Original **/
void ft_errorlog(char *msg)
{
  int fd;
  if (!msg)
    return;

  if ((fd = open("/tmp/.sh_errorlog", (O_CREAT | O_WRONLY) | O_APPEND, S_IRWXU)) < 0)
    return;

  ft_putendl_fd(msg, fd);
  close(fd);
}




/*
 * Example 191
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 7593
 * Source: morimoto/dmm
 */

/** Decompiled **/
_BOOL8 MemInit()
{
  _BOOL8 result; // C5.a. Extraneous variable
  if (((unsigned char) addrmapinit()) != 1) // C3.a., C4.b. Equivalence depends on behavior of external code (equivalence depends on addrmpinit returning only 0 or 1, where the original doesn't)
    result = 0LL;
  else
    result = ((unsigned char) memctrlinit()) == 1; // C3.a., C4.b. Equivalence depends on behavior of external code (equivalence depends on memctrlinit returning only 0 or 1, where the original doesn't)

  return result;
}


/** Original **/
bool MemInit(void)
{
  if (!addrmapinit())
    return 0;

  if (!memctrlinit())
    return 0;

  return 1;
}




/*
 * Example 192
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 7867
 * Source: qsantos/voronoi
 */

/** Decompiled **/
long long vr_bnode_prev(long long a1)
{
  long long v2;
  long long i; // C5.a. Extraneous variable - both v2 and i align with n, but v2 is used first.
  v2 = vr_bnode_right(a1);
  if (!v2)
    return 0LL;

  for (i = *((_QWORD *) (v2 + 16)); *((_QWORD *) (i + 24)); i = *((_QWORD *) (i + 24))) // C1.a.i., C7.a. While loop as non-cannonical for loop
    ;

  return i;
}


/** Original **/
vr_bnode_t *vr_bnode_prev(vr_bnode_t *n)
{
  n = vr_bnode_right(n);
  if (n == 0)
    return 0;

  n = n->left;
  while (n->right != 0)
    n = n->right;

  return n;
}




/*
 * Example 193
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 8669
 * Source: Open-App-Library/Markdown-Panda
 */

/** Decompiled **/
long long myencoding_decode_iso_8859_8_i(unsigned char a1, long long a2)
{
  if ((a1 & 0x80u) != 0)
    *((_QWORD *) (a2 + 24)) = myencoding_map_iso_8859_8[a1 - 128]; // C1.a.i. Pointer arithmetic to access struct members
  else
    *((_QWORD *) (a2 + 24)) = a1; // C1.a.i. Pointer arithmetic to access struct members

  return 0LL; // C9.b. Expanded user-defined macros
}


/** Original **/
myencoding_status_t myencoding_decode_iso_8859_8_i(const unsigned char data, myencoding_result_t *res)
{
  if (data <= 0x7F)
    res->result = data;
  else
    res->result = myencoding_map_iso_8859_8[data - 0x80];

  return MyENCODING_STATUS_OK;
}




/*
 * Example 194
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 9071
 * Source: robamler/mupdf-nacl
 */

/** Decompiled **/
long long cbz_lookup_metadata(long long a1, long long a2, const char *a3, long long a4, unsigned int a5)
{
  long long result; // C5.a. Extraneous variable
  unsigned int v6; // C5.a.i. Extraneous intermediate variable duplicating another variable
  long long v7; // C5.a.i. Extraneous intermediate variable duplicating another variable
  v7 = a4; // C2.a.i. Extraneous variable duplicating another variable
  v6 = a5; // C2.a.i. Extraneous variable duplicating another variable
  if (!strcmp(a3, "format"))
    result = fz_strlcpy(v7, "CBZ", v6);
  else
    result = 0xFFFFFFFFLL;

  return result;
}


/** Original **/
static int cbz_lookup_metadata(fz_context *ctx, cbz_document *doc, const char *key, char *buf, int size)
{
  if (!strcmp(key, "format"))
    return fz_strlcpy(buf, "CBZ", size);

  return -1;
}




/*
 * Example 195
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 9800
 * Source: k0gaMSX/kcc
 */

/** Decompiled **/
long long bit_or(long long a1, long long a2) // C4.a.i. Extra arguments
{
  const char *v2; // C5.a. Extraneous variable
  long long v4;
  v4 = bit_xor(a1, a2); // C4.a.i. Extra arguments
  // C3.a. Extraneous typecast
  // C6.a. Character literals as integers
  // C4.a.i. Extra arguments
  while ((yytoken == 124) && ((unsigned int) next(a1, a2)))
  {
    v2 = (const char *) bit_xor(a1, a2); // C3.a. Extraneous typecast, C4.a.i. Extra arguments
    a2 = v4; // C2.a. Extra statement
    a1 = 11LL; // C2.a. Extra statement
    v4 = integerop(11, v4, v2); // C9.b. Expanded user-defined macros
  }

  return v4;
}


/** Original **/
static Node *bit_or(void)
{
  Node *np;
  np = bit_xor();
  while ((yytoken == '|') ? (next()) : (0))
    np = integerop(OBOR, np, bit_xor());

  return np;
}




/*
 * Example 196
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 123
 * Source: dylanmc/pidp8
 */

/** Decompiled **/
long long sim_os_ttclose()
{
  return sim_ttcmd();
}


/** Original **/
static t_stat sim_os_ttclose(void)
{
  return sim_ttcmd();
}




/*
 * Example 197
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 2953
 * Source: CasparCheng/Virtual-Memory
 */

/** Decompiled **/
long long lru_evict()
{
  void *ptr;
  unsigned int v2;
  if (!head_of_lru_queue)
  {
    fwrite("No LRU records found\n", 1uLL, 0x15uLL, stderr);
    exit(1);
  }

  v2 = *((_DWORD *) head_of_lru_queue); // C1.a.i. Pointer arithmetic to access struct members
  ptr = (void *) head_of_lru_queue; // C3.a. Extraneous typecast
  head_of_lru_queue = *((_QWORD *) (head_of_lru_queue + 16)); // C1.a.i. Pointer arithmetic to access struct members
  free(ptr);
  *((_QWORD *) ((8LL * ((signed int) v2)) + lookup_table)) = 0LL; // C1.b.ii. Pointer dereference to access array members
  if (head_of_lru_queue)
    *((_QWORD *) (head_of_lru_queue + 8)) = 0LL; // C1.a.i. Pointer arithmetic to access struct members
  else
    tail_of_lru_queue = 0LL;

  return v2;
}


/** Original **/
int lru_evict()
{
  if (!head_of_lru_queue)
  {
    fprintf(stderr, "No LRU records found\n");
    exit(1);
  }

  int frame = head_of_lru_queue->frame;
  node_t *node = head_of_lru_queue;
  head_of_lru_queue = node->next;
  free(node);
  lookup_table[frame] = 0;
  if (head_of_lru_queue)
  {
    head_of_lru_queue->prev = 0;
  }
  else
  {
    tail_of_lru_queue = 0;
  }

  return frame;
}




/*
 * Example 198
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 3125
 * Source: jbredeme/Stack-and-Queues
 */

/** Decompiled **/
const char *test_remove8()
{
  int *v0; // C5.a. Extraneous variable
  char *v1; // C5.a. Extraneous variable
  // C3.a. Extraneous typecast
  // C4.a.i. Missing arguments
  // C4. Nonequivalent expressions - conditional is incorrect (missing a !)
  if (((char *) list_remove_value()) == test1)
    return 0LL;
  
  // C7.d. Deconstructed ternary (involves next 11 lines, including bracket lines and whitespace)
  if (*__errno_location()) // C9.a. Expanded standard macros
  {
    v0 = __errno_location(); // C9.a. Expanded standard macros
    v1 = strerror(*v0);
  }
  else
  {
    v1 = "None";
  }

  fprintf(stderr, "[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n", "tests/list_tests.c", 240LL, v1);
  return "Wrong node value returned removing node 1.";
}


/** Original **/
char *test_remove8()
{
  if (!(list_remove_value(list, test1) == test1))
  {
    fprintf(stderr, "[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n", "tests/list_tests.c", 240, (errno == 0) ? ("None") : (strerror(errno)));
    return "Wrong node value returned removing node 1.";
  }

  ;
  return 0;
}




/*
 * Example 199
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 3772
 * Source: cartazio/spin-model-checker
 */

/** Decompiled **/
long long releasenode(int a1, long long a2)
{
  long long result; // C5.a. Extraneous variable
  if (a2)
  {
    if (a1)
    {
      releasenode(1, *((_QWORD *) (a2 + 16))); // C1.a.i. Pointer arithmetic to access struct members
      *((_QWORD *) (a2 + 16)) = 0LL; // C1.a.i. Pointer arithmetic to access struct members
      releasenode(1, *((_QWORD *) (a2 + 24))); // C1.a.i. Pointer arithmetic to access struct members
      *((_QWORD *) (a2 + 24)) = 0LL; // C1.a.i. Pointer arithmetic to access struct members
    }

    result = tfree(a2);
  }

  return result; // C12.a. Return value for void function
}


/** Original **/
void releasenode(int all_levels, Node *n)
{
  if (!n)
    return;

  if (all_levels)
  {
    releasenode(1, n->lft);
    n->lft = (Node *) 0;
    releasenode(1, n->rgt);
    n->rgt = (Node *) 0;
  }

  tfree((void *) n);
}




