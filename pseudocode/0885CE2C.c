/* Entry 0x0885CE2C | file offset 0x00059E04 | FUN_0885ce2c | bytes 584 */

void FUN_0885ce2c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar2 = 0;
  iVar6 = 0;
  puVar3 = &DAT_089d4e38;
  do {
    *(undefined4 *)(*param_1 + iVar6) = *puVar3;
    iVar2 = iVar2 + 1;
    iVar6 = iVar6 + 4;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x12);
  iVar6 = 0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    iVar1 = 0;
    puVar3 = (undefined4 *)((int)&DAT_089d4e80 + iVar2);
    do {
      *(undefined4 *)(param_1[1] + iVar2 + iVar1) = *puVar3;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 4;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x100);
    iVar6 = iVar6 + 1;
    iVar2 = iVar2 + 0x400;
  } while (iVar6 < 4);
  iVar6 = 0;
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar7 = iVar6 + 1;
    iVar8 = iVar6 + 2;
    iVar4 = iVar6 + 3;
    puVar5 = (undefined1 *)(iVar6 + param_2);
    iVar2 = iVar2 + 1;
    iVar6 = (iVar6 + 4) % param_3;
    local_28 = CONCAT31(CONCAT21(CONCAT11(*puVar5,*(undefined1 *)(param_2 + iVar7 % param_3)),
                                 *(undefined1 *)(param_2 + iVar8 % param_3)),
                        *(undefined1 *)(param_2 + iVar4 % param_3));
    *(uint *)(*param_1 + iVar1) = *(uint *)(*param_1 + iVar1) ^ local_28;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x12);
  local_30 = 0;
  local_2c = 0;
  local_10 = 0;
  iVar2 = 0;
  do {
    local_24 = param_1;
    local_14 = iVar2;
    FUN_0885d41c(param_1,&local_30,&local_2c);
    *(undefined4 *)(*local_24 + local_14) = local_30;
    *(undefined4 *)(*local_24 + local_14 + 4) = local_2c;
    local_10 = local_10 + 2;
    iVar2 = local_14 + 8;
    param_1 = local_24;
  } while (local_10 < 0x12);
  local_10 = 0;
  local_1c = 0;
  do {
    local_18 = 0;
    local_20 = 0;
    do {
      FUN_0885d41c(local_24,&local_30,&local_2c);
      *(undefined4 *)(local_24[1] + local_1c + local_20) = local_30;
      *(undefined4 *)(local_24[1] + local_1c + local_20 + 4) = local_2c;
      local_18 = local_18 + 2;
      local_20 = local_20 + 8;
    } while (local_18 < 0x100);
    local_10 = local_10 + 1;
    local_1c = local_1c + 0x400;
  } while (local_10 < 4);
  return;
}

