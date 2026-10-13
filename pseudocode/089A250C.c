/* Entry 0x089A250C | file offset 0x0019F4E4 | FUN_089a250c | bytes 92 */

void FUN_089a250c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = DAT_09af7134;
  iVar3 = 0xf;
  puVar2 = DAT_09af7134;
  do {
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  puVar2 = &DAT_09af7168 + DAT_09af7130;
  puVar1[0xf] = 0x3f800000;
  *puVar2 = 1;
  *puVar1 = 0x3f800000;
  puVar1[5] = 0x3f800000;
  puVar1[10] = 0x3f800000;
  return;
}

