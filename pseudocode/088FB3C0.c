/* Entry 0x088FB3C0 | file offset 0x000F8398 | FUN_088fb3c0 | bytes 116 */

void FUN_088fb3c0(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  puVar2 = &DAT_09afd960;
  iVar3 = 0;
  do {
    uVar1 = *puVar2;
    FUN_0887309c(iVar3,(uVar1 & 0x20) != 0,uVar1 & 1,(uVar1 & 2) != 0,(uVar1 & 0x40) == 0);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 2);
  return;
}

