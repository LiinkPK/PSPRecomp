/* Entry 0x08971554 | file offset 0x0016E52C | FUN_08971554 | bytes 196 */

undefined4 FUN_08971554(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *param_1;
  iVar6 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    iVar5 = 0;
    do {
      piVar3 = (int *)(iVar2 + *(int *)(iVar2 + 0x10) + iVar5);
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        piVar3[1] = -1;
        iVar2 = *param_1;
        iVar4 = *(int *)(iVar2 + 0xc);
      }
      else {
        uVar1 = FUN_08941d40(param_2,iVar2);
        *(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x10) + iVar5 + 4) = uVar1;
        iVar2 = *param_1;
        iVar4 = *(int *)(iVar2 + 0xc);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x18;
    } while (iVar6 < iVar4);
  }
  return 1;
}

