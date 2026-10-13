/* Entry 0x088A08CC | file offset 0x0009D8A4 | FUN_088a08cc | bytes 176 */

void FUN_088a08cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auVar1 [12];
  int iVar2;
  undefined1 (*pauVar3) [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = param_1 + 0x24;
  FUN_089a3680(0xbf800000,iVar2);
  pauVar3 = (undefined1 (*) [12])(param_1 + 0x18);
  FUN_089a3748(pauVar3,param_3,iVar2);
  uVar4 = vdot_t(*pauVar3,*pauVar3);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,*(undefined4 *)*pauVar3);
  uVar4 = vsqrt_s(uVar4);
  vrcp_s(uVar4);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar3,uVar4);
  *(int *)*pauVar3 = auVar1._0_4_;
  *(int *)(param_1 + 0x1c) = auVar1._4_4_;
  *(int *)(param_1 + 0x20) = auVar1._8_4_;
  FUN_089a3748(param_1 + 0x30,iVar2,pauVar3);
  return;
}

