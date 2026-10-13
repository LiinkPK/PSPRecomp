/* Entry 0x088F53F4 | file offset 0x000F23CC | FUN_088f53f4 | bytes 144 */

void FUN_088f53f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x1a068) + -1;
  if (param_2 < iVar2) {
    iVar3 = param_1 + param_2 * 0x10a8;
    iVar1 = param_1 + param_2 * 0x10a8;
    do {
      iVar3 = iVar3 + 0x10a8;
      iVar4 = 0;
      iVar2 = 0x215;
      do {
        uVar5 = ((undefined4 *)(iVar3 + iVar4))[1];
        *(undefined4 *)(iVar1 + iVar4) = *(undefined4 *)(iVar3 + iVar4);
        ((undefined4 *)(iVar1 + iVar4))[1] = uVar5;
        iVar2 = iVar2 + -1;
        iVar4 = iVar4 + 8;
      } while (iVar2 != 0);
      param_2 = param_2 + 1;
      iVar2 = *(int *)(param_1 + 0x1a068) + -1;
      iVar1 = iVar1 + 0x10a8;
    } while (param_2 < iVar2);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x1a068) = iVar3;
  return;
}

