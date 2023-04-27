/*
 * Example 115
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 7093
 * Source: pribault/Lem_in
 */

/** Decompiled (with Ghidra) **/

void ** ft_lstnew(long param_1,void *param_2)

{
  void **ppvVar1;
  void *pvVar2; // C5.a. Extraneous variable
  
  ppvVar1 = (void **)malloc(0x18); // C9.a. Expanded standard symbol, C3.a. Extraneous typecast
  if (ppvVar1 == (void **)0x0) { // C3.a. Extraneous typecast
    ppvVar1 = (void **)0x0; // C3.a. Extraneous typecast
  }
  else {
    if ((param_2 != (void *)0x0) && (param_1 != 0)) { // C3.a. Extraneous typecast
      pvVar2 = malloc((size_t)param_2); // C3.a. Extraneous typecast
      *ppvVar1 = pvVar2;
      if (*ppvVar1 == (void *)0x0) { // C3.a. Extraneous typecast
        return (void **)0x0; // C3.a. Extraneous typecast
      }
      pvVar2 = (void *)ft_memmove(*ppvVar1,param_1,param_2); // C3.a. Extraneous typecast
      *ppvVar1 = pvVar2; // C1.a.iii. Pointer dereference to access first struct member
    }
    ppvVar1[1] = param_2; // C1.a.ii. Array access to access struct members
    if (param_1 == 0) {
      *ppvVar1 = (void *)0x0; // C1.a.iii. Pointer dereference to access first struct member, C3.a. Extraneous typecast
      ppvVar1[1] = (void *)0x0; // C1.a.ii. Array access to access struct members, C3.a. Extraneous typecast
    }
    ppvVar1[2] = (void *)0x0; // C1.a.ii. Array access to access struct members, C3.a. Extraneous typecast
  }
  return ppvVar1;
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
 * Example 124
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 6191
 * Source: shengjh/pa2v.1
 */

/** Decompiled (with Ghidra) **/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void exec_test(void)

{
  interpret_rtl_and(&t0,0x101064,&DAT_0010102c); // C8. Global variable issues, C13. Decomposition of a composite variable into multiple variables
  rtl_update_ZFSF(&t0,_DAT_0010105c); // C8. Global variable issues, C13. Decomposition of a composite variable into multiple variables
  interpret_rtl_li(&t1,0);
  rtl_set_CF(&t1);
  rtl_set_OF(&t1);
  return;
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
 * Example 142
 * File: idioms_data_copy/data_0025.pkl
 * Shard 25, Index 315
 * Source: dhmunro/yorick
 */

/** Decompiled (with Ghidra) **/

void FreeTextStream(long param_1)
{
  // C5.b. Missing variable ios
  // C5.b. Missing variable stream. No missing code - the struct dereference is in the if statement.

  if (*(long *)(param_1 + 0x10) != 0) { // C1.a.i. Pointer arithmetic to access struct members
    p_fclose(*(long *)(param_1 + 0x10)); // C1.a.i. Pointer arithmetic to access struct members
  }
  (*p_free)(*(undefined8 *)(param_1 + 0x18)); // C1.a.i., C7. Obfuscated control flow - pointer dereference function call instead of ordinary function call
  RemoveIOLink(yTextFiles,param_1);
  y_FreeUnit(txtsBlock,param_1); // C4. Missing & on global variable
  return;
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
 * Example 134
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 9038
 * Source: abbeyj/ti99basic
 */

/** Decompiled (with Ghidra) **/

undefined vdp_data_read(void)

{
  undefined uVar1;
  
  uVar1 = vdp_data_read_latch;
  vdp_cmd_write_2 = 0;
  vdp_data_read_ahead();
  return uVar1;
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
 * Example 121
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 3757
 * Source: shiquan/bcfanno
 */

/** Decompiled (with Ghidra) **/

ushort isprint_c(byte param_1)

{
  ushort **ppuVar1; // C5.a. Extraneous variable
  
  // C7.c Inline function definition instead of function call
  ppuVar1 = __ctype_b_loc();
  return (*ppuVar1)[param_1] & 0x4000;
}


/** Original **/
inline static int isprint_c(char c)
{
  return isprint((unsigned char) c);
}




/*
 * Example 116
 * File: idioms_data_copy/data_0021.pkl
 * Shard 21, Index 1337
 * Source: SunDoge/kilo
 */

/** Decompiled (with Ghidra) **/

void initEditor(void)

{
  int iVar1; // C5.a. Extraneous variables
  
  E._0_4_ = 0; // C8. Issue in representing global variables
  E._4_4_ = 0; // C8. Issue in representing global variables
  E._16_4_ = 0; // C8. Issue in representing global variables
  iVar1 = getWindowSize(0x4040e8,0x4040ec); // C8. Issue in representing global variables
  if (iVar1 == -1) {
    die("getWindowSize");
  }
  return;
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
 * Example 196
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 123
 * Source: dylanmc/pidp8
 */

/** Decompiled (with Ghidra) **/

void sim_os_ttclose(void)

{
  sim_ttcmd();
  return; // C12.b. No return value for non-void function
}


/** Original **/
static t_stat sim_os_ttclose(void)
{
  return sim_ttcmd();
}




/*
 * Example 125
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 375
 * Source: vivanraaj/Neuro_Agent_FInal
 */

/** Decompiled (with Ghidra) **/

void read_string(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  
  *param_2 = 0; // C1.a.iii. Pointer dereference to access first struct member
  do {
    cVar1 = stream_read_input(param_1,param_2,0,0,0,0);
  } while (cVar1 != '\r');
  return;
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
 * Example 178
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 7762
 * Source: jmcnamara/libxlsxwriter
 */

/** Decompiled (with Ghidra) **/

void worksheet_select(long param_1)

{
  *(undefined *)(param_1 + 0x85) = 1; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macro
  *(undefined *)(param_1 + 0x86) = 0; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macro
  return;
}


/** Original **/
void worksheet_select(lxw_worksheet *self)
{
  self->selected = LXW_TRUE;
  self->hidden = LXW_FALSE;
}




/*
 * Example 151
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 3036
 * Source: St4rk/snsPlayer
 */

/** Decompiled (with Ghidra) **/

void rol_a(void)

{
  if ((P & 1) == 0) {
    if ((char)A < '\0') { // C3.a. Extraneous typecast
      P = P | 1;
    }
    else {
      P = P & 0xfe;
    }
    A = A * '\x02';
  }
  else {
    if ((char)A < '\0') { // C3.a. Extraneous typecast
      P = P | 1;
    }
    else {
      P = P & 0xfe;
    }
    A = A * '\x02' | 1;
  }
  if (A == 0) {
    P = P | 2;
  }
  else {
    P = P & 0xfd;
  }
  if ((char)A < '\0') { // C3.a. Extraneous typecast
    P = P | 0x80;
  }
  else {
    P = P & 0x7f;
  }
  tick_count = tick_count + 2;
  return;
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
 * Example 112
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 907
 * Source: freshpassport/utils
 */

/** Decompiled (with Ghidra) **/

void usage(undefined8 param_1)

{
  fprintf(stdout,"%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}


/** Original **/
void usage(const char *prog)
{
  fprintf(stdout, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", prog);
  exit(0);
}




/*
 * Example 194
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 9071
 * Source: robamler/mupdf-nacl
 */

/** Decompiled (with Ghidra) **/

undefined8
cbz_lookup_metadata(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1; // C5.a. Extraneous variable.
  undefined8 uVar2; // C5.a. Extraneous variable
  
  iVar1 = strcmp(param_3,"format");
  if (iVar1 == 0) {
    uVar2 = fz_strlcpy(param_4,&DAT_00100cdf,param_5); // C6.d. String replaced with reference to undeclared or global variable
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/** Original **/
static int cbz_lookup_metadata(fz_context *ctx, cbz_document *doc, const char *key, char *buf, int size)
{
  if (!strcmp(key, "format"))
    return fz_strlcpy(buf, "CBZ", size);

  return -1;
}




/*
 * Example 128
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 6118
 * Source: megamarc/Tilengine
 */

/** Decompiled (with Ghidra) **/

undefined8 TLN_AddSequenceToPack(long param_1,undefined8 param_2)

{
  char cVar1; // C5.a. Extraneous variable
  
  cVar1 = CheckBaseObject(param_1,7); // C9.b Expanded user-defined macro
  if ((cVar1 == '\x01') && (cVar1 = CheckBaseObject(param_2,6), cVar1 == '\x01')) { // C9.b. Expanded user-defined macros, C4.b. Equivalence depends on behavior of external code (external code must only return 1 and 0 for this to be equivalent).
    if (*(long *)(param_1 + 0x18) == 0) { // C1.a.i. Pointer arithmetic to access struct members
      *(undefined8 *)(param_1 + 0x18) = param_2; // C1.a.i. Pointer arithmetic to access struct members
    }
    else {
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = param_2; // C1.a.i. Pointer arithmetic to access struct members
    }
    *(undefined8 *)(param_1 + 0x20) = param_2; // C1.a.i. Pointer arithmetic to access struct members
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 0; // C1.a.i. Pointer arithmetic to access struct members
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1; // C1.a.i. Pointer arithmetic to access struct members
    TLN_SetLastError(0); // C9.b Expanded user-defined macros
    return 1;
  }
  return 0;
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
 * Example 198
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 3125
 * Source: jbredeme/Stack-and-Queues
 */

/** Decompiled (with Ghidra) **/

char * test_remove8(void)

{
  undefined *puVar1; // C5.a. Extraneous variable
  int *piVar2; // C5.a. Extraneous variable
  char *pcVar3; // C5.a. Extraneous variable
  
  puVar1 = (undefined *)list_remove_value(list,test1); // C3.a. Extraneous typecast
  if (puVar1 == test1) {
    pcVar3 = (char *)0x0; // C3.a. Extraneous typecast
  }
  else {
    // C7.d. Deconstructed ternary (involves next 9 lines)
    piVar2 = __errno_location(); // C9.a. Expanded standard symbol
    if (*piVar2 == 0) {
      pcVar3 = "None";
    }
    else {
      piVar2 = __errno_location(); // C9.a. Expanded standard symbol, C2.a. Extraneous statement
      pcVar3 = strerror(*piVar2);
    }
    fprintf(stderr,"[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n",
            "tests/list_tests.c",0xf0,pcVar3);
    pcVar3 = "Wrong node value returned removing node 1.";
  }
  return pcVar3;
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
 * Example 105
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 1037
 * Source: ochaochaocha3/polytech-2014-algorithm-exam
 */

/** Decompiled (with Ghidra) **/

bool confirm_delete(void)

{
  int local_c;
  
  do {
    printf(&DAT_00405fb0); // C6.d. String replaced with reference to undeclared or global variable.
    __isoc99_scanf(&DAT_00405864,&local_c); // C6.d. String replaced with reference to undeclared or global variable.
    if (local_c == 0) break;
  } while (local_c != 1);
  return local_c == 0;
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
 * Example 150
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 1175
 * Source: majstar/RevisedSDCCLinker-n
 */

/** Decompiled (with Ghidra) **/

void File_writeHex(long *param_1,undefined8 param_2,byte param_3)
{
  // C5.b. Missing variable procName (though the decompiled version is probably more idiomatic here.)

  long lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = File__checkValidityPRE(lVar1,"File_writeHex");
  if (iVar2 != 0) {
    fprintf(*(FILE **)(lVar1 + 8),"%.*x",(ulong)param_3,param_2); // C1.a.i. Non-idiomatic struct dereferences, C3.a. Extraneous typecasts
  }
  return;
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
 * Example 160
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 6626
 * Source: libretro/mame2003-libretro
 */

/** Decompiled (with Ghidra) **/

void toypop_sound_clear_w(void)

{
  cpunum_set_reset_line(1,0); // C9.a. Uses expanded macros
  return;
}


/** Original **/
void toypop_sound_clear_w(offs_t offset, data8_t data)
{
  cpunum_set_reset_line(1, CLEAR_LINE);
}




/*
 * Example 126
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 4093
 * Source: lpabon/qemu
 */

/** Decompiled (with Ghidra) **/

void qemu_co_queue_wait_insert_head(long *param_1)

{
  long lVar1; // C5.a Extraneous variable
  char cVar2; // C5.a Extraneous variable
  long lVar3;
  long in_FS_OFFSET; // C5.a Extraneous variable
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28); // C2.a.i. Extra statement to initialize extraneous variable
  lVar3 = qemu_coroutine_self();
  *(long *)(lVar3 + 0x20) = *param_1; // C1.a.i. Pointer arithmetic to access struct members
  if (*(long *)(lVar3 + 0x20) == 0) { // C1.a.i. Pointer arithmetic to access struct members
    param_1[1] = lVar3 + 0x20; // C1.a.ii. Array access to access struct members
  }
  else {
    *(long *)(*param_1 + 0x28) = lVar3 + 0x20; // C1.a.i. Pointer arithmetic to access struct members
  }
  *param_1 = lVar3; // C1.a.iii. Pointer dereference to access first struct member
  *(long **)(lVar3 + 0x28) = param_1; // C1.a.i. Pointer arithmetic to access struct members
  qemu_coroutine_yield();
  cVar2 = qemu_in_coroutine();
  if (cVar2 == '\0') { // C9.a. Uses standard expanded symbol (this and next two lines)
                    /* WARNING: Subroutine does not return */
    __assert_fail("qemu_in_coroutine()","qemu-coroutine-lock.c",0x4d,
                  "qemu_co_queue_wait_insert_head");
  }
  // C2.a. Extraneous statement (next 3 lines)
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
 * Example 138
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 4057
 * Source: klamonte/qodem
 */

/** Decompiled (with Ghidra) **/

undefined8 exitErrorNotFound(undefined8 param_1,uint param_2)

{
  undefined8 uVar1; // C5.a. Extraneous variable
  // C2.b. Missing statement

  if (((param_2 == 0) || (0x1b5d < param_2)) && ((param_2 < 0x1f41 || (0x1f85 < param_2)))) { // C9.b. Expanded user-defined macros
    // C2.b. Missing statement

    uVar1 = 0xfffffff0;
  }
  else {
    uVar1 = exitError(param_1,param_2,3,0xffffffd5); // C9.b. Expanded user-defined macro
  }
  return uVar1;
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
 * Example 107
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 2333
 * Source: libretro/blueMSX-libretro
 */

/** Decompiled (with Ghidra) **/

void * harddiskIdeCreate(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x20020); // C9.a. Expanded standard symbol
  *(undefined4 *)((long)pvVar1 + 0x2001c) = param_1; // C1.a.i. Pointer arithmetic to access struct members
  *(undefined4 *)((long)pvVar1 + 8) = 0; // C1.a.i. Pointer arithmetic to access struct members
  *(undefined4 *)((long)pvVar1 + 0xc) = 0; // C1.a.i. Pointer arithmetic to access struct members
  harddiskIdeReset(pvVar1);
  return pvVar1;
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
 * Example 159
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 6099
 * Source: libretro/mame2003-libretro
 */

/** Decompiled (with Ghidra) **/

void namcos2_sound_bankselect_w(undefined8 param_1,byte param_2)

{
  int iVar1; // C5.a. Extraneous variable
  undefined4 uVar2; // C5.a. Extraneous variable
  long lVar3;
  long lVar4; // C5.a. Extraneous variable (doesn't quite align with max). This and the extraneous variable on the next line are a borderline case.
  // C5.b. Missing variable - max
  
  lVar3 = memory_region(0x83); // C9.b. Expanded user-defined macro
  lVar4 = memory_region_length(0x83); // C9.b. Expanded user-defined macro
  *(long *)(lRam00000000001010d5 + 0x30) =
       ((int)((ulong)(param_2 >> 4) % (lVar4 - 0x10000U >> 0xe)) + 4) * 0x4000 + lVar3; // C8. Issue in representing global variables, C1.b.ii. Pointer arithmetic to access array members.
  if (*pcRam00000000001010e0 == '\x06') { // C8. Issue in representing global variables
    iVar1 = cpu_getactivecpu(); 
    if (-1 < iVar1) {
      *puRam00000000001010f7 = 0xff; // C8. Issue in representing global variables
      uVar2 = activecpu_get_pc_byte();
      activecpu_set_op_base(uVar2);
    }
  }
  return;
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
 * Example 193
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 8669
 * Source: Open-App-Library/Markdown-Panda
 */

/** Decompiled (with Ghidra) **/

undefined8 myencoding_decode_iso_8859_8_i(byte param_1,long param_2)

{
  if ((char)param_1 < '\0') {
    // C1.a.i. Pointer arithmetic to access struct members
    // C3.a. Extraneous typecast
    // C1.b.ii. Pointer arithmetic to access array members
    *(undefined8 *)(param_2 + 0x18) =
         *(undefined8 *)(myencoding_map_iso_8859_8 + (long)(int)(param_1 - 0x80) * 8);
  }
  else {
    *(ulong *)(param_2 + 0x18) = (ulong)param_1; // C1.a.i. Pointer arithmetic to access struct members, C3.a. Extraneous typecast
  }
  return 0; // C9.b. Expanded user-defined macros
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
 * Example 190
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 6956
 * Source: ygarrot/21sh
 */

/** Decompiled (with Ghidra) **/

void ft_errorlog(long param_1)

{
  int __fd;
  
  // C7. Obfuscated control flow - uses the , operator
  if ((param_1 != 0) && (__fd = open("/tmp/.sh_errorlog",0x441,0x1c0), -1 < __fd)) {
    ft_putendl_fd(param_1,__fd);
    close(__fd);
  }
  return;
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
 * Example 129
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 6904
 * Source: olikraus/m2tklib
 */

/** Decompiled (with Ghidra) **/

void mr_SetListElement(long param_1,int param_2,int param_3,undefined8 param_4)
{
  // C5.b. Missing variable - list

  *(undefined8 *)
   ((long)param_3 * 8 + *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + (long)param_2 * 8)) =
       param_4; // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer arithmetic to access array members
  return;
}


/** Original **/
void mr_SetListElement(mr_type mr, int pos, int el_idx, void *element)
{
  void **list;
  list = (void **) mr->m2_list_list->list[pos];
  list[el_idx] = element;
}




/*
 * Example 131
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 7616
 * Source: fleutot/genpool
 */

/** Decompiled (with Ghidra) **/

undefined8 main(void)

{
  test_machine_init();
  test_machine_command_create();
  test_machine_command_with_clamp();
  test_machine_command_valid_check();
  puts("All tests passed.");
  return 0;
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




