/* Entry 0x088B97E8 | file offset 0x000B67C0 | FUN_088b97e8 | bytes 276 */

void FUN_088b97e8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == -1) {
    FUN_088c14f4(&local_28,0,0,0);
    *param_1 = local_28;
    param_1[1] = local_24;
  }
  else {
    uVar4 = 0;
    iVar3 = 0;
    uVar2 = 0;
    iVar1 = FUN_088c7f78(param_2);
    if (iVar1 == 1) {
      iVar1 = FUN_088c7fe4(param_2);
      if (iVar1 != 0) {
        uVar4 = FUN_088c0f8c((int)*(short *)(iVar1 + 2));
        iVar3 = iVar1 + 0x44;
        if ((0 < *(short *)(iVar1 + 6)) && ((*(ushort *)(iVar1 + 4) & 2) != 0)) {
          uVar2 = 1;
        }
      }
    }
    else {
      uVar4 = FUN_088c0f8c(param_2);
    }
    FUN_088c14f4(&local_30,uVar4,iVar3,uVar2);
    *param_1 = local_30;
    param_1[1] = local_2c;
  }
  return;
}

