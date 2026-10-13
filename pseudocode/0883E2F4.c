/* Entry 0x0883E2F4 | file offset 0x0003B2CC | FUN_0883e2f4 | bytes 200 */

void FUN_0883e2f4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 1)) {
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 7;
      local_40 = *puVar2;
      local_3c = puVar1[8];
      local_38 = puVar1[9];
      local_34 = 0x3f800000;
      local_30 = *puVar2;
      local_2c = puVar1[8];
      local_28 = puVar1[9];
      local_24 = 0x3f800000;
      FUN_089a38a8(&local_40,&local_30,param_2);
      iVar3 = iVar3 + 1;
      puVar1 = puVar2;
    } while (iVar3 < *(short *)(param_1 + 1));
  }
  return;
}

