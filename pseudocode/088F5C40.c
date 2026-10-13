/* Entry 0x088F5C40 | file offset 0x000F2C18 | FUN_088f5c40 | bytes 256 */

void FUN_088f5c40(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = param_4 + 4 + *(short *)(param_5 + 0xf0) * 0x48;
  iVar4 = (int)*(short *)(iVar2 + 2);
  FUN_088f4f3c(param_1);
  *(int *)(param_1 + 0xe38) = iVar4;
  FUN_08935524(param_1 + 0xe3c,iVar2 + 4,0x1a);
  iVar1 = 0;
  if (0 < iVar4) {
    puVar3 = (undefined4 *)(iVar2 + 0x20);
    do {
      iVar2 = FUN_088cb164(param_2,*puVar3);
      FUN_088f5ba4(param_1,param_2,param_3,iVar1,*puVar3,(int)*(char *)(iVar2 + 0x774),
                   (int)*(char *)(param_5 + 0xe8 + iVar1),puVar3[1]);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 2;
      param_1 = param_1 + 0x2d8;
    } while (iVar1 < iVar4);
  }
  return;
}

