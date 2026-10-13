/* Entry 0x0892EE94 | file offset 0x0012BE6C | FUN_0892ee94 | bytes 316 */

void FUN_0892ee94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 local_50 [15];
  undefined2 local_32;
  
  puVar6 = local_50;
  FUN_0892efd0(param_1);
  FUN_08935524(local_50,&DAT_089cf0a0,0x30);
  local_50[3] = param_5;
  local_32 = param_5;
  iVar7 = 0;
  puVar5 = (undefined2 *)(param_1 + 0x1c);
  do {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar5 = *puVar6;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    iVar7 = iVar7 + 1;
    puVar5 = puVar5 + 4;
    puVar6 = puVar6 + 4;
  } while (iVar7 < 6);
  iVar8 = 0;
  iVar7 = param_1;
  do {
    uVar4 = FUN_088daa68(param_2);
    *(undefined4 *)(iVar7 + 4) = uVar4;
    FUN_088dab7c(param_2,uVar4);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
  } while (iVar8 < 4);
  uVar4 = FUN_088daa68(param_3);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_088dab7c(param_3,uVar4);
  *(undefined4 *)(param_1 + 0x18) = param_4;
  FUN_088d3cf0(0,param_1 + 4,param_1 + 0x1c);
  return;
}

