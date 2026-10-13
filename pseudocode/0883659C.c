/* Entry 0x0883659C | file offset 0x00033574 | FUN_0883659c | bytes 172 */

void FUN_0883659c(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  undefined1 (*pauVar3) [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  pauVar3 = (undefined1 (*) [12])(param_1 + 0x120);
  FUN_089a3a64(*(undefined4 *)(param_1 + 300),auStack_40,pauVar3);
  FUN_089a3a64(*(undefined4 *)(param_2 + 0xc),auStack_30,param_2);
  FUN_089a38c4(pauVar3,auStack_40,auStack_30);
  uVar2 = *(undefined4 *)(param_1 + 300);
  uVar4 = vdot_t(*pauVar3,*pauVar3);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,*(undefined4 *)*pauVar3);
  uVar4 = vsqrt_s(uVar4);
  vrcp_s(uVar4);
  uVar5 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar3,uVar5);
  *(int *)*pauVar3 = auVar1._0_4_;
  *(int *)(param_1 + 0x124) = auVar1._4_4_;
  *(int *)(param_1 + 0x128) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 300) = uVar4;
  return;
}

