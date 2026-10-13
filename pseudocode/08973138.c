/* Entry 0x08973138 | file offset 0x00170110 | FUN_08973138 | bytes 284 */

undefined4 FUN_08973138(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0899350c(200,8,&LAB_089c2d48,0,FUN_089c2688,0,0);
  param_1[1] = iVar1;
  FUN_089424a4(param_1,200);
  iVar3 = 0;
  iVar1 = 0;
  if (0 < param_1[5]) {
    iVar2 = 0;
    do {
      *(int *)(*param_1 + iVar2) = param_1[1] + iVar1;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 8;
      iVar2 = iVar2 + 4;
    } while (iVar3 < param_1[5]);
  }
  iVar1 = param_1[0x316];
  if (iVar1 != 0) {
    if (iVar1 < 0x8000) {
      param_1[0x316] = 0x8000;
      iVar1 = 0x8000;
    }
    iVar1 = FUN_089748f4(iVar1);
    param_1[0x314] = iVar1;
    FUN_08973f94(param_1 + 0xc,iVar1,param_1[0x316]);
  }
  if (param_1[0x317] != 0) {
    if (param_1[0x317] < 0x400) {
      param_1[0x317] = 0x400;
    }
    iVar1 = FUN_089748f4();
    param_1[0x315] = iVar1;
    FUN_08973f94(param_1 + 400,iVar1,param_1[0x317]);
  }
  return 1;
}

