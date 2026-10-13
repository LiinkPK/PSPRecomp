/* Entry 0x0892C924 | file offset 0x001298FC | FUN_0892c924 | bytes 304 */

void FUN_0892c924(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 local_30 [8];
  
  puVar8 = local_30;
  FUN_0892ca54();
  *(undefined4 *)(param_1 + 4) = param_3;
  local_30[0] = 1;
  local_30[1] = 10;
  local_30[2] = 0;
  local_30[4] = 0xffff;
  local_30[5] = 0xffff;
  local_30[6] = 0xffff;
  local_30[3] = param_4;
  local_30[7] = 0xffff;
  iVar6 = 0;
  puVar5 = (undefined2 *)(param_1 + 0x14);
  do {
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar5 = *puVar8;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 4;
    puVar8 = puVar8 + 4;
  } while (iVar6 < 2);
  iVar7 = 0;
  iVar6 = param_1;
  do {
    if (iVar7 != 0) {
      uVar4 = FUN_088daa68(param_2);
      *(undefined4 *)(iVar6 + 4) = uVar4;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar7 < 2);
  FUN_088d3cf0(0,param_1 + 4,param_1 + 0x14);
  *(undefined2 *)(*(int *)(param_1 + 8) + 0xe) = 0xb;
  return;
}

