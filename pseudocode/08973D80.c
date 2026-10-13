/* Entry 0x08973D80 | file offset 0x00170D58 | FUN_08973d80 | bytes 160 */

undefined4 FUN_08973d80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0899350c(100,8,&LAB_089c2dac,0,FUN_089c2688,0,0);
  param_1[1] = iVar1;
  FUN_089424a4(param_1,100);
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
  return 1;
}

