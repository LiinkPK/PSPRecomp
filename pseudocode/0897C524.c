/* Entry 0x0897C524 | file offset 0x001794FC | FUN_0897c524 | bytes 288 */

undefined4 FUN_0897c524(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int *local_18;
  
  iVar1 = FUN_0897ca80(param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_18 = param_4;
    iVar1 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),0x180,&local_20,1);
    if (iVar1 != 0) {
      iVar3 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_20;
    }
    *local_18 = iVar1;
    if (*local_18 == 0) {
      uVar2 = 0;
    }
    else {
      local_18[1] = *local_18 + 0xc0;
      local_18[2] = 0;
      iVar1 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),0xd0,&local_1c,1);
      uVar2 = 1;
      if (iVar1 != 0) {
        param_2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) + local_1c;
      }
      param_4[3] = iVar1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

