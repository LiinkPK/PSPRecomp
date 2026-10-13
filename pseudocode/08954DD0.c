/* Entry 0x08954DD0 | file offset 0x00151DA8 | FUN_08954dd0 | bytes 364 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_08954dd0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_30 [6];
  
  local_30[5] = param_2;
  puVar1 = (undefined4 *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),0x18,local_30,1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = local_30[5] +
            (uint)*(ushort *)(*(int *)(*(int *)(local_30[5] + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) + local_30[0];
  }
  param_4[4] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  puVar3 = puVar1 + 1;
  if (*(char *)(param_3 + 0xc) == '\0') {
    if (*(char *)(param_3 + 10) == '\0') {
      local_30[1] = 0x3f800000;
      local_30[2] = 0x3f800000;
      local_30[3] = 0x3f800000;
      local_30[4] = 0x3f800000;
      FUN_089554a4(puVar1,local_30[5],puVar3,local_30 + 1,param_3 + 4);
      uVar5 = *puVar3;
      goto LAB_08954eec;
    }
    uVar5 = FUN_08955434();
    FUN_0895563c(puVar1,param_3,uVar5);
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0x3f800000;
  }
  uVar5 = *puVar3;
LAB_08954eec:
  uVar4 = puVar1[2];
  uVar7 = puVar1[3];
  uVar6 = puVar1[4];
  *param_4 = uVar5;
  param_4[1] = uVar4;
  param_4[2] = uVar7;
  param_4[3] = uVar6;
  return 1;
}

