/* Entry 0x08899688 | file offset 0x00096660 | FUN_08899688 | bytes 104 */

void FUN_08899688(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_088992b0();
  FUN_08898ee8(iVar1);
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    iVar2 = iVar2 + 0x108;
    FUN_08898ee8(iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 1);
  *(undefined4 *)(iVar1 + 0x210) = 0xffffffff;
  return;
}

