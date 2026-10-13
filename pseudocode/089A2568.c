/* Entry 0x089A2568 | file offset 0x0019F540 | FUN_089a2568 | bytes 88 */

void FUN_089a2568(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_09af7134;
  iVar2 = DAT_09af7130;
  bVar1 = DAT_09af7134 != 0;
  (&DAT_09af7140)[DAT_09af7130 * 3] = DAT_09af7134;
  if (bVar1) {
    FUN_089a04f4(iVar2,iVar3);
  }
  return;
}

