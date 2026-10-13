/* Entry 0x088F7A70 | file offset 0x000F4A48 | FUN_088f7a70 | bytes 220 */

undefined4 FUN_088f7a70(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_1 + param_2 * 0x1270;
  if (*(int *)(iVar3 + 0x15ee0) == 0) {
    iVar6 = *(int *)(param_1 + 0x139f0);
    iVar5 = 0;
    if (0 < iVar6) {
      iVar4 = param_1 + 0x13f0;
      do {
        iVar1 = FUN_088f5e80(iVar4 + 0x10,iVar3 + 0x14c80);
        if (iVar1 == 1) {
          uVar2 = FUN_089099d8(param_1,iVar5,param_3);
          return uVar2;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x1260;
      } while (iVar5 < iVar6);
    }
  }
  return 0;
}

