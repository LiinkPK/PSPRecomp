/* Entry 0x088F7BA0 | file offset 0x000F4B78 | FUN_088f7ba0 | bytes 208 */

undefined4 FUN_088f7ba0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_2 < *(int *)(param_1 + 0x31968)) &&
     (*(int *)(param_1 + param_2 * 0x1270 + 0x15ee0) == 1)) {
    iVar3 = *(int *)(param_1 + 0x31968) + -1;
    if (param_2 < iVar3) {
      iVar1 = param_1 + param_2 * 0x1270;
      iVar2 = iVar1 + 0x14c78;
      iVar1 = iVar1 + 0x15ee8;
      do {
        iVar4 = 0;
        iVar3 = 0x24e;
        do {
          uVar5 = ((undefined4 *)(iVar1 + iVar4))[1];
          *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(iVar1 + iVar4);
          ((undefined4 *)(iVar2 + iVar4))[1] = uVar5;
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 + 8;
        } while (iVar3 != 0);
        param_2 = param_2 + 1;
        iVar3 = *(int *)(param_1 + 0x31968) + -1;
        iVar2 = iVar2 + 0x1270;
        iVar1 = iVar1 + 0x1270;
      } while (param_2 < iVar3);
    }
    *(int *)(param_1 + 0x31968) = iVar3;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

