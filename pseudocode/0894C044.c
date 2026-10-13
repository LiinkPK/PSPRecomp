/* Entry 0x0894C044 | file offset 0x0014901C | FUN_0894c044 | bytes 152 */

undefined4 FUN_0894c044(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_2 + 0x40);
  uVar5 = (uint)*(byte *)(iVar4 + 8);
  uVar2 = 0;
  if (uVar5 != 0) {
    piVar6 = *(int **)(iVar4 + 0x1c);
    do {
      if (param_3 == *piVar6) break;
      uVar2 = uVar2 + 1;
      piVar6 = piVar6 + 1;
    } while ((int)uVar2 < (int)uVar5);
  }
  if (uVar2 == uVar5) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 0x4c) + uVar2 * 4);
    if (iVar3 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_0894bfe0((float)(int)*(short *)(iVar3 + 4),param_1,iVar4);
    }
  }
  return uVar1;
}

