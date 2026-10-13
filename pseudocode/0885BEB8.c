/* Entry 0x0885BEB8 | file offset 0x00058E90 | FUN_0885beb8 | bytes 172 */

bool FUN_0885beb8(undefined1 (*param_1) [12],int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  puVar4 = (undefined4 *)FUN_0885bc44(param_2);
  uVar6 = *puVar4;
  iVar5 = FUN_0885bc44(param_2);
  uVar7 = *(undefined4 *)(iVar5 + 4);
  iVar5 = FUN_0885bc44(param_2);
  auVar3 = vzero_t();
  auVar1._8_4_ = *(undefined4 *)(iVar5 + 8);
  auVar1._4_4_ = uVar7;
  auVar1._0_4_ = uVar6;
  auVar1 = vsub_t(*param_1,auVar1);
  auVar2._8_4_ = *(undefined4 *)(iVar5 + 8);
  auVar2._4_4_ = uVar7;
  auVar2._0_4_ = uVar6;
  auVar2 = vsub_t(auVar2,param_1[1]);
  auVar1 = vmax_t(auVar1,auVar2);
  auVar1 = vmax_t(auVar1,auVar3);
  fVar8 = (float)vdot_t(auVar1,auVar1);
  return fVar8 <= *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc);
}

