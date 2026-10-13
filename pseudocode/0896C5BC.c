/* Entry 0x0896C5BC | file offset 0x00169594 | FUN_0896c5bc | bytes 332 */

void FUN_0896c5bc(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  fVar7 = *(float *)(param_3 + 0x24);
  fVar6 = *(float *)(param_3 + 0x28);
  uVar8 = *(undefined4 *)(param_3 + 0x20);
  FUN_0896c488(param_1,param_2,&local_40,&DAT_089da0b0);
  iVar4 = 0;
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      puVar5 = (undefined4 *)(param_1[1] + iVar3);
      *puVar5 = local_40;
      puVar5[1] = local_3c;
      puVar5[2] = local_38;
      puVar5[3] = local_34;
      puVar5 = (undefined4 *)(param_1[9] + iVar3);
      *puVar5 = uVar8;
      puVar5[1] = -fVar7;
      puVar5[2] = -fVar6;
      puVar5[3] = 0;
      auVar2._4_4_ = local_3c;
      auVar2._0_4_ = local_40;
      auVar2._8_4_ = local_38;
      auVar1._4_4_ = -fVar7;
      auVar1._0_4_ = uVar8;
      auVar1._8_4_ = -fVar6;
      auVar1 = vadd_t(auVar2,auVar1);
      local_40 = auVar1._0_4_;
      local_3c = auVar1._4_4_;
      local_38 = auVar1._8_4_;
      local_34 = vone_s();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 < *param_1);
  }
  return;
}

