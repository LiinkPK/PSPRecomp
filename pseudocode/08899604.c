/* Entry 0x08899604 | file offset 0x000965DC | FUN_08899604 | bytes 132 */

void FUN_08899604(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_088992b0();
  FUN_08898df8(iVar1,param_1);
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    iVar2 = iVar2 + 0x108;
    FUN_08898df8(iVar2,param_1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 1);
  *(undefined4 *)(iVar1 + 0x210) = 0xffffffff;
  return;
}

