/* Entry 0x08971BEC | file offset 0x0016EBC4 | FUN_08971bec | bytes 160 */

undefined4 FUN_08971bec(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0899350c(700,8,&LAB_08971510,0,FUN_089c2688,0,0);
  param_1[1] = iVar1;
  FUN_089424a4(param_1,700);
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

