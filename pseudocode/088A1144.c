/* Entry 0x088A1144 | file offset 0x0009E11C | FUN_088a1144 | bytes 244 */

undefined4 FUN_088a1144(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar3 = FUN_088a0cb0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4));
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_088a0cf8(iVar3);
      FUN_08935524(iVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  if ((iVar2 == 0) ||
     (iVar2 = FUN_088a15b8(DAT_089d6c88,iVar2,*(undefined4 *)(param_1 + 0xc)), iVar2 == -1)) {
    uVar1 = 0;
  }
  else {
    *param_2 = iVar2;
    param_2[1] = iVar3;
    *(undefined1 *)(param_2 + 2) = 0;
    FUN_08935af8(param_2 + 2,*(undefined4 *)(param_1 + 4),0x1f);
    param_2[10] = 1;
    uVar1 = 1;
  }
  return uVar1;
}

