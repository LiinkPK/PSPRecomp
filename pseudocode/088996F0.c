/* Entry 0x088996F0 | file offset 0x000966C8 | FUN_088996f0 | bytes 104 */

void FUN_088996f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_088992b0();
  FUN_08898f5c(iVar1);
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    iVar2 = iVar2 + 0x108;
    FUN_08898f5c(iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 1);
  *(undefined4 *)(iVar1 + 0x210) = 0xffffffff;
  return;
}

