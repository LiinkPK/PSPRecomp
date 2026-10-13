/* Entry 0x08964990 | file offset 0x00161968 | FUN_08964990 | bytes 204 */

void FUN_08964990(undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [12],
                 undefined1 (*param_4) [12],undefined1 (*param_5) [12],undefined1 (*param_6) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined4 uVar3;
  
  auVar1 = vsub_t(*param_6,*param_5);
  vzero_s();
  auVar1 = vscl_t(auVar1,param_2);
  vzero_s();
  auVar1 = vadd_t(auVar1,*param_5);
  vone_s();
  auVar2 = vsub_t(*param_5,auVar1);
  uVar3 = vzero_s();
  *(int *)*param_3 = auVar2._0_4_;
  *(int *)(*param_3 + 4) = auVar2._4_4_;
  *(int *)(*param_3 + 8) = auVar2._8_4_;
  *(undefined4 *)param_3[1] = uVar3;
  auVar2 = vscl_t(*param_3,param_1);
  uVar3 = vzero_s();
  *(int *)*param_3 = auVar2._0_4_;
  *(int *)(*param_3 + 4) = auVar2._4_4_;
  *(int *)(*param_3 + 8) = auVar2._8_4_;
  *(undefined4 *)param_3[1] = uVar3;
  auVar2 = vadd_t(*param_3,auVar1);
  uVar3 = vone_s();
  *(int *)*param_3 = auVar2._0_4_;
  *(int *)(*param_3 + 4) = auVar2._4_4_;
  *(int *)(*param_3 + 8) = auVar2._8_4_;
  *(undefined4 *)param_3[1] = uVar3;
  auVar2 = vsub_t(*param_6,auVar1);
  uVar3 = vzero_s();
  *(int *)*param_4 = auVar2._0_4_;
  *(int *)(*param_4 + 4) = auVar2._4_4_;
  *(int *)(*param_4 + 8) = auVar2._8_4_;
  *(undefined4 *)param_4[1] = uVar3;
  auVar2 = vscl_t(*param_4,param_1);
  uVar3 = vzero_s();
  *(int *)*param_4 = auVar2._0_4_;
  *(int *)(*param_4 + 4) = auVar2._4_4_;
  *(int *)(*param_4 + 8) = auVar2._8_4_;
  *(undefined4 *)param_4[1] = uVar3;
  auVar1 = vadd_t(*param_4,auVar1);
  uVar3 = vone_s();
  *(int *)*param_4 = auVar1._0_4_;
  *(int *)(*param_4 + 4) = auVar1._4_4_;
  *(int *)(*param_4 + 8) = auVar1._8_4_;
  *(undefined4 *)param_4[1] = uVar3;
  return;
}

