/* Entry 0x088A5914 | file offset 0x000A28EC | FUN_088a5914 | bytes 184 */

undefined4 FUN_088a5914(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_20 [3];
  
  piVar4 = local_20;
  iVar1 = FUN_08869954(param_2 + 0x5c,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar3 = FUN_08869a7c(param_2 + 0x5c,iVar1);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0)) {
        *piVar4 = 0;
      }
      else {
        *piVar4 = *(int *)(iVar3 + 4);
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < 3);
    FUN_088a99c4(param_2,local_20[0],local_20[1],local_20[2]);
    uVar2 = 1;
  }
  return uVar2;
}

