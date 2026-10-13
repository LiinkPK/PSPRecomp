/* Entry 0x089428F8 | file offset 0x0013F8D0 | FUN_089428f8 | bytes 160 */

undefined4 FUN_089428f8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*param_1 + 0x20);
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      uVar1 = FUN_08941d40(param_2,*(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x30) + iVar2));
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x30) + iVar2 + 4) = uVar1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < iVar4);
  }
  return 1;
}

