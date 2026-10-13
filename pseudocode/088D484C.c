/* Entry 0x088D484C | file offset 0x000D1824 | FUN_088d484c | bytes 188 */

undefined4 FUN_088d484c(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = 0;
  if ((*(int *)(param_1 + 0xc) != param_2) || (param_3 != '\0')) {
    iVar1 = 0;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_088d4744(param_1);
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 <= *(int *)(param_1 + 4)) {
      *(int *)(param_1 + 4) = iVar1;
    }
    if ((iVar1 < *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) + -1) &&
       (iVar1 = (iVar1 - *(int *)(param_1 + 0x18)) + 1, *(int *)(param_1 + 0x10) = iVar1, iVar1 < 0)
       ) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  if (iVar3 != *(int *)(param_1 + 4)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

