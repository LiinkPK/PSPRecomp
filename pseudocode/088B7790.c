/* Entry 0x088B7790 | file offset 0x000B4768 | FUN_088b7790 | bytes 144 */

undefined4 FUN_088b7790(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088b1d9c(param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(iVar1 + 6) == -1) {
    uVar2 = FUN_088b93c8(param_1,param_2,param_3);
  }
  else {
    uVar2 = FUN_088b7698(param_1,param_2,param_3);
  }
  return uVar2;
}

