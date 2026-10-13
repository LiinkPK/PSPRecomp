/* Entry 0x08990CA0 | file offset 0x0018DC78 | FUN_08990ca0 | bytes 120 */

undefined4 FUN_08990ca0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_089a5244();
  uVar3 = 0;
  iVar2 = DAT_089da420;
  while (((uVar1 & 1) != 0 || (*(int *)(iVar2 + 0x19c) != param_1))) {
    uVar3 = uVar3 + 1;
    uVar1 = uVar1 >> 1;
    iVar2 = iVar2 + 0x3c;
    if (0x1f < uVar3) {
      return 1;
    }
  }
  return 0;
}

