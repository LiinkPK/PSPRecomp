/* Entry 0x08916C34 | file offset 0x00113C0C | FUN_08916c34 | bytes 176 */

undefined4 FUN_08916c34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x68) == 2) &&
     (iVar1 = FUN_088374b0(*(undefined4 *)(param_1 + 0x6d0)), iVar1 == 0)) {
    if (((**(int **)(*(int *)(param_1 + 0x6d0) + 0x3a4) == 0) &&
        (((iVar1 = FUN_088377c0(), iVar1 == 0 &&
          (iVar1 = func_0x08b333c8(*(undefined4 *)(param_1 + 0x6d0)), iVar1 == 0)) &&
         (*(char *)(param_1 + 0x9d) == '\0')))) &&
       ((iVar1 = func_0x08b45768(*(undefined4 *)(param_1 + 0x8c)), iVar1 == 0 &&
        (*(char *)(*(int *)(param_1 + 0x88) + 0x284) == '\0')))) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

