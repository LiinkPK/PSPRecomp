/* Entry 0x088A6574 | file offset 0x000A354C | FUN_088a6574 | bytes 112 */

undefined4 FUN_088a6574(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -1) {
    param_1[1] = param_2;
    iVar1 = FUN_08941888(param_2,param_3);
    *param_1 = iVar1;
    param_1[2] = param_3;
    if (iVar1 == -1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

