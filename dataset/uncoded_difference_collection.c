/* 
 ******** File 0 ********
 */

/*
 * Example 0
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 450
 * Source: Fabio-Kubo/processamento-imagens
 */

/** Decompiled **/
long long TIFFFieldWithTag(long long a1, int a2)
{
  long long v3;
  v3 = TIFFFindField(a1, a2, 0);
  if (!v3)
    TIFFErrorExt(*((_QWORD *) (a1 + 952)), "TIFFFieldWithTag", "Internal error, unknown tag 0x%x");

  return v3;
}


/** Original **/
const TIFFField *TIFFFieldWithTag(TIFF *tif, uint32 tag)
{
  const TIFFField *fip = TIFFFindField(tif, tag, TIFF_NOTYPE);
  if (!fip)
  {
    TIFFErrorExt(tif->tif_clientdata, "TIFFFieldWithTag", "Internal error, unknown tag 0x%x", (unsigned int) tag);
  }

  return fip;
}




/*
 * Example 1
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 2918
 * Source: dannyd2/Lexical-Analyzer-BullyC-
 */

/** Decompiled **/
long long yyset_lineno(unsigned int a1)
{
  long long result;
  result = a1;
  yylineno = a1;
  return result;
}


/** Original **/
void yyset_lineno(int _line_number)
{
  yylineno = _line_number;
}




/*
 * Example 2
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 5322
 * Source: swisscom/eos
 */

/** Decompiled **/
long long patn_get_program(unsigned char *a1)
{
  return ((*a1) << 8) | ((unsigned int) a1[1]);
}


/** Original **/
inline static uint16_t patn_get_program(const uint8_t *p_pat_n)
{
  return (p_pat_n[0] << 8) | p_pat_n[1];
}




/*
 * Example 3
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 5339
 * Source: swisscom/eos
 */

/** Decompiled **/
signed long long desc59_get_language(long long a1, unsigned char a2)
{
  signed long long result;
  if (((8 * a2) + 10LL) <= (((unsigned char) desc_get_length(a1)) + 2))
    result = ((8 * a2) + 2LL) + a1;
  else
    result = 0LL;

  return result;
}


/** Original **/
inline static uint8_t *desc59_get_language(uint8_t *p_desc, uint8_t n)
{
  uint8_t *p_desc_n = (p_desc + 2) + (n * 8);
  if (((p_desc_n + 8) - p_desc) > (desc_get_length(p_desc) + 2))
    return 0;

  return p_desc_n;
}




/*
 * Example 4
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 8067
 * Source: neuks/grib2
 */

/** Decompiled **/
long long fix_ncep_4(long long a1)
{
  int v2;
  v2 = flag_table_3_3(a1);
  if (v2 >= 0)
    set_flag_table_3_3(a1, v2 | 0x30u);

  return 0LL;
}


/** Original **/
int fix_ncep_4(unsigned char **sec)
{
  int i;
  i = flag_table_3_3(sec);
  if (i >= 0)
  {
    i = i | 48;
    set_flag_table_3_3(sec, i);
  }

  return 0;
}




/*
 * Example 5
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 9263
 * Source: ryanbalsdon/libr
 */

/** Decompiled **/
long long R_MutableString_first(long long a1)
{
  long long result;
  if (a1)
    result = R_MutableData_first(*((_QWORD *) (a1 + 16)));
  else
    result = 0LL;

  return result;
}


/** Original **/
char R_MutableString_first(const R_MutableString *self)
{
  if (self == 0)
    return '\0';

  return R_MutableData_first(self->array);
}




/*
 * Example 6
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 9568
 * Source: JeanMax/21sh
 */

/** Decompiled **/
long long ft_lstdel(long long *a1, long long a2)
{
  long long result;
  if (a1 && a2)
  {
    result = *a1;
    if (*a1)
    {
      ft_lstdel((long long *) ((*a1) + 16), a2);
      result = ft_lstdelone(a1, a2);
    }

  }

  return result;
}


/** Original **/
void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  if (alst && del)
  {
    if (*alst)
    {
      ft_lstdel(&(*alst)->next, del);
      ft_lstdelone(alst, del);
    }

  }

}




/*
 * Example 7
 * File: idioms_data_copy/data_0000.pkl
 * Shard 0, Index 9609
 * Source: JeanMax/21sh
 */

/** Decompiled **/
signed long long ft_strindex(long long a1, char a2)
{
  unsigned int i;
  for (i = 0; (*((_BYTE *) (((signed int) i) + a1))) != a2; ++i)
  {
    if (!(*((_BYTE *) (((signed int) i) + a1))))
      return 0xFFFFFFFFLL;

  }

  return i;
}


/** Original **/
int ft_strindex(const char *s, int c)
{
  int i;
  i = 0;
  while (s[i] != ((char) c))
  {
    if (!s[i])
      return -1;

    i++;
  }

  return i;
}




/*
 * Example 8
 * File: idioms_data_copy/data_0001.pkl
 * Shard 1, Index 2570
 * Source: s-weisser/surface-segmentation
 */

/** Decompiled **/
long long ListGetLength(long long a1)
{
  return *((_QWORD *) a1);
}


/** Original **/
long ListGetLength(List *list)
{
  return list->numEntries;
}




/*
 * Example 9
 * File: idioms_data_copy/data_0001.pkl
 * Shard 1, Index 3352
 * Source: mongrel2/mongrel2
 */

/** Decompiled **/
int hash_comp_default(const char *a1, const char *a2)
{
  return strcmp(a1, a2);
}


/** Original **/
static int hash_comp_default(const void *key1, const void *key2)
{
  return strcmp(key1, key2);
}




/*
 * Example 10
 * File: idioms_data_copy/data_0001.pkl
 * Shard 1, Index 5893
 * Source: dracoling/tze
 */

/** Decompiled **/
long long do_build(long long a1)
{
  if (!((*((_DWORD *) (a1 + 432))) & 0x4000))
    return send_to_char("You aren't allowed to build!\n\r", a1);

  *((_WORD *) (a1 + 448)) = 9;
  do_help(a1, "build_bmotd");
  return send_to_char("Building commands are now operative. Type stop to stop building.\n\r", a1);
}


/** Original **/
void do_build(CHAR_DATA *ch, char *argument)
{
  if (!(ch->act & 16384))
  {
    send_to_char("You aren't allowed to build!\n\r", ch);
    return;
  }

  ch->position = 9;
  do_help(ch, "build_bmotd");
  send_to_char("Building commands are now operative. Type stop to stop building.\n\r", ch);
}




/*
 * Example 11
 * File: idioms_data_copy/data_0001.pkl
 * Shard 1, Index 7099
 * Source: darklinden/EasyPurchase
 */

/** Decompiled **/
long long DSA_get_ex_data(long long a1, unsigned int a2)
{
  return CRYPTO_get_ex_data(a1 + 104, a2);
}


/** Original **/
void *DSA_get_ex_data(DSA *d, int idx)
{
  return CRYPTO_get_ex_data(&d->ex_data, idx);
}




/*
 * Example 12
 * File: idioms_data_copy/data_0001.pkl
 * Shard 1, Index 7793
 * Source: darklinden/EasyPurchase
 */

/** Decompiled **/
long long CRYPTO_dbg_set_options(long long a1)
{
  long long result;
  result = a1;
  options = a1;
  return result;
}


/** Original **/
void CRYPTO_dbg_set_options(long bits)
{
  options = bits;
}




/*
 * Example 13
 * File: idioms_data_copy/data_0001.pkl
 * Shard 1, Index 8421
 * Source: darklinden/EasyPurchase
 */

/** Decompiled **/
_BOOL8 X509_set_serialNumber(long long a1, long long a2)
{
  long long v3;
  if (!a1)
    return 0LL;

  v3 = *((_QWORD *) ((*((_QWORD *) a1)) + 8LL));
  if (v3 != a2)
  {
    v3 = ASN1_STRING_dup(a2);
    if (v3)
    {
      ASN1_STRING_free(*((_QWORD *) ((*((_QWORD *) a1)) + 8LL)));
      *((_QWORD *) ((*((_QWORD *) a1)) + 8LL)) = v3;
    }

  }

  return v3 != 0;
}


/** Original **/
int X509_set_serialNumber(X509 *x, ASN1_INTEGER *serial)
{
  ASN1_INTEGER *in;
  if (x == 0)
    return 0;

  in = x->cert_info->serialNumber;
  if (in != serial)
  {
    in = (ASN1_INTEGER *) ASN1_STRING_dup((const ASN1_STRING *) serial);
    if (in != 0)
    {
      ASN1_STRING_free((ASN1_STRING *) x->cert_info->serialNumber);
      x->cert_info->serialNumber = in;
    }

  }

  return in != 0;
}




/*
 * Example 14
 * File: idioms_data_copy/data_0002.pkl
 * Shard 2, Index 1730
 * Source: sba1/simplemail
 */

/** Decompiled **/
_QWORD *array_duplicate_parsed(long long a1, unsigned int a2)
{
  _QWORD *v3;
  int i;
  int v5;
  v5 = 0;
  if (!a1)
    return 0LL;

  while (*((_QWORD *) ((8LL * v5) + a1)))
    ++v5;

  v3 = malloc(8LL * (v5 + 1));
  if (v3)
  {
    for (i = 0; i < v5; ++i)
      v3[i] = sm_parse_pattern(*((_QWORD *) ((8LL * i) + a1)), a2);

    v3[i] = 0LL;
  }

  return v3;
}


/** Original **/
char **array_duplicate_parsed(char **str, int flags)
{
  char **newpat;
  int pats = 0;
  if (!str)
    return 0;

  while (str[pats])
    pats++;

  if (newpat = (char **) malloc((pats + 1) * (sizeof(char *))))
  {
    int i;
    for (i = 0; i < pats; i++)
    {
      newpat[i] = sm_parse_pattern(str[i], flags);
    }

    newpat[i] = 0;
  }

  return newpat;
}




/*
 * Example 15
 * File: idioms_data_copy/data_0002.pkl
 * Shard 2, Index 3615
 * Source: awalsh128/cpu-simulator
 */

/** Decompiled **/
signed long long OR4_1(char a1, char a2, char a3, char a4)
{
  char v4;
  char v5;
  v4 = OR2_1(a3, a4);
  v5 = OR2_1(a1, a2);
  return OR2_1(v5, v4);
}


/** Original **/
wire OR4_1(wire in1, wire in2, wire in3, wire in4)
{
  return OR2_1(OR2_1(in1, in2), OR2_1(in3, in4));
}




/*
 * Example 16
 * File: idioms_data_copy/data_0002.pkl
 * Shard 2, Index 4703
 * Source: cmtsij/Vizio_XWR100_GPL
 */

/** Decompiled **/
unsigned long long detect_qnx(long long a1, unsigned int a2)
{
  unsigned long long result;
  long long v3;
  long long v4;
  result = get_buffer(a1, 512LL, 512LL, &v4);
  if (result > 0x1FF)
  {
    result = get_le_long(v4, 512LL);
    if (result == 47)
      result = print_line(a2, "QNX4 file system", v3);

  }

  return result;
}


/** Original **/
void detect_qnx(SECTION *section, int level)
{
  unsigned char *buf;
  if (get_buffer(section, 512, 512, (void **) (&buf)) < 512)
    return;

  if (get_le_long(buf) != 0x0000002f)
    return;

  print_line(level, "QNX4 file system");
}




/*
 * Example 17
 * File: idioms_data_copy/data_0002.pkl
 * Shard 2, Index 7775
 * Source: eastlife/UNSW
 */

/** Decompiled **/
long long numV(unsigned int *a1)
{
  if (!a1)
    _assert_fail("g != NULL", "Map.c", 0x75u, "numV");

  return *a1;
}


/** Original **/
int numV(Map g)
{
  assert(g != 0);
  return g->nV;
}




/*
 * Example 18
 * File: idioms_data_copy/data_0002.pkl
 * Shard 2, Index 8321
 * Source: Baldwin90/get_next_line
 */

/** Decompiled **/
signed long long ft_isnumeric(long long a1)
{
  char *v2;
  v2 = (char *) (a1 - 1);
  while (*(++v2))
  {
    if (!((unsigned int) ft_isdigit((unsigned int) (*v2))))
      return 0LL;

  }

  return 1LL;
}


/** Original **/
int ft_isnumeric(char *str)
{
  str--;
  while (*(++str))
    if (!ft_isdigit(*str))
    return 0;


  return 1;
}




/*
 * Example 19
 * File: idioms_data_copy/data_0003.pkl
 * Shard 3, Index 7022
 * Source: johnou/hotkey_websocket_server
 */

/** Decompiled **/
long long parity(unsigned int a1, int a2, int a3)
{
  return (a3 ^ a2) ^ a1;
}


/** Original **/
uint32_t parity(uint32_t x, uint32_t y, uint32_t z)
{
  return (x ^ y) ^ z;
}




/*
 * Example 20
 * File: idioms_data_copy/data_0004.pkl
 * Shard 4, Index 2151
 * Source: Cfarjanel/fillit
 */

/** Decompiled **/
long long ft_strnstr(long long a1, _BYTE *a2, unsigned long long a3)
{
  int v4;
  unsigned long long v5;
  unsigned long long v6;
  v6 = 0LL;
  if (!(*a2))
    return a1;

  while ((*((_BYTE *) (a1 + v6))) && (v6 < a3))
  {
    v5 = v6;
    v4 = 0;
    while (((*((_BYTE *) (a1 + v5))) == a2[v4]) && (v5 < a3))
    {
      ++v5;
      if (!a2[++v4])
        return a1 + v6;

    }

    ++v6;
  }

  return 0LL;
}


/** Original **/
char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
  size_t i;
  size_t j;
  int n;
  i = 0;
  n = 0;
  if (to_find[0] == '\0')
    return (char *) str;

  while (str[i] && (i < len))
  {
    j = i;
    n = 0;
    while ((str[j] == to_find[n]) && (j < len))
    {
      j++;
      n++;
      if (!to_find[n])
        return (char *) (&str[i]);

    }

    i++;
  }

  return 0;
}




/*
 * Example 21
 * File: idioms_data_copy/data_0004.pkl
 * Shard 4, Index 4761
 * Source: ahs3/acpica-tools
 */

/** Decompiled **/
long long AcpiGetCurrentResources(long long a1, long long a2)
{
  unsigned int v2;
  long long v4;
  unsigned int v5;
  AcpiUtTrace(233LL, "AcpiGetCurrentResources", "rsxface", 256LL);
  v5 = AcpiRsValidateParameters(a1, a2, &v4);
  if (v5)
  {
    v2 = v5;
    AcpiUtStatusExit(241LL, "AcpiGetCurrentResources", "rsxface", 256LL, v5);
  }
  else
  {
    v5 = AcpiRsGetCrsMethodData(v4, a2);
    v2 = v5;
    AcpiUtStatusExit(245LL, "AcpiGetCurrentResources", "rsxface", 256LL, v5);
  }

  return v2;
}


/** Original **/
ACPI_STATUS AcpiGetCurrentResources(ACPI_HANDLE DeviceHandle, ACPI_BUFFER *RetBuffer)
{
  ACPI_STATUS Status;
  ACPI_NAMESPACE_NODE *Node;
  AcpiUtTrace(233, __func__, _AcpiModuleName, 0x00000100);
  Status = AcpiRsValidateParameters(DeviceHandle, RetBuffer, &Node);
  if (Status)
  {
    do
    {
      register ACPI_STATUS _Param = (ACPI_STATUS) Status;
      AcpiUtStatusExit(241, __func__, _AcpiModuleName, 0x00000100, _Param);
      return _Param;
    }
    while (0);
  }

  Status = AcpiRsGetCrsMethodData(Node, RetBuffer);
  do
  {
    register ACPI_STATUS _Param = (ACPI_STATUS) Status;
    AcpiUtStatusExit(245, __func__, _AcpiModuleName, 0x00000100, _Param);
    return _Param;
  }
  while (0);
}




/*
 * Example 22
 * File: idioms_data_copy/data_0004.pkl
 * Shard 4, Index 5509
 * Source: DennisKofflard/Trident_i2c_controller
 */

/** Decompiled **/
long long i2c_psu_status_vout_get(long long a1, long long a2)
{
  return i2c_devices_command_and_read_uint8(a1, 122LL, a2);
}


/** Original **/
int i2c_psu_status_vout_get(i2c_dev *dev, uint8_t *status_vout)
{
  uint8_t command = 0x7A;
  return i2c_devices_command_and_read_uint8(dev, command, status_vout);
}




/*
 * Example 23
 * File: idioms_data_copy/data_0004.pkl
 * Shard 4, Index 9243
 * Source: satokibi/ev3
 */

/** Decompiled **/
void btstack_memory_db_mem_device_name_free(void *a1)
{
  free(a1);
}


/** Original **/
void btstack_memory_db_mem_device_name_free(db_mem_device_name_t *db_mem_device_name)
{
  free(db_mem_device_name);
}




/*
 * Example 24
 * File: idioms_data_copy/data_0004.pkl
 * Shard 4, Index 9259
 * Source: satokibi/ev3
 */

/** Decompiled **/
void btstack_memory_whitelist_entry_free(void *a1)
{
  free(a1);
}


/** Original **/
void btstack_memory_whitelist_entry_free(whitelist_entry_t *whitelist_entry)
{
  free(whitelist_entry);
}




/*
 * Example 25
 * File: idioms_data_copy/data_0005.pkl
 * Shard 5, Index 4576
 * Source: lucas-emery/so-tp2
 */

/** Decompiled **/
long long destroyMsg(signed int a1)
{
  long long result;
  if ((a1 <= 9) || (a1 >= 0))
  {
    free(rMsgQueues[a1]);
    rMsgQueues[a1] = 0LL;
    free(wMsgQueues[a1]);
    result = a1;
    wMsgQueues[a1] = 0LL;
  }

  return result;
}


/** Original **/
void destroyMsg(int msgId)
{
  if ((msgId < 10) || (msgId >= 0))
  {
    free(rMsgQueues[msgId]);
    rMsgQueues[msgId] = 0;
    free(wMsgQueues[msgId]);
    wMsgQueues[msgId] = 0;
  }

}




/*
 * Example 26
 * File: idioms_data_copy/data_0005.pkl
 * Shard 5, Index 8283
 * Source: rszrama/szramarom
 */

/** Decompiled **/
signed long long redit_heal(long long a1, const char *a2)
{
  signed long long result;
  long long v3;
  v3 = *((_QWORD *) (a1 + 120));
  if ((unsigned char) is_number(a2))
  {
    *((_WORD *) (v3 + 140)) = atoi(a2);
    send_to_char("Heal rate set.\n\r", a1);
    result = 1LL;
  }
  else
  {
    send_to_char("Syntax: heal <#xnumber>\n\r", a1);
    result = 0LL;
  }

  return result;
}


/** Original **/
bool redit_heal(CHAR_DATA *ch, char *argument)
{
  ROOM_INDEX_DATA *pRoom;
  pRoom = ch->in_room;
  if (is_number(argument))
  {
    pRoom->heal_rate = atoi(argument);
    send_to_char("Heal rate set.\n\r", ch);
    return 1;
  }

  send_to_char("Syntax: heal <#xnumber>\n\r", ch);
  return 0;
}




/*
 * Example 27
 * File: idioms_data_copy/data_0005.pkl
 * Shard 5, Index 9532
 * Source: JonathanGoldnauVogt/bicycletechnologies_firmware
 */

/** Decompiled **/
long long glPolygonMode(int a1, int a2)
{
  _BOOL4 v2;
  _BOOL4 v3;
  int v5;
  int v6;
  int v7;
  v2 = ((a1 == 1029) || (a1 == 1028)) || (a1 == 1032);
  gl_assert((unsigned int) v2);
  v3 = ((a2 == 6912) || (a2 == 6913)) || (a2 == 6914);
  gl_assert((unsigned int) v3);
  v5 = 38;
  v6 = a1;
  v7 = a2;
  return gl_add_op(&v5);
}


/** Original **/
void glPolygonMode(int face, int mode)
{
  GLParam p[3];
  gl_assert(((face == GL_BACK) || (face == GL_FRONT)) || (face == GL_FRONT_AND_BACK));
  gl_assert(((mode == GL_POINT) || (mode == GL_LINE)) || (mode == GL_FILL));
  p[0].op = OP_PolygonMode;
  p[1].i = face;
  p[2].i = mode;
  gl_add_op(p);
}




/*
 * Example 28
 * File: idioms_data_copy/data_0005.pkl
 * Shard 5, Index 9956
 * Source: BackupTheBerlios/wl530g-svn
 */

/** Decompiled **/
void *yy_flex_alloc(int a1)
{
  return malloc(a1);
}


/** Original **/
void *yy_flex_alloc(int y)
{
  return malloc(y);
}




/*
 * Example 29
 * File: idioms_data_copy/data_0006.pkl
 * Shard 6, Index 1767
 * Source: binarylu/cs511
 */

/** Decompiled **/
long long cbuf_space_available()
{
  return (unsigned int) (32 - cbuf_amount);
}


/** Original **/
int cbuf_space_available()
{
  return 32 - cbuf_amount;
}




/*
 * Example 30
 * File: idioms_data_copy/data_0006.pkl
 * Shard 6, Index 3161
 * Source: thindil/laeran-mud
 */

/** Decompiled **/
long long t_void(long long a1)
{
  long long result;
  if (a1)
  {
    result = *((unsigned short *) (a1 + 2));
    if (((_WORD) result) == 9)
    {
      c_error("void value not ignored");
      result = a1;
      *((_WORD *) (a1 + 2)) = 8;
    }

  }

  return result;
}


/** Original **/
static void t_void(node *n)
{
  if ((n != ((node *) 0)) && (n->mod == 0x09))
  {
    c_error("void value not ignored");
    n->mod = 0x08;
  }

}




/*
 * Example 31
 * File: idioms_data_copy/data_0006.pkl
 * Shard 6, Index 4413
 * Source: JulioCF/Ragnarok-OldTimes
 */

/** Decompiled **/
long long pc_db_final()
{
  return 0LL;
}


/** Original **/
int pc_db_final(void *k, void *d, va_list ap)
{
  return 0;
}




/*
 * Example 32
 * File: idioms_data_copy/data_0007.pkl
 * Shard 7, Index 1421
 * Source: manishwg/gpac
 */

/** Decompiled **/
long long mdat_del(long long a1)
{
  long long result;
  result = a1;
  if (a1)
  {
    if (*((_QWORD *) (a1 + 40)))
      gf_free(*((_QWORD *) (a1 + 40)));

    result = gf_free(a1);
  }

  return result;
}


/** Original **/
void mdat_del(GF_Box *s)
{
  GF_MediaDataBox *ptr = (GF_MediaDataBox *) s;
  if (!s)
    return;

  if (ptr->data)
    gf_free(ptr->data);

  gf_free(ptr);
}




/*
 * Example 33
 * File: idioms_data_copy/data_0007.pkl
 * Shard 7, Index 1447
 * Source: manishwg/gpac
 */

/** Decompiled **/
_DWORD *elng_New()
{
  _DWORD *s;
  s = (_DWORD *) gf_malloc(72LL);
  if (s)
    memset(s, 0, 0x48uLL);

  if (!s)
    return 0LL;

  *s = 1701604967;
  return s;
}


/** Original **/
GF_Box *elng_New()
{
  GF_MediaBox *tmp;
  {
    tmp = (GF_MediaBox *) gf_malloc(sizeof(GF_MediaBox));
    if (tmp)
      memset((void *) tmp, 0, sizeof(GF_MediaBox));

  }
  ;
  if (tmp == 0)
    return 0;

  tmp->type = GF_ISOM_BOX_TYPE_ELNG;
  ;
  return (GF_Box *) tmp;
}




/*
 * Example 34
 * File: idioms_data_copy/data_0007.pkl
 * Shard 7, Index 4327
 * Source: manishwg/gpac
 */

/** Decompiled **/
long long storage_get_cfg(long long a1)
{
  return *((_QWORD *) ((*((_QWORD *) ((*(*((_QWORD **) gf_node_get_private(a1)))) + 8LL))) + 16LL));
}


/** Original **/
static GF_Config *storage_get_cfg(M_Storage *storage)
{
  GF_Scene *scene;
  scene = (GF_Scene *) gf_node_get_private((GF_Node *) storage);
  return scene->root_od->term->user->config;
}




/*
 * Example 35
 * File: idioms_data_copy/data_0007.pkl
 * Shard 7, Index 5796
 * Source: AvatarKory/prt
 */

/** Decompiled **/
signed long long Parse_end_instance()
{
  signed long long result;
  if (iflag)
  {
    *((&iflag) + 0x40000000) = 0;
    ++num_instance;
    result = 0LL;
  }
  else
  {
    fprintf(stderr, "%s: unexpected 'end_instance'.\n", my_name);
    result = 1LL;
  }

  return result;
}


/** Original **/
int Parse_end_instance()
{
  if (!iflag)
  {
    fprintf(stderr, "%s: unexpected 'end_instance'.\n", my_name);
    return 1;
  }

  iflag = 0;
  ++num_instance;
  return 0;
}




/*
 * Example 36
 * File: idioms_data_copy/data_0007.pkl
 * Shard 7, Index 7603
 * Source: Ouranos27/CPE_2016_matchstick
 */

/** Decompiled **/
long long my_getnbr(_BYTE *a1)
{
  unsigned int v2;
  signed int v3;
  v2 = 0;
  v3 = 0;
  if (((*a1) == 45) && a1[1])
    v3 = 1;

  while (a1[v3])
  {
    if ((a1[v3] <= 47) || (a1[v3] > 57))
      return v2;

    v2 = (((char) a1[v3++]) + (10 * v2)) - 48;
  }

  if ((*a1) == 45)
    v2 = -v2;

  return v2;
}


/** Original **/
int my_getnbr(char *str)
{
  int i;
  int var;
  var = 0;
  i = 0;
  if ((str[0] == '-') && (str[1] != '\0'))
    i = i + 1;

  while (str[i] != '\0')
  {
    if ((str[i] >= '0') && (str[i] <= '9'))
    {
      var = var * 10;
      var = (var + str[i]) - '0';
    }
    else
      return var;

    i = i + 1;
  }

  if (str[0] == '-')
    var = (-1) * var;

  return var;
}




/*
 * Example 37
 * File: idioms_data_copy/data_0007.pkl
 * Shard 7, Index 9540
 * Source: ProsaicSatsuma/aes-bitslicing
 */

/** Decompiled **/
long long solution_add(long long a1, long long a2, unsigned int a3)
{
  signed int v3;
  int v4;
  long long result;
  unsigned int v6;
  v6 = a3;
  sm_row_insert(*((_QWORD *) a1), a3);
  if (a2)
    v3 = *((_DWORD *) ((4LL * ((signed int) v6)) + a2));
  else
    v3 = 1;

  v4 = v3 + (*((_DWORD *) (a1 + 8)));
  result = a1;
  *((_DWORD *) (a1 + 8)) = v4;
  return result;
}


/** Original **/
void solution_add(solution_t *sol, int *weight, int col)
{
  (void) sm_row_insert(sol->row, col);
  sol->cost += (weight == ((int *) 0)) ? (1) : (weight[col]);
}




/*
 * Example 38
 * File: idioms_data_copy/data_0008.pkl
 * Shard 8, Index 2237
 * Source: librelous/librelous
 */

/** Decompiled **/
long long IN_DownDown()
{
  return IN_KeyDown((int *) in_down);
}


/** Original **/
void IN_DownDown(void)
{
  IN_KeyDown(&in_down);
}




/*
 * Example 39
 * File: idioms_data_copy/data_0008.pkl
 * Shard 8, Index 2549
 * Source: librelous/librelous
 */

/** Decompiled **/
long long MSG_WriteDeltaFloat(long long a1, float a2, float a3)
{
  if (a2 == a3)
    return MSG_WriteBits(a1, 0, 1);

  MSG_WriteBits(a1, 1, 1);
  return MSG_WriteBits(a1, SLODWORD(a3), 32);
}


/** Original **/
void MSG_WriteDeltaFloat(msg_t *msg, float oldV, float newV)
{
  floatint_t fi;
  if (oldV == newV)
  {
    MSG_WriteBits(msg, 0, 1);
    return;
  }

  fi.f = newV;
  MSG_WriteBits(msg, 1, 1);
  MSG_WriteBits(msg, fi.i, 32);
}




/*
 * Example 40
 * File: idioms_data_copy/data_0008.pkl
 * Shard 8, Index 3154
 * Source: ssgarretson/Data-Structures
 */

/** Decompiled **/
_DWORD *newSTACK()
{
  _DWORD *v1;
  v1 = malloc(0x20uLL);
  if (!v1)
    _assert_fail("items != 0", "stack.c", 0x17u, "newSTACK");

  *((_QWORD *) v1) = newDA(32LL);
  if (!(*((_QWORD *) v1)))
    _assert_fail("items->s != 0", "stack.c", 0x19u, "newSTACK");

  v1[2] = 0;
  return v1;
}


/** Original **/
STACK *newSTACK()
{
  STACK *items = malloc(sizeof(STACK));
  assert(items != 0);
  items->s = newDA();
  assert(items->s != 0);
  items->debugFlag = 0;
  return items;
}




/*
 * Example 41
 * File: idioms_data_copy/data_0008.pkl
 * Shard 8, Index 4371
 * Source: imxiangpeng/mesa
 */

/** Decompiled **/
signed long long compare_ptr(unsigned long long a1, unsigned long long a2)
{
  if (a1 == a2)
    return 0LL;

  if (a1 >= a2)
    return 1LL;

  return 0xFFFFFFFFLL;
}


/** Original **/
static int compare_ptr(void *a, void *b)
{
  if (a == b)
    return 0;
  else
    if (a < b)
    return -1;
  else
    return 1;


}




/*
 * Example 42
 * File: idioms_data_copy/data_0008.pkl
 * Shard 8, Index 5570
 * Source: zmuliang/nodemcu
 */

/** Decompiled **/
signed long long lua_touserdata(long long a1, signed int a2)
{
  _DWORD *v2;
  int v3;
  _DWORD *v5;
  v2 = index2adr(a1, a2);
  v5 = v2;
  v3 = v2[2];
  if (v3 == 4)
    return *((_QWORD *) v5);

  if (v3 == 9)
    return (*((_QWORD *) v5)) + 40LL;

  return 0LL;
}


/** Original **/
extern void *lua_touserdata(lua_State *L, int idx)
{
  StkId o = index2adr(L, idx);
  switch ((void) o->value, o->tt)
  {
    case 9:
      return (&o->value.gc->u) + 1;

    case 4:
      return o->value.p;

    default:
      return 0;

  }

}




/*
 * Example 43
 * File: idioms_data_copy/data_0008.pkl
 * Shard 8, Index 5754
 * Source: rhoffsch42/rtv1
 */

/** Decompiled **/
unsigned long long ft_bzero(long long a1, unsigned long long a2)
{
  unsigned long long result;
  unsigned long long i;
  for (i = 0LL;; ++i)
  {
    result = i;
    if (i >= a2)
      break;

    *((_BYTE *) (a1 + i)) = 0;
  }

  return result;
}


/** Original **/
void ft_bzero(void *s, size_t n)
{
  size_t i;
  char *cps;
  cps = (char *) s;
  i = 0;
  while (i < n)
  {
    cps[i] = '\0';
    i++;
  }

}




/*
 * Example 44
 * File: idioms_data_copy/data_0008.pkl
 * Shard 8, Index 8226
 * Source: holtwashere/AlgorithmDesign
 */

/** Decompiled **/
int getDecisions(long long a1)
{
  signed long long v1;
  int v3;
  int i;
  LODWORD(v1) = puts("\n");
  for (i = 0; i <= 2; ++i)
  {
    LODWORD(v1) = *((_DWORD *) (((88LL * i) + a1) + 32));
    if (((signed int) v1) > 0)
    {
      printf("Choose your action for %s: \n", (88LL * i) + a1);
      puts("0: Attack\n1: Defend\n2: Heal");
      putchar(62);
      _isoc99_scanf("%d", &v3);
      while ((v3 < 0) || (v3 > 2))
      {
        puts("Invalid choice. Try again: ");
        putchar(62);
        _isoc99_scanf("%d", &v3);
      }

      v1 = (88LL * i) + a1;
      *((_DWORD *) (v1 + 56)) = v3;
    }

  }

  return v1;
}


/** Original **/
void getDecisions(Hero *heroes)
{
  printf("\n\n");
  int i = 0;
  for (i; i < 3; i++)
  {
    if (heroes[i].health > 0)
    {
      printf("Choose your action for %s: \n", heroes[i].name);
      printf("0: Attack\n1: Defend\n2: Heal\n");
      printf(">");
      int choice;
      scanf("%d", &choice);
      while ((0 > choice) || (choice > 2))
      {
        printf("Invalid choice. Try again: \n");
        printf(">");
        scanf("%d", &choice);
      }

      heroes[i].decision = choice;
    }

  }

}




/*
 * Example 45
 * File: idioms_data_copy/data_0009.pkl
 * Shard 9, Index 104
 * Source: jogi1/camquake
 */

/** Decompiled **/
float *SV_TestEntityPosition(long long a1)
{
  _BOOL4 v1;
  float *result;
  char v3;
  int v4;
  _BOOL4 v5;
  v1 = ((*((float *) (a1 + 168))) == 1.0) || ((*((float *) (a1 + 168))) == 0.0);
  v5 = v1;
  SV_Trace((long long) (&v3));
  if (v4)
    result = sv[1374];
  else
    result = 0LL;

  return result;
}


/** Original **/
edict_t *SV_TestEntityPosition(edict_t *ent)
{
  trace_t trace;
  int movetype;
  movetype = ((ent->v.solid == 1) || (ent->v.solid == 0)) ? (1) : (0);
  trace = SV_Trace(ent->v.origin, ent->v.mins, ent->v.maxs, ent->v.origin, movetype, ent);
  if (trace.startsolid)
    return sv.edicts;

  return 0;
}




/*
 * Example 46
 * File: idioms_data_copy/data_0009.pkl
 * Shard 9, Index 419
 * Source: git-hulk/kafka-cat
 */

/** Decompiled **/
signed long long set_sock_flags(int a1, int a2)
{
  int *v2;
  char *v3;
  signed long long result;
  signed long long v5;
  v5 = fcntl(a1, 3, 0LL);
  if (v5 >= 0)
  {
    fcntl(a1, 4, a2 | ((unsigned long long) v5));
    result = 0LL;
  }
  else
  {
    v2 = _errno_location();
    v3 = strerror(*v2);
    logger(2LL, "fcntl(..., F_GETFL) (%s)!\n", v3);
    result = 0xFFFFFFFFLL;
  }

  return result;
}


/** Original **/
static int set_sock_flags(int fd, int flag)
{
  long flags;
  flags = fcntl(fd, F_GETFL, 0);
  if (flags < 0)
  {
    logger(INFO, "fcntl(..., F_GETFL) (%s)!\n", strerror(errno));
    return -1;
  }

  flags |= flag;
  fcntl(fd, F_SETFL, flags);
  return 0;
}




/*
 * Example 47
 * File: idioms_data_copy/data_0009.pkl
 * Shard 9, Index 604
 * Source: dlaurent42/42sh
 */

/** Decompiled **/
void error_malloc_env(long long a1, long long a2, long long a3)
{
  long long v3;
  char v4;
  v3 = a3;
  v4 = 0;
  if (a1 && (a2 == (*((_QWORD *) (a1 + 64)))))
  {
    v4 = 1;
  }
  else
    if (a1 && (a2 == (*((_QWORD *) (a1 + 72)))))
  {
    v4 = 2;
  }


  if (a2)
    env_delete(a2);

  if (a1 && (v4 == 1))
    *((_QWORD *) (a1 + 64)) = 0LL;

  if (a1 && (v4 == 2))
    *((_QWORD *) (a1 + 72)) = 0LL;

  if (a1)
    sh_delete(a1);

  ft_putstr_fd("Cannot malloc ", 2LL);
  ft_putendl_fd(v3, 2LL);
  exit(1);
}


/** Original **/
void error_malloc_env(t_shell *sh, t_env *env, char *name)
{
  char id;
  id = 0;
  if (sh && (sh->env == env))
    id = 1;
  else
    if (sh && (sh->alias == env))
    id = 2;


  (env) ? (env_delete(env)) : (0);
  (sh && (id == 1)) ? (sh->env = 0) : (0);
  (sh && (id == 2)) ? (sh->alias = 0) : (0);
  (sh) ? (sh_delete(sh)) : (0);
  ft_putstr_fd("Cannot malloc ", 2);
  ft_putendl_fd(name, 2);
  exit(1);
}




/*
 * Example 48
 * File: idioms_data_copy/data_0009.pkl
 * Shard 9, Index 5590
 * Source: Guilbertb/image-P1-en-C
 */

/** Decompiled **/
int affiche_scr()
{
  int result;
  signed int i;
  signed int j;
  for (i = 0; i <= 99; ++i)
  {
    for (j = 0; j <= 199; ++j)
      putchar(screen[(100 * j) + i]);

    result = putchar(10);
  }

  return result;
}


/** Original **/
void affiche_scr()
{
  int x;
  int y;
  for (y = 0; y < 100; y++)
  {
    for (x = 0; x < 200; x++)
    {
      printf("%c", screen[x][y]);
    }

    printf("\n");
  }

  return;
}




/*
 * Example 49
 * File: idioms_data_copy/data_0009.pkl
 * Shard 9, Index 6147
 * Source: johnnyquest/hotOcean_Maya
 */

/** Decompiled **/
long long sfftw_plan_r2r_3d_(long long *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, long long a5, long long a6, unsigned int *a7, unsigned int *a8, unsigned int *a9, unsigned int *a10)
{
  long long result;
  result = fftwf_plan_r2r_3d(*a4, *a3, *a2, a5, a6, *a9, *a8, *a7, *a10);
  *a1 = result;
  return result;
}


/** Original **/
void sfftw_plan_r2r_3d_(fftwf_plan *p, int *nx, int *ny, int *nz, R *in, R *out, int *kindx, int *kindy, int *kindz, int *flags)
{
  *p = fftwf_plan_r2r_3d(*nz, *ny, *nx, in, out, (fftwf_r2r_kind) (*kindz), (fftwf_r2r_kind) (*kindy), (fftwf_r2r_kind) (*kindx), *flags);
}




/*
 * Example 50
 * File: idioms_data_copy/data_0009.pkl
 * Shard 9, Index 7637
 * Source: SuperIlu/DOjS
 */

/** Decompiled **/
long long jsR_restorescope(long long a1)
{
  long long result;
  --(*((_DWORD *) (a1 + 368)));
  result = a1;
  *((_QWORD *) (result + 288)) = *((_QWORD *) ((result + (8 * ((*((signed int *) (a1 + 368))) + 46LL))) + 8));
  return result;
}


/** Original **/
static void jsR_restorescope(js_State *J)
{
  J->E = J->envstack[--J->envtop];
}




/*
 * Example 51
 * File: idioms_data_copy/data_0009.pkl
 * Shard 9, Index 9098
 * Source: Julsy/push_swap
 */

/** Decompiled **/
long long ft_list_push_params(signed int a1, long long a2)
{
  long long v3;
  long long v4;
  signed int v5;
  v5 = 2;
  if (a1 == 1)
    return 0LL;

  v4 = ft_lstnew(*((_QWORD *) (a2 + 16)), 1LL);
  *((_QWORD *) (v4 + 16)) = 0LL;
  while (v5 < a1)
  {
    v3 = v4;
    v4 = ft_lstnew(*((_QWORD *) ((8LL * v5) + a2)), 1LL);
    *((_QWORD *) (v4 + 16)) = v3;
    ++v5;
  }

  return v4;
}


/** Original **/
t_list *ft_list_push_params(int ac, char **av)
{
  int i;
  t_list *list;
  t_list *tmp;
  i = 2;
  if (ac == 1)
    return 0;

  list = ft_lstnew(av[i], sizeof(char));
  list->next = 0;
  while (i < ac)
  {
    tmp = list;
    list = ft_lstnew(av[i], sizeof(char));
    list->next = tmp;
    i++;
  }

  return list;
}




/*
 * Example 52
 * File: idioms_data_copy/data_0010.pkl
 * Shard 10, Index 1199
 * Source: nijie/luahttpd
 */

/** Decompiled **/
long long tolua_register_gc(long long a1, unsigned int a2)
{
  long long v3;
  unsigned int v4;
  v4 = 1;
  v3 = *((_QWORD *) lua_touserdata(a1, a2));
  lua_pushstring(a1, "tolua_gc");
  lua_rawget(a1, 4293966296LL);
  lua_pushlightuserdata(a1, v3);
  lua_rawget(a1, 4294967294LL);
  if ((unsigned int) lua_type(a1, 0xFFFFFFFFLL))
  {
    v4 = 0;
  }
  else
  {
    lua_pushlightuserdata(a1, v3);
    lua_getmetatable(a1, a2);
    lua_rawset(a1, 4294967292LL);
  }

  lua_settop(a1, 4294967293LL);
  return v4;
}


/** Original **/
extern int tolua_register_gc(lua_State *L, int lo)
{
  int success = 1;
  void *value = *((void **) lua_touserdata(L, lo));
  lua_pushstring(L, "tolua_gc");
  lua_rawget(L, (-15000) - 1000);
  lua_pushlightuserdata(L, value);
  lua_rawget(L, -2);
  if (!(lua_type(L, -1) == 0))
    success = 0;
  else
  {
    lua_pushlightuserdata(L, value);
    lua_getmetatable(L, lo);
    lua_rawset(L, -4);
  }

  lua_settop(L, (-2) - 1);
  return success;
}




/*
 * Example 53
 * File: idioms_data_copy/data_0010.pkl
 * Shard 10, Index 1263
 * Source: alibezz/Simple-GUI
 */

/** Decompiled **/
long long desenha_label(long long a1)
{
  colore_caixa(a1);
  desenha_texto(a1, 0LL);
  return a1;
}


/** Original **/
caixa *desenha_label(caixa *xcaixa)
{
  colore_caixa(xcaixa);
  desenha_texto(xcaixa, 0);
  return xcaixa;
}




/*
 * Example 54
 * File: idioms_data_copy/data_0010.pkl
 * Shard 10, Index 3833
 * Source: pimenta53/Letrorium
 */

/** Decompiled **/
signed long long auto_white(_QWORD *a1, int *a2, long long a3)
{
  long long v4;
  unsigned int v5;
  unsigned int v6;
  int j;
  int i;
  v4 = a3;
  v6 = 0;
  for (i = 0; i < (*a2); ++i)
  {
    for (j = 0; j < (*a2); ++j)
    {
      if ((*((_BYTE *) (((2LL * j) + (*((_QWORD *) ((8LL * i) + (*a1))))) + 1))) == 98)
      {
        v5 = p_preta(a1, i, j, *((_BYTE *) ((2LL * j) + (*((_QWORD *) ((8LL * i) + (*a1)))))), a2, v4);
        if (v5 == (-1))
          return 0xFFFFFFFFLL;

        if (!v6)
          v6 = v5;

      }

    }

  }

  return v6;
}


/** Original **/
int auto_white(Elem **Tab, int *DIM, Gravados *gr)
{
  int i;
  int j;
  int result;
  int aux;
  result = 0;
  aux = 0;
  for (i = 0; i < (*DIM); i++)
  {
    for (j = 0; j < (*DIM); j++)
    {
      if ((*Tab)[i][j].cor == 'b')
      {
        aux = p_preta(Tab, i, j, (*Tab)[i][j].letra, DIM, gr);
        if (aux == (-1))
          return -1;

        if (result == 0)
          result = aux;

      }

    }

  }

  return result;
}




/*
 * Example 55
 * File: idioms_data_copy/data_0010.pkl
 * Shard 10, Index 5308
 * Source: clibs/clib
 */

/** Decompiled **/
long long reset_token_start_point(long long a1)
{
  *((_QWORD *) (a1 + 72)) = utf8iterator_get_char_pointer(a1 + 208);
  return utf8iterator_get_position(a1 + 208, a1 + 80);
}


/** Original **/
static void reset_token_start_point(GumboTokenizerState *tokenizer)
{
  tokenizer->_token_start = utf8iterator_get_char_pointer(&tokenizer->_input);
  utf8iterator_get_position(&tokenizer->_input, &tokenizer->_token_start_pos);
}




/*
 * Example 56
 * File: idioms_data_copy/data_0010.pkl
 * Shard 10, Index 5899
 * Source: jeffreysanti/StaticFunc
 */

/** Decompiled **/
long long icGenRemoveContainsMethod_print(long long a1, FILE *a2)
{
  if ((*((_DWORD *) a1)) == 30)
    fwrite("vrem ", 1uLL, 5uLL, a2);

  if ((*((_DWORD *) a1)) == 31)
    fwrite("vcont ", 1uLL, 6uLL, a2);

  if ((*((_DWORD *) a1)) == 32)
    fwrite("drem ", 1uLL, 5uLL, a2);

  if ((*((_DWORD *) a1)) == 33)
    fwrite("dcont ", 1uLL, 6uLL, a2);

  printOp(a2, *((_QWORD *) (a1 + 16)));
  fwrite(&unk_13A4, 1uLL, 2uLL, a2);
  printOp(a2, *((_QWORD *) (a1 + 24)));
  fwrite(&unk_13A4, 1uLL, 2uLL, a2);
  return printOp(a2, *((_QWORD *) (a1 + 32)));
}


/** Original **/
void icGenRemoveContainsMethod_print(ICGElm *elm, FILE *f)
{
  if (elm->typ == ICG_VREMOVE)
    fprintf(f, "vrem ");

  if (elm->typ == ICG_VCONTAINS)
    fprintf(f, "vcont ");

  if (elm->typ == ICG_DREMOVE)
    fprintf(f, "drem ");

  if (elm->typ == ICG_DCONTAINS)
    fprintf(f, "dcont ");

  printOp(f, elm->result);
  fprintf(f, ", ");
  printOp(f, elm->op1);
  fprintf(f, ", ");
  printOp(f, elm->op2);
}




/*
 * Example 57
 * File: idioms_data_copy/data_0010.pkl
 * Shard 10, Index 7778
 * Source: JLemahieu/minishell
 */

/** Decompiled **/
long long ft_execpf(long long a1, signed int *a2)
{
  unsigned int v3;
  v3 = ((long long (*)(long long, signed int *)) (*((&g_list_flagpf) + a2[8])))(a1, a2);
  if (v3 != (-1))
    a2[136] = a2[135];

  return v3;
}


/** Original **/
int ft_execpf(va_list *args, t_flagpf *flags)
{
  int ret;
  ret = g_list_flagpf[flags->flag](args, flags);
  if (ret != (-1))
    flags->backup = flags->i;

  return ret;
}




/*
 * Example 58
 * File: idioms_data_copy/data_0010.pkl
 * Shard 10, Index 7879
 * Source: szverhov/push_swap
 */

/** Decompiled **/
long long ft_write_comands(long long a1)
{
  long long result;
  long long i;
  _QWORD *j;
  for (i = a1; *((_QWORD *) (i + 16)); i = *((_QWORD *) (i + 16)))
    ;

  result = *((_QWORD *) (i + 8));
  for (j = *((_QWORD **) (i + 8)); j; j = (_QWORD *) j[1])
  {
    ft_printf("%s \n", *j);
    result = j[1];
  }

  return result;
}


/** Original **/
void ft_write_comands(t_comand_list *com)
{
  while (com->prev)
    com = com->prev;

  com = com->next;
  while (com)
  {
    ft_printf("%s \n", com->comand);
    com = com->next;
  }

}




/*
 * Example 59
 * File: idioms_data_copy/data_0011.pkl
 * Shard 11, Index 277
 * Source: zetorange/temp
 */

/** Decompiled **/
long long add_insn_group(long long a1, int a2)
{
  long long result;
  if ((a1 && a2) && (a2 != 8))
  {
    LOBYTE(result) = *((_BYTE *) (a1 + 75));
    *((_BYTE *) (a1 + 75)) = result + 1;
    result = (unsigned char) result;
    *((_BYTE *) ((a1 + ((unsigned char) result)) + 67)) = a2;
  }

  return result;
}


/** Original **/
static void add_insn_group(cs_detail *detail, m680x_group_type group)
{
  if (((detail != 0) && (group != M680X_GRP_INVALID)) && (group != M680X_GRP_ENDING))
    detail->groups[detail->groups_count++] = (uint8_t) group;

}




/*
 * Example 60
 * File: idioms_data_copy/data_0011.pkl
 * Shard 11, Index 2247
 * Source: whitead/Simple-MD
 */

/** Decompiled **/
double wrap(double a1, double a2)
{
  return a1 - (floor(a1 / a2) * a2);
}


/** Original **/
double wrap(double x, double img)
{
  return x - (floor(x / img) * img);
}




/*
 * Example 61
 * File: idioms_data_copy/data_0011.pkl
 * Shard 11, Index 3234
 * Source: mmanley42/gnl
 */

/** Decompiled **/
long long ft_striteri(long long a1, void (*a2)(_QWORD, long long))
{
  long long result;
  unsigned int v3;
  v3 = 0;
  if (a1 && a2)
  {
    while (1)
    {
      result = *((unsigned char *) (v3 + a1));
      if (!((_BYTE) result))
        break;

      a2(v3, v3 + a1);
      ++v3;
    }

  }

  return result;
}


/** Original **/
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
  unsigned int i;
  i = 0;
  if ((s != 0) && f)
  {
    while (s[i])
    {
      f(i, &s[i]);
      i++;
    }

  }

}




/*
 * Example 62
 * File: idioms_data_copy/data_0011.pkl
 * Shard 11, Index 8506
 * Source: extremx/Arduino
 */

/** Decompiled **/
void logOpen(int a1, int a2)
{
  openlog(0LL, a1, a2);
  log_open = 1;
}


/** Original **/
void logOpen(int options, int facility)
{
  openlog(0, options, facility);
  log_open = 1;
}




/*
 * Example 63
 * File: idioms_data_copy/data_0012.pkl
 * Shard 12, Index 1172
 * Source: zhizhid/bam_parser
 */

/** Decompiled **/
long long my_index(const char *a1, char a2)
{
  unsigned int v3;
  unsigned int i;
  v3 = -1;
  for (i = 0; ((signed int) i) < strlen(a1); ++i)
  {
    if (a2 == a1[i])
      return i;

  }

  return v3;
}


/** Original **/
int my_index(S, M)
char *S;
char M;
{
  int i;
  int pos;
  pos = -1;
  for (i = 0; i < strlen(S); i++)
  {
    if (S[i] == M)
    {
      pos = i;
      break;
    }

  }

  return pos;
}




/*
 * Example 64
 * File: idioms_data_copy/data_0012.pkl
 * Shard 12, Index 6695
 * Source: opensourceBrown/DR
 */

/** Decompiled **/
long long cpShapeCacheBB(long long a1, long long a2)
{
  cpShapeUpdate(a1, a2, *((double *) ((*((_QWORD *) (a2 + 8))) + 48LL)), *((double *) ((*((_QWORD *) (a2 + 8))) + 56LL)), *((double *) ((*((_QWORD *) (a2 + 8))) + 120LL)), *((double *) ((*((_QWORD *) (a2 + 8))) + 128LL)));
  return a1;
}


/** Original **/
cpBB cpShapeCacheBB(cpShape *shape)
{
  cpBody *body = shape->body;
  return cpShapeUpdate(shape, body->p, body->rot);
}




/*
 * Example 65
 * File: idioms_data_copy/data_0012.pkl
 * Shard 12, Index 8166
 * Source: overtrip/42_push_swap
 */

/** Decompiled **/
long long ft_putnbr_fd(int a1, unsigned int a2)
{
  int v3;
  v3 = a1;
  if (a1 < 0)
  {
    ft_putchar_fd(45LL, a2);
    v3 = -a1;
  }

  if (v3 > 10)
    ft_putnbr(v3 / 10);

  return ft_putchar_fd((unsigned int) ((char) ((v3 % 10) + 48)), a2);
}


/** Original **/
void ft_putnbr_fd(int n, int fd)
{
  if (n < 0)
  {
    ft_putchar_fd('-', fd);
    n = -n;
  }

  if (n > 10)
    ft_putnbr(n / 10);

  ft_putchar_fd((n % 10) + 48, fd);
}




/*
 * Example 66
 * File: idioms_data_copy/data_0012.pkl
 * Shard 12, Index 9655
 * Source: manusov/PortableTemplateConsoleApplication
 */

/** Decompiled **/
long long fileLoad(const char *a1, void *a2, int a3)
{
  int v4;
  FILE *stream;
  unsigned int v6;
  v4 = a3;
  v6 = -1;
  stream = fopen(a1, "rb");
  if (stream)
  {
    v6 = fread(a2, 1uLL, v4, stream);
    fclose(stream);
  }

  return v6;
}


/** Original **/
int fileLoad(char *path, char *buffer, int count)
{
  FILE *file;
  int n = -1;
  file = fopen(path, "rb");
  if (file != 0)
  {
    n = fread(buffer, 1, count, file);
    fclose(file);
  }

  return n;
}




/*
 * Example 67
 * File: idioms_data_copy/data_0013.pkl
 * Shard 13, Index 1398
 * Source: ade-verd/corewar
 */

/** Decompiled **/
long long max_liveslast(long long a1)
{
  long long result;
  int v2;
  long long v3;
  long long v4;
  v2 = 0;
  v4 = *((_QWORD *) (a1 + 17496));
  v3 = 0LL;
  while (v4)
  {
    if (v3)
    {
      if ((*((_DWORD *) (v4 + 2216))) >= (*((_DWORD *) (v3 + 2216))))
      {
        if ((*((_DWORD *) (v4 + 2216))) == (*((_DWORD *) (v3 + 2216))))
        {
          ++v2;
        }
        else
        {
          v2 = 0;
          v3 = v4;
        }

      }

    }
    else
    {
      v3 = v4;
    }

    v4 = *((_QWORD *) (v4 + 2224));
  }

  if (v2)
    result = 0LL;
  else
    result = v3;

  return result;
}


/** Original **/
static t_player *max_liveslast(t_env *env)
{
  t_player *p;
  t_player *winner;
  int equals;
  equals = 0;
  p = env->player;
  winner = 0;
  while (p)
  {
    if (!winner)
      winner = p;
    else
      if (p->lives_last >= winner->lives_last)
    {
      if (p->lives_last == winner->lives_last)
        equals++;
      else
      {
        equals = 0;
        winner = p;
      }

    }


    p = p->next;
  }

  return (equals) ? (0) : (winner);
}




/*
 * Example 68
 * File: idioms_data_copy/data_0013.pkl
 * Shard 13, Index 2166
 * Source: locuslab/mixing
 */

/** Decompiled **/
signed long long is_int(_BYTE *a1)
{
  _BYTE *i;
  if ((!a1) || (!(*a1)))
    return 0LL;

  if (((*a1) != 45) && (!((*__ctype_b_loc())[(char) (*a1)] & 0x800)))
    return 0LL;

  for (i = a1 + 1; *i; ++i)
  {
    if (!((*__ctype_b_loc())[(char) (*i)] & 0x800))
      return 0LL;

  }

  return 1LL;
}


/** Original **/
int is_int(char *s)
{
  if ((!s) || ((*s) == '\0'))
    return 0;

  if (((*s) != '-') && (!isdigit(*s)))
    return 0;

  s++;
  for (; *s; s++)
  {
    if (!isdigit(*s))
      return 0;

  }

  return 1;
}




/*
 * Example 69
 * File: idioms_data_copy/data_0013.pkl
 * Shard 13, Index 3876
 * Source: qiupq/kernel-xillinx
 */

/** Decompiled **/
long long starteventlog(int a1)
{
  int v1;
  int v2;
  v1 = *((_DWORD *) ((unsigned int) (baseaddr + 768)));
  *((_DWORD *) ((unsigned int) (baseaddr + 1024))) = a1;
  v2 = v1;
  BYTE1(v2) |= 1u;
  *((_DWORD *) ((unsigned int) (baseaddr + 768))) = v2;
  return 0LL;
}


/** Original **/
int starteventlog(u32 flagenables)
{
  u32 regval;
  regval = *((u32 *) (baseaddr + 0x0300));
  *((u32 *) (baseaddr + 0x0400)) = flagenables;
  *((u32 *) (baseaddr + 0x0300)) = regval | 0x00000100;
  return 0;
}




/*
 * Example 70
 * File: idioms_data_copy/data_0013.pkl
 * Shard 13, Index 4578
 * Source: wy4515/CSAPP
 */

/** Decompiled **/
void *mm_calloc(long long a1, long long a2)
{
  void *s;
  s = (void *) mm_malloc(a2 * a1, a2);
  memset(s, 0, a2 * a1);
  return s;
}


/** Original **/
void *mm_calloc(size_t nmemb, size_t size)
{
  size_t bytes = nmemb * size;
  void *newptr;
  newptr = mm_malloc(bytes);
  memset(newptr, 0, bytes);
  return newptr;
}




/*
 * Example 71
 * File: idioms_data_copy/data_0013.pkl
 * Shard 13, Index 5317
 * Source: carld/tinyscheme
 */

/** Decompiled **/
signed long long readstr_upto(long long a1, long long a2)
{
  char v2;
  _BYTE *v3;
  _BYTE *v5;
  v5 = (_BYTE *) (a1 + 3882);
  do
  {
    if (((unsigned long long) (&v5[(-a1) - 3882])) > 0xFF)
      break;

    v2 = inchar(a1);
    v3 = v5++;
    *v3 = v2;
  }
  while (!((unsigned int) is_one_of(a2, (unsigned int) ((char) (*v3)))));
  if ((v5 != ((_BYTE *) (a1 + 3884))) || ((*(v5 - 2)) != 92))
  {
    backchar(a1, (char) (*(v5 - 1)));
    *(v5 - 1) = 0;
  }
  else
  {
    *v5 = 0;
  }

  return a1 + 3882;
}


/** Original **/
static char *readstr_upto(scheme *sc, char *delim)
{
  char *p = sc->strbuff;
  while (((p - sc->strbuff) < (sizeof(sc->strbuff))) && (!is_one_of(delim, *(p++) = inchar(sc))))
    ;

  if ((p == (sc->strbuff + 2)) && (p[-2] == '\\'))
  {
    *p = 0;
  }
  else
  {
    backchar(sc, p[-1]);
    *(--p) = '\0';
  }

  return sc->strbuff;
}




/*
 * Example 72
 * File: idioms_data_copy/data_0013.pkl
 * Shard 13, Index 9145
 * Source: nsavry/nm-otool
 */

/** Decompiled **/
_BYTE *ft_strrchr(_BYTE *a1, char a2)
{
  _BYTE *result;
  long long i;
  for (i = ft_strlen(a1); i; --i)
  {
    if (a1[i] == a2)
      return &a1[i];

  }

  if ((*a1) == a2)
    result = a1;
  else
    result = 0LL;

  return result;
}


/** Original **/
char *ft_strrchr(const char *str, int c)
{
  size_t len;
  len = ft_strlen(str);
  while (len != 0)
  {
    if (str[len] == ((char) c))
      return (char *) (&str[len]);

    len--;
  }

  if (str[0] == ((char) c))
    return (char *) str;

  return 0;
}




/*
 * Example 73
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 1483
 * Source: PhoneX-Security/OpenSIPS
 */

/** Decompiled **/
long long slinkedl_list_destroy(long long *a1)
{
  long long result;
  long long i;
  if (a1)
  {
    for (i = *a1; i; i = *a1)
    {
      *a1 = *((_QWORD *) (i + 8));
      ((void (*)(long long)) a1[3])(i);
    }

    result = ((long long (*)(long long *)) a1[3])(a1);
  }

  return result;
}


/** Original **/
void slinkedl_list_destroy(slinkedl_list_t *list)
{
  slinkedl_element_t *element;
  slinkedl_dealloc_f *dealloc;
  if (!list)
    return;

  element = list->head;
  while (element)
  {
    list->head = element->next;
    list->dealloc(element);
    element = list->head;
  }

  dealloc = list->dealloc;
  (*dealloc)(list);
  return;
}




/*
 * Example 74
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 2709
 * Source: fnuecke/Undertaker
 */

/** Decompiled **/
long long undefinedIndexWarning(long long a1)
{
  signed long long v1;
  long long v2;
  v1 = fileNameFromPath("script.c");
  fprintf(MP_logTarget, "%s:%s:%d: ", "WARNING", v1, 19LL);
  v2 = luaL_checklstring(a1, 2LL, 0LL);
  fprintf(MP_logTarget, "Tried to access undefined global '%s'.\n", v2);
  fflush(MP_logTarget);
  return 0LL;
}


/** Original **/
static int undefinedIndexWarning(lua_State *L)
{
  fprintf(MP_logTarget, "%s:%s:%d: ", "WARNING", fileNameFromPath("script.c"), 19);
  fprintf(MP_logTarget, "Tried to access undefined global '%s'.\n", luaL_checklstring(L, 2, 0));
  fflush(MP_logTarget);
  return 0;
}




/*
 * Example 75
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 3212
 * Source: atinm/mg-portable
 */

/** Decompiled **/
long long grep_init()
{
  funmap_add(compile_goto_error, "compile-goto-error");
  funmap_add(next_error, "next-error");
  funmap_add(grep, "grep");
  funmap_add(compile, "compile");
  funmap_add(gid, "gid");
  return maps_add(&compilemap, "compile");
}


/** Original **/
void grep_init(void)
{
  funmap_add(compile_goto_error, "compile-goto-error");
  funmap_add(next_error, "next-error");
  funmap_add(grep, "grep");
  funmap_add(compile, "compile");
  funmap_add(gid, "gid");
  maps_add((KEYMAP *) (&compilemap), "compile");
}




/*
 * Example 76
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 3511
 * Source: cclehui/studyc
 */

/** Decompiled **/
int exec_command(long long a1)
{
  trim(a1, "\n\r ");
  return printf("your inputed command is :\x1B[0;31m %s\n\x1B[0m", a1);
}


/** Original **/
void exec_command(char *command)
{
  trim(command, "\n\r ");
  printf("your inputed command is :\033[0;31m %s\n\033[0m", command);
}




/*
 * Example 77
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 3887
 * Source: JohnnyonFlame/gcw0-jfaudiolib
 */

/** Decompiled **/
long long SoundDriver_MIDI_Init(long long a1, long long a2)
{
  return ((long long (*)(long long, long long)) (*((&off_640) + (23 * ASS_MIDISoundDriver))))(a1, a2);
}


/** Original **/
int SoundDriver_MIDI_Init(midifuncs *funcs, const char *params)
{
  return SoundDrivers[ASS_MIDISoundDriver].MIDI_Init(funcs, params);
}




/*
 * Example 78
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 4697
 * Source: FedericoCeratto/debian-nim
 */

/** Decompiled **/
void compiler_dependsDatInit000()
{
  NTI577006[0x20000000] = 24LL;
  LOBYTE(NTI577006[1]) = 17;
  NTI577006[2] = (long long) (&NTI343002);
  T2841479672_0_2645 = 1;
  qword_508 = 16LL;
  qword_510 = (long long) (&NTI294800);
  qword_518 = (long long) "module";
  NTI577006[3] = (long long) (&T2841479672_0_2645);
  NTI577008[0x20000000] = 8LL;
  LOBYTE(NTI577008[1]) = 22;
  NTI577008[2] = (long long) NTI577006;
  NTI577008[5] = (long long) T2841479672_3;
}


/** Original **/
void compiler_dependsDatInit000(void)
{
  static TNimNode T2841479672_0[1];
  NTI577006.size = sizeof(Tgen577006);
  NTI577006.kind = 17;
  NTI577006.base = &NTI343002;
  T2841479672_0[0].kind = 1;
  T2841479672_0[0].offset = offsetof(Tgen577006, module);
  T2841479672_0[0].typ = &NTI294800;
  T2841479672_0[0].name = "module";
  NTI577006.node = &T2841479672_0[0];
  NTI577008.size = sizeof(Tgen577006 *);
  NTI577008.kind = 22;
  NTI577008.base = &NTI577006;
  NTI577008.marker = T2841479672_3;
}




/*
 * Example 79
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 5065
 * Source: FedericoCeratto/debian-nim
 */

/** Decompiled **/
_QWORD *neweio_157802_1780494535(long long a1)
{
  long long v2;
  _QWORD *v3;
  v3 = (_QWORD *) newObj(&NTI81072, 40LL);
  *v3 = &NTI3628;
  v2 = v3[3];
  v3[3] = copyStringRC1(a1);
  if (v2)
    nimGCunrefNoCycle(v2);

  return v3;
}


/** Original **/
Ioerror3628 *neweio_157802_1780494535(NimStringDesc *msg0)
{
  Ioerror3628 *result0;
  NimStringDesc *LOC1;
  result0 = (Ioerror3628 *) 0;
  result0 = (Ioerror3628 *) newObj(&NTI81072, sizeof(Ioerror3628));
  (*result0).Sup.Sup.Sup.m_type = &NTI3628;
  LOC1 = (NimStringDesc *) 0;
  LOC1 = (*result0).Sup.Sup.message;
  (*result0).Sup.Sup.message = copyStringRC1(msg0);
  if (LOC1)
    nimGCunrefNoCycle(LOC1);

  return result0;
}




/*
 * Example 80
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 5398
 * Source: Harvie/Programs
 */

/** Decompiled **/
long long getgid()
{
  srand(0x17u);
  printf("%s();\n", "getgid");
  return 0LL;
}


/** Original **/
gid_t getgid(void)
{
  {
    srand(23);
    printf("%s();\n", __func__);
  }
  ;
  return (gid_t) 0;
}




/*
 * Example 81
 * File: idioms_data_copy/data_0014.pkl
 * Shard 14, Index 7318
 * Source: jabberd2/transports
 */

/** Decompiled **/
long long xmlnode_get_name(long long *a1)
{
  long long result;
  if (a1)
    result = *a1;
  else
    result = 0LL;

  return result;
}


/** Original **/
char *xmlnode_get_name(xmlnode node)
{
  if (node != 0)
    return node->name;

  return 0;
}




/*
 * Example 82
 * File: idioms_data_copy/data_0015.pkl
 * Shard 15, Index 1472
 * Source: destimon/boroff-shell
 */

/** Decompiled **/
long long ft_memcpy(long long a1, long long a2, unsigned long long a3)
{
  unsigned long long i;
  for (i = 0LL; i < a3; ++i)
    *((_BYTE *) (a1 + i)) = *((_BYTE *) (a2 + i));

  return a1;
}


/** Original **/
void *ft_memcpy(void *dst, const void *src, size_t n)
{
  size_t i;
  char *d;
  const char *s;
  i = 0;
  d = (char *) dst;
  s = (char *) src;
  while (i < n)
  {
    d[i] = s[i];
    i++;
  }

  return (void *) dst;
}




/*
 * Example 83
 * File: idioms_data_copy/data_0015.pkl
 * Shard 15, Index 2559
 * Source: xnavratil/Prohledavani-dat-z-projektu-DIMES
 */

/** Decompiled **/
long long node_compare(const void *a1, const void *a2)
{
  return (unsigned int) ((*(*((_DWORD **) a1))) - (*(*((_DWORD **) a2))));
}


/** Original **/
static int node_compare(const void *a, const void *b)
{
  const Node *n1 = *((Node **) a);
  const Node *n2 = *((Node **) b);
  return n1->id - n2->id;
}




/*
 * Example 84
 * File: idioms_data_copy/data_0015.pkl
 * Shard 15, Index 6503
 * Source: tfb34/Indexer
 */

/** Decompiled **/
int free_items(_QWORD *a1)
{
  void *ptr;
  _QWORD *v3;
  v3 = a1;
  while (v3)
  {
    ptr = v3;
    v3 = (_QWORD *) v3[2];
    free(ptr);
    puts("freed");
  }

  return puts("list is empty");
}


/** Original **/
void free_items(Item root)
{
  Item head = root;
  Item temp;
  while (head != 0)
  {
    temp = head;
    head = head->next;
    free(temp);
    puts("freed");
  }

  root = 0;
  puts("list is empty");
  return;
}




/*
 * Example 85
 * File: idioms_data_copy/data_0015.pkl
 * Shard 15, Index 6935
 * Source: lukesalisbury/meg
 */

/** Decompiled **/
signed long long compare_consttable(long long **a1, long long **a2)
{
  long long *i;
  long long *v4;
  if ((!a1) && (!a2))
    return 1LL;

  if ((!a1) || (!a2))
    return 0LL;

  v4 = *a1;
  for (i = *a2; v4 && i; i = (long long *) (*i))
  {
    if (((*(((_DWORD *) v4) + 12)) != (*(((_DWORD *) i) + 12))) || (v4[5] != i[5]))
      return 0LL;

    if (strcmp(((const char *) v4) + 8, ((const char *) i) + 8))
      return 0LL;

    v4 = (long long *) (*v4);
  }

  return 1LL;
}


/** Original **/
int compare_consttable(constvalue *table1, constvalue *table2)
{
  constvalue *cur1;
  constvalue *cur2;
  if ((table1 == 0) && (table2 == 0))
    return 1;
  else
    if ((table1 == 0) || (table2 == 0))
    return 0;


  assert((table1 != 0) && (table2 != 0));
  cur1 = table1->next;
  cur2 = table2->next;
  while ((cur1 != 0) && (cur2 != 0))
  {
    if ((cur1->index != cur2->index) || (cur1->value != cur2->value))
      return 0;

    if (strcmp(cur1->name, cur2->name) != 0)
      return 0;

    cur1 = cur1->next;
    cur2 = cur2->next;
  }

  return 1;
}




/*
 * Example 86
 * File: idioms_data_copy/data_0015.pkl
 * Shard 15, Index 7606
 * Source: dburggie/libbigint
 */

/** Decompiled **/
_QWORD *newBigInt()
{
  _QWORD *result;
  long long v1;
  _QWORD *ptr;
  ptr = malloc(0x18uLL);
  if (!ptr)
    return 0LL;

  v1 = newChunk(24LL);
  if (v1)
  {
    *ptr = v1;
    ptr[1] = v1;
    *(((_DWORD *) ptr) + 4) = 1;
    *(((_DWORD *) ptr) + 5) = 1;
    *((_OWORD *) v1) = 0uLL;
    *((_DWORD *) (v1 + 16)) = 1;
    *((_DWORD *) (v1 + 20)) = 0;
    result = ptr;
  }
  else
  {
    free(ptr);
    result = 0LL;
  }

  return result;
}


/** Original **/
BigInt *newBigInt(void)
{
  BigInt *self = (BigInt *) malloc(sizeof(BigInt));
  if (!self)
  {
    return 0;
  }

  Chunk *chunk = newChunk();
  if (!chunk)
  {
    free(self);
    return 0;
  }

  self->first = chunk;
  self->last = chunk;
  self->parity = 1;
  self->length = 1;
  chunk->prev = 0;
  chunk->next = 0;
  chunk->length = 1;
  chunk->value[0] = 0;
  return self;
}




/*
 * Example 87
 * File: idioms_data_copy/data_0015.pkl
 * Shard 15, Index 9494
 * Source: urbit/archaeology
 */

/** Decompiled **/
signed long long bpt_branching_chunk(_DWORD *a1)
{
  signed long long result;
  if (!a1)
    _assert_fail("bpt", "outside/bpt/bitmapped_patricia_tree.c", 0x1ADu, "bpt_branching_chunk");

  if (*a1)
    result = (unsigned int) a1[4];
  else
    result = 7LL;

  return result;
}


/** Original **/
inline static unsigned int bpt_branching_chunk(bpt_t bpt)
{
  assert(bpt);
  if (bpt->tag == BPT_LEAF)
  {
    return 7;
  }
  else
  {
    return ((bpt_node_t) bpt)->branching_chunk;
  }

}




/*
 * Example 88
 * File: idioms_data_copy/data_0016.pkl
 * Shard 16, Index 259
 * Source: CingHu/code
 */

/** Decompiled **/
signed int *string_list_new()
{
  signed int *ptr;
  ptr = (signed int *) malloc(0x10uLL);
  if (!ptr)
    return 0LL;

  *ptr = 0;
  ptr[1] = 256;
  *(((_QWORD *) ptr) + 1) = malloc(8LL * ptr[1]);
  if (*(((_QWORD *) ptr) + 1))
    return ptr;

  free(ptr);
  return 0LL;
}


/** Original **/
string_list_t *string_list_new(void)
{
  string_list_t *l;
  l = malloc(sizeof(string_list_t));
  if (l == 0)
    return 0;

  l->count = 0;
  l->maxcount = 256;
  l->data = malloc(l->maxcount * (sizeof(char *)));
  if (l->data == 0)
  {
    free(l);
    return 0;
  }

  return l;
}




/*
 * Example 89
 * File: idioms_data_copy/data_0016.pkl
 * Shard 16, Index 504
 * Source: alexghita96/Star-Simulator
 */

/** Decompiled **/
long long render()
{
  int i;
  glMatrixMode();
  glLoadIdentity();
  glMatrixMode();
  glClear();
  glLoadIdentity();
  for (i = 0; i < N; ++i)
  {
    glPushMatrix();
    glTranslatef();
    glColor3f();
    glBegin();
    glVertex3f();
    glVertex3f();
    glVertex3f();
    glVertex3f();
    glEnd();
    glPopMatrix();
  }

  return glutSwapBuffers();
}


/** Original **/
void render()
{
  glMatrixMode(0x1701);
  glLoadIdentity();
  glMatrixMode(0x1700);
  glClear(0x00004000 | 0x00000100);
  glLoadIdentity();
  for (int i = 0; i < N; i++)
  {
    glPushMatrix();
    glTranslatef(x[i], y[i], z[i]);
    glColor3f(c[(3 * i) + 0], c[(3 * i) + 1], c[(3 * i) + 2]);
    glBegin(0x0007);
    glVertex3f((-m[i]) * 0.01f, (-m[i]) * 0.01f, 0);
    glVertex3f((-m[i]) * 0.01f, m[i] * 0.01f, 0);
    glVertex3f(m[i] * 0.01f, m[i] * 0.01f, 0);
    glVertex3f(m[i] * 0.01f, (-m[i]) * 0.01f, 0);
    glEnd();
    glPopMatrix();
  }

  glutSwapBuffers();
  return;
}




/*
 * Example 90
 * File: idioms_data_copy/data_0016.pkl
 * Shard 16, Index 2050
 * Source: Taiwing/ft_select
 */

/** Decompiled **/
long long valid_type(int a1, int a2)
{
  switch (a1)
  {
    case 0:
      return a2 == 0;

    case 1:
      return a2 & 1;

    case 2:
      return a2 & 2;

    case 4:
      return a2 & 4;

    case 6:
      return a2 & 8;

    case 8:
      return a2 & 0x10;

    case 10:
      return a2 & 0x20;

    case 12:
      return a2 & 0x40;

    case 14:
      return a2 & 0x80;

  }

  return 0LL;
}


/** Original **/
static int valid_type(int file_type, int type)
{
  if (file_type == DT_UNKNOWN)
    return !type;

  if (file_type == DT_FIFO)
    return type & 0x01;
  else
    if (file_type == DT_CHR)
    return type & 0x02;
  else
    if (file_type == DT_DIR)
    return type & 0x04;
  else
    if (file_type == DT_BLK)
    return type & 0x08;
  else
    if (file_type == DT_REG)
    return type & 0x10;
  else
    if (file_type == DT_LNK)
    return type & 0x20;
  else
    if (file_type == DT_SOCK)
    return type & 0x40;
  else
    if (file_type == DT_WHT)
    return type & 0x80;








  return 0;
}




/*
 * Example 91
 * File: idioms_data_copy/data_0016.pkl
 * Shard 16, Index 5012
 * Source: zzy7896321/ppp
 */

/** Decompiled **/
_QWORD *new_symbol_table()
{
  _QWORD *v0;
  _QWORD *v1;
  v0 = malloc(0x18uLL);
  v1 = v0;
  *((_DWORD *) v0) = 0;
  v0[1] = new_symbol_table_vector(16);
  v1[2] = new_symbol_table_hash_map(16, 0.80000001);
  return v1;
}


/** Original **/
symbol_table_t *new_symbol_table()
{
  symbol_table_t *symbol_table = malloc(sizeof(symbol_table_t));
  symbol_table->last_symbol = 0;
  symbol_table->symbols = new_symbol_table_vector(16);
  symbol_table->hmap = new_symbol_table_hash_map(16, 0.8);
  return symbol_table;
}




/*
 * Example 92
 * File: idioms_data_copy/data_0016.pkl
 * Shard 16, Index 5922
 * Source: mafalb/ex-vi
 */

/** Decompiled **/
long long vfixcurs()
{
  return vsetcurs(cursor);
}


/** Original **/
void vfixcurs(void)
{
  vsetcurs(cursor);
}




/*
 * Example 93
 * File: idioms_data_copy/data_0017.pkl
 * Shard 17, Index 1312
 * Source: Adream-Studio/MyLittleCPublicLibrary
 */

/** Decompiled **/
_DWORD *getInput(_DWORD *a1)
{
  _DWORD *result;
  int v2;
  v2 = getchar();
  if (v2 == 32)
  {
    result = a1;
    a1[1] = 1;
  }
  else
  {
    *a1 = v2 - 48;
    result = a1;
    a1[1] = 0;
  }

  return result;
}


/** Original **/
void getInput(bt_elem_type *buffer)
{
  int temp = getchar();
  if (temp != ' ')
  {
    buffer->data = temp - '0';
    buffer->isNull = 0;
  }
  else
  {
    buffer->isNull = 1;
  }

}




/*
 * Example 94
 * File: idioms_data_copy/data_0017.pkl
 * Shard 17, Index 3998
 * Source: Starlink/mesa
 */

/** Decompiled **/
long long OSMESA_CONTEXT(long long a1)
{
  return a1;
}


/** Original **/
inline static OSMesaContext OSMESA_CONTEXT(GLcontext *ctx)
{
  return (OSMesaContext) ctx;
}




/*
 * Example 95
 * File: idioms_data_copy/data_0017.pkl
 * Shard 17, Index 5046
 * Source: Starlink/mesa
 */

/** Decompiled **/
long long NoOpGenerateMipmapEXT()
{
  long long result;
  result = warn();
  if ((_BYTE) result)
    result = warning_func(0LL, "GL User Error: called without context: %s");

  return result;
}


/** Original **/
static void NoOpGenerateMipmapEXT(GLenum target)
{
  if (warn())
  {
    warning_func(0, "GL User Error: called without context: %s", "GenerateMipmapEXT");
  }

  ;
}




/*
 * Example 96
 * File: idioms_data_copy/data_0017.pkl
 * Shard 17, Index 6761
 * Source: Starlink/mesa
 */

/** Decompiled **/
void init_trans_4_GLint_raw()
{
  qword_8D40 = (long long) trans_4_GLint_4ub_raw;
  qword_8F00 = (long long) trans_4_GLint_4us_raw;
  qword_90C0 = (long long) trans_4_GLint_4f_raw;
  qword_9280 = (long long) trans_4_GLint_4fn_raw;
}


/** Original **/
static void init_trans_4_GLint_raw(void)
{
  _math_trans_4ub_tab[4][0x1404 & 0xf] = trans_4_GLint_4ub_raw;
  _math_trans_4us_tab[4][0x1404 & 0xf] = trans_4_GLint_4us_raw;
  _math_trans_4f_tab[4][0x1404 & 0xf] = trans_4_GLint_4f_raw;
  _math_trans_4fn_tab[4][0x1404 & 0xf] = trans_4_GLint_4fn_raw;
}




/*
 * Example 97
 * File: idioms_data_copy/data_0018.pkl
 * Shard 18, Index 959
 * Source: penghui2103/P36
 */

/** Decompiled **/
float *psycho_1_fft(float *a1, float *a2, int a3)
{
  float *result;
  int v4;
  int v5;
  int v6;
  v4 = a3;
  fht(a1);
  *a2 = (*a1) * (*a1);
  v6 = 1;
  v5 = v4 - 1;
  while (v6 < (v4 / 2))
  {
    a2[v6] = ((float) (((float) (a1[v5] * a1[v5])) + ((float) (a1[v6] * a1[v6])))) / 2.0;
    ++v6;
    --v5;
  }

  result = &a2[v4 / 2];
  *result = a1[v4 / 2] * a1[v4 / 2];
  return result;
}


/** Original **/
void psycho_1_fft(float *x_real, float *energy, int N)
{
  float a;
  float b;
  int i;
  int j;
  fht(x_real);
  energy[0] = x_real[0] * x_real[0];
  for (i = 1, j = N - 1; i < (N / 2); i++, j--)
  {
    a = x_real[i];
    b = x_real[j];
    energy[i] = ((a * a) + (b * b)) / 2.0;
  }

  energy[N / 2] = x_real[N / 2] * x_real[N / 2];
}




/*
 * Example 98
 * File: idioms_data_copy/data_0018.pkl
 * Shard 18, Index 1572
 * Source: fhemart/42sh
 */

/** Decompiled **/
signed long long ft_atoll(char *a1)
{
  char *v1;
  int v2;
  char *v3;
  char *i;
  int v6;
  signed long long v7;
  for (i = a1; (unsigned int) ft_isspace((unsigned int) (*i)); ++i)
    ;

  if (((*i) != 43) && ((*i) != 45))
  {
    v2 = 1;
  }
  else
  {
    v1 = i++;
    v2 = 44 - (*v1);
  }

  v6 = v2;
  v7 = 0LL;
  while ((unsigned int) ft_isdigit((unsigned int) (*i)))
  {
    v3 = i++;
    v7 = ((10 * v7) + (*v3)) - 48;
  }

  return v7 * v6;
}


/** Original **/
long long ft_atoll(const char *str)
{
  long long result;
  int sign;
  while (ft_isspace((int) (*str)))
    str++;

  sign = (((*str) == '+') || ((*str) == '-')) ? (44 - (*(str++))) : (1);
  result = 0;
  while (ft_isdigit(*str))
    result = (result * 10) + ((*(str++)) - '0');

  return result * sign;
}




/*
 * Example 99
 * File: idioms_data_copy/data_0018.pkl
 * Shard 18, Index 2977
 * Source: OpenInkpot-archive/iplinux-antiword
 */

/** Decompiled **/
signed long long bAddTableRow(long long a1, long long a2, unsigned int a3, long long a4, unsigned char a5)
{
  if (eConversionType != 4)
    return 0LL;

  vAddTableRowXML(a1, a2, a3, a4, a5);
  return 1LL;
}


/** Original **/
int bAddTableRow(diagram_type *pDiag, char **aszColTxt, int iNbrOfColumns, const short *asColumnWidth, UCHAR ucBorderInfo)
{
  switch (eConversionType)
  {
    case conversion_text:

    case conversion_fmt_text:
      break;

    case conversion_ps:
      break;

    case conversion_xml:
      vAddTableRowXML(pDiag, aszColTxt, iNbrOfColumns, asColumnWidth, ucBorderInfo);
      return 1;

    case conversion_pdf:
      break;

    default:
      ;
      break;

  }

  return 0;
}




